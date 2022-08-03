#include "lists.h"
/**
int  check_cycle(listint_t *list)
{
                listint_t *curr, *temp;

if (list == NULL || list->next == NULL)
		return (0);
	curr = list;
temp = curr->next;

while (curr != NULL && temp->next != NULL && temp->next !=NULL)
{
if (curr == temp)
return (1);
curr = curr->next;;
temp = temp->next->next;
}
return (0);
}

