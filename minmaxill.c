
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

void create_linke_list(struct node *temp)
{
    int n;
    printf("Enter number of nodes");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d", &temp->data);

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        temp->next = NULL;
    }
}

void print_linked_list(struct node *temp)
{
    struct node *trav = head;
    while (trav != NULL)
    {
        printf("%d\n", trav->data);
        trav = trav->next;
    }
}

int max_val(struct node *temp)
{
    struct node *p = head;
    int max = p->data;
    while (p != NULL)
    {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}

int min_val(struct node *temp)
{
    struct node *p = head;
    int min = p->data;
    while (p != NULL)
    {
        if (p->data < min)
            min = p->data;
        p = p->next;
    }
    return min;
}

int main()
{
    struct node *temp;
    create_linke_list(temp);
    print_linked_list(temp);

    printf("Max element of linked list is: %d\n ", max_val(temp));
    printf("Min element of linked list is: %d\n ", min_val(temp));
}
