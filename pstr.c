#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack
 * @head: head
 * @counter: line_number
 * Return: null
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	(void)counter;

	ptr = *head;
	while (ptr)
	{
		if (ptr->n > 127 || ptr->n <= 0)
		{
			break;
		}
		printf("%c", ptr->n);
		ptr = ptr->next;
	}
	printf("\n");
}
