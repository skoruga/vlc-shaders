/*****************************************************************************
 * modules.h : Module management functions.
 *****************************************************************************
 * Copyright (C) 2001 the VideoLAN team
 * $Id: a566019ffdbf698c3ef7469c670e7d1598c15b7c $
 *
 * Authors: Samuel Hocevar <sam@zoy.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#if defined(__PLUGIN__) || defined(__BUILTIN__) || !defined(__LIBVLC__)
# error This header file can only be included from LibVLC.
#endif

#ifndef LIBVLC_MODULES_H
# define LIBVLC_MODULES_H 1


/* Number of tries before we unload an unused module */
#define MODULE_HIDE_DELAY 50

/*****************************************************************************
 * module_bank_t: the module bank
 *****************************************************************************
 * This variable is accessed by any function using modules.
 *****************************************************************************/
struct module_bank_t
{
    unsigned         i_usage;

    /* Plugins cache */
    bool             b_cache;
    bool             b_cache_dirty;

    int            i_cache;
    module_cache_t **pp_cache;

    int            i_loaded_cache;
    module_cache_t **pp_loaded_cache;

    module_t       *head;
};

/*****************************************************************************
 * Module cache description structure
 *****************************************************************************/
struct module_cache_t
{
    /* Mandatory cache entry header */
    char       *psz_file;
    int64_t    i_time;
    int64_t    i_size;

    /* Optional extra data */
    module_t *p_module;
};


#define MODULE_SHORTCUT_MAX 20

/* The module handle type. */
#if defined(HAVE_DL_DYLD) && !defined(__x86_64__)
#   if defined (HAVE_MACH_O_DYLD_H)
#       include <mach-o/dyld.h>
#   endif
typedef NSModule module_handle_t;
#elif defined(HAVE_IMAGE_H)
typedef int module_handle_t;
#elif defined(WIN32) || defined(UNDER_CE)
typedef void * module_handle_t;
#elif defined(HAVE_DL_DLOPEN)
typedef void * module_handle_t;
#elif defined(HAVE_DL_SHL_LOAD)
typedef shl_t module_handle_t;
#endif

/**
 * Internal module descriptor
 */
struct module_t
{
    char       *psz_object_name;
    gc_object_t vlc_gc_data;

    module_t   *next;
    module_t   *parent;
    module_t   *submodule;
    unsigned    submodule_count;

    /** Shortcuts to the module */
    unsigned    i_shortcuts;
    char        **pp_shortcuts;

    /*
     * Variables set by the module to identify itself
     */
    char *psz_shortname;                              /**< Module name */
    char *psz_longname;                   /**< Module descriptive name */
    char *psz_help;        /**< Long help string for "special" modules */

    char    *psz_capability;                                 /**< Capability */
    int      i_score;                          /**< Score for the capability */

    bool          b_builtin;  /* Set to true if the module is built in */
    bool          b_loaded;        /* Set to true if the dll is loaded */
    bool b_unloadable;                        /**< Can we be dlclosed? */
    bool b_submodule;                        /**< Is this a submodule? */

    /* Callbacks */
    int  ( * pf_activate )   ( vlc_object_t * );
    void ( * pf_deactivate ) ( vlc_object_t * );

    /*
     * Variables set by the module to store its config options
     */
    module_config_t *p_config;             /* Module configuration structure */
    size_t           confsize;            /* Number of module_config_t items */
    unsigned int     i_config_items;        /* number of configuration items */
    unsigned int     i_bool_items;            /* number of bool config items */

    /*
     * Variables used internally by the module manager
     */
    /* Plugin-specific stuff */
    module_handle_t     handle;                             /* Unique handle */
    char *              psz_filename;                     /* Module filename */
    char *              domain;                            /* gettext domain */
};

module_t *vlc_module_create (vlc_object_t *);
module_t *vlc_submodule_create (module_t *module);

void  module_InitBank( vlc_object_t * );
#define module_InitBank(a) module_InitBank(VLC_OBJECT(a))
void module_LoadPlugins( vlc_object_t * );
#define module_LoadPlugins(a) module_LoadPlugins(VLC_OBJECT(a))
void module_EndBank( vlc_object_t *, bool );
#define module_EndBank(a,b) module_EndBank(VLC_OBJECT(a), b)

int vlc_bindtextdomain (const char *);

/* Low-level OS-dependent handler */
int  module_Load   (vlc_object_t *, const char *, module_handle_t *);
int  module_Call   (vlc_object_t *obj, module_t *);
void module_Unload (module_handle_t);

/* Plugins cache */
void   CacheMerge (vlc_object_t *, module_t *, module_t *);
void   CacheDelete(vlc_object_t *, const char *);
void   CacheLoad  (vlc_object_t *, module_bank_t *, const char *);
void   CacheSave  (vlc_object_t *, const char *, module_cache_t *const *, size_t);
module_cache_t * CacheFind (module_bank_t *, const char *, int64_t, int64_t);

#endif /* !LIBVLC_MODULES_H */
