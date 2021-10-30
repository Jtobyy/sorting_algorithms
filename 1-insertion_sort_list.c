#include "sort.h"

/**
 *insertion_sort_list - Sorts the elements of a list
 *using insertions sort
 *
 *@list: List to be sorted
 *Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
listint_t *cursor = NULL;
listint_t *tmp0 = NULL;
listint_t *tmp1 = NULL;
listint_t *tmp2 = NULL;
if (*list == NULL)
return;
for (cursor = *list; cursor != NULL;)
{
if ((cursor->next)->n < cursor->n)
{
tmp0 = cursor;
tmp1 = cursor->next;
if (cursor == *list)
{
tmp2 = cursor->next->next;
tmp0->next = tmp2;
tmp0->prev = tmp1;
tmp1->next = tmp0;
tmp1->prev = NULL;
tmp2->prev = tmp0;
*list = tmp1;
}
else if (cursor->next->next == NULL)
{
tmp2 = cursor->prev;
tmp0->next = NULL;
tmp0->prev = tmp1;
tmp1->next = tmp0;
tmp1->prev = tmp2;
tmp2->next = tmp1;
}
else 
{
tmp1 = (cursor->next)->next;
(cursor->next)->prev = cursor->prev;
(cursor->prev)->next = cursor->next;
tmp2 = cursor->next;
tmp0->next = tmp1;
tmp0->prev = tmp2;
tmp1->prev = tmp0;
tmp2->next = tmp0;
}
print_list(*list);
cursor = *list;
}
else
cursor = cursor->next;
if (is_sorted_listint_t(list) == 0)
break;
}
return;
}

/**
 *is_sorted_listint_t - Checks if a list of listint_t elements
 *is sorted.
 *
 *@list: Pointer to the
 *Return: 0 if sorted and 1 if not sorted
 */
int is_sorted_listint_t(listint_t **list)
{
listint_t *cursor;
for (cursor = *list; cursor != NULL && cursor->next != NULL; cursor = cursor->next)
{
if (cursor->n > cursor->next->n)
return (1);
}
return (0);
}
