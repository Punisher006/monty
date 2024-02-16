#include "monty.h"
/**
  *f_sub- subtraction
  *@head: head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	int sus, cnt;

	ptr = *head;
	for (cnt = 0; ptr != NULL; cnt++)
		ptr = ptr->next;
	if (cnt < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	sus = ptr->next->n - ptr->n;
	ptr->next->n = sus;
	*head = ptr->next;
	free(ptr);
}
