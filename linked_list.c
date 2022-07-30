#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
/*
class node{
    int data
    node next;
}
*/
struct node *head = NULL;
void insert(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct node *dummy = head;
        while (dummy->next != NULL)
        {
            dummy = dummy->next;
        }
        dummy->next = newnode;
    }
    // return head;
}
void display()
{
    struct node *dummy = head;
    while (dummy != NULL)
    {
        printf("%d\n", dummy->data);
        dummy = dummy->next;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    while (n >= 0)
    {
        insert(n);
        scanf("%d", &n);
    }

    // head=insert(1);
    // head->next=insert(2);
    // head->next->next=insert(3);
    // printf("%d",head->data);
    display();
}