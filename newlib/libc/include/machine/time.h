#ifndef	_MACHTIME_H_
#define	_MACHTIME_H_

#if defined(__rtems__) || defined(__VISIUM__)
#define _CLOCKS_PER_SEC_ 1000000
#elif defined(__aarch64__) || defined(__arm__) || defined(__thumb__)
#ifdef NEWPOS
#define _CLOCKS_PER_SEC_ 1000
#else
#define _CLOCKS_PER_SEC_ 100
#endif
#endif

#ifdef __SPU__
#include <sys/_timespec.h>
int nanosleep (const struct timespec *, struct timespec *);
#endif

#endif	/* _MACHTIME_H_ */
