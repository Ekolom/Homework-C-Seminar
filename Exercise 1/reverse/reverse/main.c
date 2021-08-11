/**
 @file reverse.c
 @author Elazar Kolom
 @date 08/10/21
 */

#include <stdio.h>

/**
 @brief takes numbers from input and prints them in the reverse order
 */
void reverse() {
    int value;
    scanf("%d", &value);
    if (value != 0) {
        reverse();
        printf("%d ", value);
    }
}

int main()
{
    printf("enter numbers\n");
    reverse();
    printf("\n");
}
