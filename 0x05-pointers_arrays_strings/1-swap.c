#include "main.h"

/**
* swap_int -> given two integer swap the values they are holding
* @a: parameter 1
* @b: parametrt 2
*/
void swap_int(int *a, int *b)
{
    int tmp;   
   
    tmp = *a;
    *a = *b;
    *b = tmp;   
}
