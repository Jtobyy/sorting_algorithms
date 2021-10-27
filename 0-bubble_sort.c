#include "sort.h"

/**
 *bubble_sort - Implementation of the bubble_sort sorting
 *algorithm
 *
 *@array: array to be sorted
 *@size: size of the array
 *Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
size_t i;
int tmp;
for (i = 0; i < size; i++)
{
if (array[i] > array[i+1])
{
tmp = array[i];
array[i] = array[i+1];
array[i+1] = tmp;
}
print_array(array, size);
}
return;
}
