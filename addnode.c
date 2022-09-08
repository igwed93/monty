#include "monty.h"

/**
 * addnode - add node to the head stack.
 * @head: head of the stack.
 * @n: value of new node.
 * Return: nothing.
 */
void addnode(stack_t **head, int n)
{
	stack_t *new_node, *pxy;

	pxy = *head;
	new_node = malloc(sizeof(stack_t));

	/*verify that malloc didn't fail*/
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}

	if (pxy)
		pxy->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
