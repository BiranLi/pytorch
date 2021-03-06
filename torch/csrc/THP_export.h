#ifndef THP_EXPORT_H
#define THP_EXPORT_H

#ifdef _WIN32
# ifdef _THP_CORE
#  define THP_API extern "C" __declspec(dllexport)
#  define THP_CLASS __declspec(dllexport)
# else
#  define THP_API extern "C" __declspec(dllimport)
#  define THP_CLASS __declspec(dllimport)
# endif
#else
# define THP_API extern "C"
# define THP_CLASS
#endif

#endif
