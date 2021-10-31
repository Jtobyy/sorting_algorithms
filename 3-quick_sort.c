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
  size_t cursor;
  int tmp;
  int pivot;
  if (size < 2)
    return;
do
  {
cursor = size - 1;
pivot = array[cursor];
 for (i = 0; i < size; i++)
   {
     if (array[i] > pivot)
       break;
   }
 if (i == size)
   {
   pivot = array[cursor - 1];
   }
 for (i = 0; i < size; i++)
    {
     if (array[i] > pivot)
	{
	  if (i < cursor)
	    {
	      tmp = array[i];
	      array[i] = array[cursor];
	      array[cursor] = tmp;
	      print_array(array, size);
	      cursor = i;
	    }
	  else
	    continue;
	}
      else if (array[i] < pivot)
	{
	  if (i > cursor)
	    {
	      tmp = array[i];
	      array[i] = array[cursor];
	      array[cursor] = tmp;
	      print_array(array, size);
	      cursor = i;
	    }
	  else
	    continue;
	}
    }
  }while (is_sorted_list(array, size) != 0);
 
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
