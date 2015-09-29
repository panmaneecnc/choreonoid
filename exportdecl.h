  
#ifndef CNOID_SDFLOADERPLUGIN_EXPORTDECL_H_INCLUDED
# define CNOID_SDFLOADERPLUGIN_EXPORTDECL_H_INCLUDED

# if defined _WIN32 || defined __CYGWIN__
#  define CNOID_SDFLOADERPLUGIN_DLLIMPORT __declspec(dllimport)
#  define CNOID_SDFLOADERPLUGIN_DLLEXPORT __declspec(dllexport)
#  define CNOID_SDFLOADERPLUGIN_DLLLOCAL
# else
#  if __GNUC__ >= 4
#   define CNOID_SDFLOADERPLUGIN_DLLIMPORT __attribute__ ((visibility("default")))
#   define CNOID_SDFLOADERPLUGIN_DLLEXPORT __attribute__ ((visibility("default")))
#   define CNOID_SDFLOADERPLUGIN_DLLLOCAL  __attribute__ ((visibility("hidden")))
#  else
#   define CNOID_SDFLOADERPLUGIN_DLLIMPORT
#   define CNOID_SDFLOADERPLUGIN_DLLEXPORT
#   define CNOID_SDFLOADERPLUGIN_DLLLOCAL
#  endif
# endif

# ifdef CNOID_SDFLOADERPLUGIN_STATIC
#  define CNOID_SDFLOADERPLUGIN_DLLAPI
#  define CNOID_SDFLOADERPLUGIN_LOCAL
# else
#  ifdef CnoidMediaPlugin_EXPORTS
#   define CNOID_SDFLOADERPLUGIN_DLLAPI CNOID_SDFLOADERPLUGIN_DLLEXPORT
#  else
#   define CNOID_SDFLOADERPLUGIN_DLLAPI CNOID_SDFLOADERPLUGIN_DLLIMPORT
#  endif
#  define CNOID_SDFLOADERPLUGIN_LOCAL CNOID_SDFLOADERPLUGIN_DLLLOCAL
# endif

#endif

#ifdef CNOID_EXPORT
# undef CNOID_EXPORT
#endif
#define CNOID_EXPORT CNOID_SDFLOADERPLUGIN_DLLAPI
