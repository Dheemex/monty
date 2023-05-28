#include "monty.h"
/**
 * free_stack - it frees  doubly linked list
 * @head: shows the head of stack
 */
void free_stack(stack_t *head)
{
	stack_t *aux;
	
	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
