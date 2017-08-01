#include "newton.h"
#include <math.h>


#define heap_alloc(T, C)  (T*)malloc(sizeof(T) * C) 
#define stack_alloc(T, C) (T*)alloca(sizeof(T) * C)
#define zero_mem(I, S)    memset(I, 0, S)  
#define free_mem(I)       free(I)


#define min(X, Y) (X<Y?X:Y)
#define max(X, Y) (X<Y?Y:X)
#define clamp(X, L, B) (max(L, min(X, B)))




