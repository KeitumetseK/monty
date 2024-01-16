#include "monty.h"
/**
 * f_pstr - Prints a string constructed from the top of the stack, followed by a new line.
 * @head: Pointer to the head of the stack.
 * @counter: Line number (unused).
 * Return: No return.
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
