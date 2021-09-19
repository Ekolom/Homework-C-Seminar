/**
 * @file dog.h
 * @author Elazar Kolom
 * @brief contains the dog struct and related function declarations
 * @date 9/17/21
 */

#ifndef dog_h
#define dog_h

#include <stdio.h>
#include<string.h>

struct dog
{
    char* name;
    float size;
};

/**
 * @brief sorts the dogs by their names
 * @param dogs The dogs array to be sorted
 * @param size The size of the array
 * @return The same array but sorted
 */
struct dog* dogNameSort(struct dog dogs[], size_t size);

/**
 * @brief sorts the dogs by their weight
 * @param dogs The dogs array to be sorted
 * @param size The size of the array
 * @return The same array but sorted
 */
struct dog* dogSizeSort(struct dog dogs[], size_t size);

/**
 * @brief Prints the array. Each dog's name and weight is printed
 * @param dogs The dogs array to be printed
 * @param size The size of the array
 */
void printDogs(struct dog dogs[], size_t size);

#endif /* dog_h */
