/**
 * @file dog.c
 * @author Elazar Kolom
 * @brief contains the implementation of the function implementations related to dog
 * struct
 * @date 9/17/21
 */

#include "dog.h"

struct dog* dogNameSort(struct dog dogs[], size_t size)
{
    size_t first, index;
    char *temp;
    for (first = 1; first < size; ++first)
    {
        temp = dogs[first].name;
        for (index = first; index > 0 && strcmp(temp, dogs[index-1].name) < 0; --index)
        {
            dogs[index].name = dogs[index-1].name;
        }
        dogs[index].name = temp;
    }
    
    return dogs;
}

struct dog* dogSizeSort(struct dog dogs[], size_t size)
{
    size_t index, first;
    float temp;
    for (first = 1; first < size; ++first)
    {
        temp = dogs[first].size;
        for (index = first; index > 0 && temp < dogs[index-1].size; --index)
        {
            dogs[index].size = dogs[index-1].size;
        }
        dogs[index].size = temp;
    }
    
    return dogs;
}

void printDogs(struct dog dogs[], size_t size)
{
    for (size_t index = 0; index < size; ++index)
    {
        printf("%s, %f\n", dogs[index].name, dogs[index].size);
    }
}
