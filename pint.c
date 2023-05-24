#include "monty.h"
/**
 * f_pint - prints value of item on top of stack
 * @head: pioneer item
 * @counter: line_number
 * Return: void iindicates no return
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
