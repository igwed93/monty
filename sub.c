#include "monty.h"

/**
 * f_sub - subtraction
 * @head: stack head
 * @counter: line number
 * Return: nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *pxy;
	int sus, nodes;

	pxy = *head;
	for (nodes = 0; pxy != NULL; nodes++)
		pxy = pxy->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	pxy = *head;
	sus = pxy->next->n - pxy->n;
	pxy->next->n = sus;
	*head = pxy->next;
	free(pxy);
}
