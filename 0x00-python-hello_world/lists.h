#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
/**
 * struck listint_S - singly linked list
 * @n: integer 
 * @next: point to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project 
 */
typedef struct listint_s
{
	int n;
	struct listint_s*next;
}
listint_t;

size_t print_listin(const listin_t*h);
listin_t*add_nodeint(listint_t**head,const int n);
void free_listint(listint_t*head);
int check_cycle(listint_*list);

#endif/*LISTS_H*/
