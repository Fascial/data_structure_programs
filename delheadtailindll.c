#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

void create_linked_list()
{
    int n;
    printf("Number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node));
        temp->next = NULL;
        printf("Node data: ");
        scanf("%d", &temp->data);
        temp->prev = temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;

            temp->prev = tail;
            tail = temp;
        }
    }
}
void view()
{
    struct node *trav;
    if (trav == NULL)
        printf("Nodes deleted\n");
    else
    {
        trav = head;
        while (trav != NULL)
        {

            printf("%d", trav->data);
            trav = trav->next;
        }
    }
}

void delhead()
{

    struct node *trav;
    trav = head;
    head = head->next;
    if (head != NULL)
    {
        trav->next->prev = NULL;
        free(trav);
    }
}
void deltail()
{

    struct node *trav;
    trav = head;

    while (trav->next->next != NULL)
    {
        trav = trav->next;
    }
    free(trav->next);
    trav->next = NULL;
}

int main()
{
    int n;

    while (1)
    {
        printf("enter choice");
        scanf("%d", &n);
        if (n == 1)
            create_linked_list();
        if (n == 2)
            view();
        if (n == 3)
            delhead();
        if (n == 4)
            deltail();
    }
}