#include "sort.h"


/**
 *quick_sort - Implementation of a quicksort algorithm using
 *the Lomuto partition scheme
 *
 *@array: Array to be sorted
 *@size: Size of the array
 *Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
  size_t i;
  size_t j;
  size_t k;
  int tmp;
  int pivot;
  int cursor;
  int tracker;
  cursor = size - 1;
  tracker = 0;
  for (k = 0; k < size; k++)
    {
      pivot = array[size - 1];
      
      for (i = 0, j = 0; j < size; j++)
    {
      if (array[i] > pivot)
	{
	  if (tracker != 1)
	    {
	      tmp = array[i];
	      array[i] = array[cursor];
	      array[cursor] = tmp;
	      tmp = i;
	      i = cursor - 1;
	      cursor = tmp;
	      tracker = 1;
	      print_array(array, size);
	    }
	  else
	    {
	      i--;
	      continue;
	    }
	}
      else if (array[i] < pivot)
	{
	  if (tracker != 2)
	    {
	      tmp = array[i];
	      array[i] = array[cursor];
	      array[cursor] = tmp;
	      tmp = i;
	      i = cursor + 1;
	      cursor = tmp;
	      tracker = 2;
	      print_array(array, size);
	    }
	  else
	    {
	      i++;
	      continue;
	    }
	}
    }
    }
  return;
}

/**
 *is_sorted_list - Checks if an array of integeres is sorted
 *
 *@array: The array of integers
 *@size: Size of array
 *Return: 0 if sorted or 1 if not sorted
 */
int is_sorted_list(int *array, size_t size)
{
size_t i;
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
return (1);
}
return (0);
}
