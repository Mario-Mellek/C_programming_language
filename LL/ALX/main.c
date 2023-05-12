#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
} Node_t;

size_t print_list(const Node_t *head)
{
	const Node_t *current = head;
	size_t count = 0;


	while (current != NULL)
	{
		printf("%i\n", current->data);
		current = current->next;
		count++;
	}
	return (count);
}

Node_t *add_node_at_the_end(Node_t **head, const int data)
{
	Node_t *new = malloc(sizeof(Node_t));
	if (new == NULL)
		return (NULL);

	new->data = data;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	} else{
		Node_t *tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}

Node_t *add_node_at_beginning(Node_t **head, const int data)
{
	Node_t *new = malloc(sizeof(Node_t));
	if (new == NULL)
		return (NULL);
	new->data = data;
	new->next = *head;

	*head = new;
	return (new);
}

int delete_first(Node_t **head)
{
	if (*head == NULL)
		return 1;

	Node_t *new = (*head)->next;
	int data = (*head)->data;

	free(*head);
	*head = new;

	return (data);
}

void freeing(Node_t *head)
{
	Node_t *temp;
	if (head == NULL)
		return;
	temp = head;
	while (head != NULL)
	{
		temp = (head)->next;
		free(head);
		head = temp;
	}
	head = NULL;
}

/**
  size_t deleteNode(Node_t **head, size_t index)
{
	size_t count = 0;
	Node_t *temp = NULL;
	
	if (*head == NULL)
		return (1);

	while(*head != NULL)
	{

	}

}
*/

Node_t *addAtIndex(Node_t **head, unsigned int index, int data)
{
	unsigned int count = 0;
	Node_t *temp = NULL;

	if (*head == NULL)
		return (NULL);

	Node_t *newNode = malloc(sizeof(Node_t));
	if (newNode == NULL)
		return (NULL);

	newNode->data = data;
	newNode->next = NULL;


	if (index == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}

	temp = *head;

	while (count < index - 1 && temp != NULL)
	{
		temp = (temp)->next;
		count++;
	}
	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = temp->next;
	temp->next = newNode;

	return (*head);
}

int main(void)
{
	Node_t *head = NULL;
 	add_node_at_the_end(&head, 7);
 	add_node_at_the_end(&head, 8);
	add_node_at_beginning(&head, 6);
	add_node_at_beginning(&head, 9);
	int deleted = delete_first(&head);
	addAtIndex(&head, 1, 9);
	print_list(head);
	printf("\nDeleted %d\n", deleted);
	freeing(head);

	return (0);
}
