#include <stdio.h>
#include <stdlib.h>

struct node
{
    char name[50];
    int age;
    char address[50];
    int empId;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

void create_linked_list(struct node *temp)
{

    int n;
    printf("Number of Employees: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter employee name\n");
        scanf("%s", temp->name);
        printf("Enter age\n");
        scanf("%d", &temp->age);
        printf("Enter address\n");
        scanf("%s", temp->address);
        printf("Enter employee id\n");
        scanf("%d", &temp->empId);

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

void print_linked_list(struct node *a)
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("Employee details\n");
        printf("Name: %s\n", p->name);
        printf("Age: %d\n", p->age);
        printf("Address: %s\n", p->address);
        printf("Employee ID: %d\n", p->empId);
        p = p->next;
    }
}
int main()
{
    struct node *temp;
    create_linked_list(temp);
    print_linked_list(temp);
}