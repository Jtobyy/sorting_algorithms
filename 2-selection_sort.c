#include "sort.h"


/**
 *selection_sort - Sorts an array of integers using selection
 *sort
 *
 *@array: Array to be sorted
 *@size: Size of the array
 *Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
size_t i;
size_t j;
int tmp;
int select;
i = 0;
if (size < 2)
return;
while (i < size)
{
select = array[i];
j = i;
while (j < size)
{
if (array[j] < select)
select = array[j];
j++;
}
j = i;
while (j < size)
{
if (array[j] == select)
break;
j++;
}
if (j != i)
{
tmp = array[i];
array[i] = select;
array[j] = tmp;
print_array(array, size);
}
i++;
}
return;
}

