#include "sort.h"

/**
 * swap_list - Swap two nodes
 * @nodeA: First node to swap
 * @nodeB: Second Node to swap
 */
void swap_list(listint_t *nodeA, listint_t *nodeB)
{
	listint_t *placeholder;

	placeholder = nodeA->next;
	nodeA->next = nodeB->next;
	nodeB->next = placeholder;

	if (nodeA->next)
		nodeA->next->prev = nodeA;
	if (nodeB->next)
		nodeB->next->prev = nodeB;
	placeholder = nodeA->prev;
	nodeA->prev = nodeB->prev;
	nodeB->prev = placeholder;

	if (nodeA->prev)
		nodeA->prev->next = nodeA;
	if (nodeB->prev)
		nodeB->prev->next = nodeB;
	while (placeholder->prev)
		placeholder = placeholder->prev;
	print_list(placeholder);
}
