#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

void create_linked_list(struct node *temp)
{
    int n;
    printf("Number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Node data: ");
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

int sum_of_elements(struct node *temp)
{
    struct node *p = head;
    int sum = 0;
    while (p != NULL)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

double average_val(struct node *temp)
{
    int size = 0;
    struct node *p = head;
    double sum = 0.0;
    while (p != NULL)
    {
        sum += p->data;
        size++;
        p = p->next;
    }
    double avg = sum / size;
    return avg;
}

int main()
{
    struct node *temp;
    create_linked_list(temp);
    print_linked_list(temp);

    printf("sum of elements is: %d\n ", sum_of_elements(temp));
    printf("avg of elements is: %lf\n ", average_val(temp));
}
