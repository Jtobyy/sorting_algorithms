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
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
tmp = array[i];
array[i] = array[i + 1];
array[i + 1] = tmp;
print_array(array, size);
}
}
if (is_sorted(array, size) != 0)
bubble_sort(array, size);
return;
}

/**
 *is_sorted - checks if an array of integeres is sorted
 *
 *@array: the array of integers
 *@size: size of array
 *Return: zero if sorted or 1 if not sorted
 */
int is_sorted(int *array, size_t size)
{
size_t i;
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
return (1);
}
return (0);
}
