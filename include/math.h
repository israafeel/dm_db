
#ifndef DM_DB_MATH_H
#define DM_DB_MATH_H

int random();
unsigned long randomULong();

/* If our unsigned long type can store a 64 bit number, use a 64 bit PRNG. */
#if ULONG_MAX >= 0xffffffffffffffff
#define randomULong() randomULong()
#else
#define randomULong() random()
#endif

#endif //DM_DB_MATH_H
