/**
 * @file Ex07.01
 * @author Elazar Kolom
 * @brief This program defines a macro SWAP(t,x,y) that interchanges two arguments of type t
 * @date 8/31/21
 */
#include <stdio.h>

#define SWAP(T, x, y) ({\
            T temp = x;\
            x = y;\
            y = temp;\
            })

int main()
{
    int x = 12, y = 15;
    printf("before the swap, a = %d b = %d\n", x, y);
    SWAP(int, x, y);
    printf("after the swap, a = %d b = %d\n", x, y);
    
    double z = 2.65, w = 3.12;
    printf("before the swap, a = %f b = %f\n", z, w);
    SWAP(double, z, w);
    printf("after the swap, a = %f b = %f\n", z, w);
    
    return 0;
}

