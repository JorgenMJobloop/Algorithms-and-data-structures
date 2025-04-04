#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node_t;

void print_list_content(node_t *head)
{
    node_t *current = head;

    while (current != NULL)
    {
        printf("%d\n", current->value);
        current = current->next;
    }
}

void push_to_list(node_t *head, int value)
{
    node_t *current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    // Add a new variable
    current->next = (node_t *)malloc(sizeof(node_t));
    current->next->value = value;
    current->next->next = NULL;
}

int pop_from_list(node_t **head)
{
    int return_value = -1;
    node_t *next_node = NULL;

    if (*head == NULL)
    {
        return -1;
    }

    next_node = (*head)->next;
    return_value = (*head)->value;
    free(*head);
    *head = next_node;

    return return_value;
}

int main()
{
    node_t *head = NULL;
    head = (node_t *)malloc(sizeof(node_t));
    if (head == NULL)
    {
        return 1;
    }
    head->value = 1;
    head->next = NULL;
    print_list_content(head);
    free(head);
    return 0;
}