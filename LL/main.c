#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr;

typedef struct node{
        int value;
        nodePtr next;
}node;

int main (void)
{
	nodePtr head = NULL;

        nodePtr first = malloc(sizeof(node));
	if (first == NULL)
		return (1);
        first->next = NULL;
        first->value = 1;

        nodePtr second = malloc(sizeof(node));
	if (second == NULL)
	{
		free(first);
		return (1);
	}
        second->next = NULL;
        second->value = 2;

        nodePtr third = malloc(sizeof(node));
	if (third == NULL)
	{
		free(first);
		free(second);
		return (1);
	}
        third->next = NULL;
        third->value = 3;


	head = first;
        first->next = second;
        second->next = third;

	printf("Head is pointing at: %p\n", head);

	nodePtr temp;
        for (temp = head; temp != NULL; temp = temp->next)
        {
                printf("Value of current node is:   %d\n", temp->value);
		printf("address of current node is: %p\n", temp);
        }

	printf("temp is equal to what third points at (End of linked list), %p, %p\n", temp, third->next);


	while (head != NULL)
	{
		nodePtr tmp = head->next;
		free(head);
		head = tmp;
	}

        return (0);
}
