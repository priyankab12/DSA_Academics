//Imp stack has tc of O(1) for push and pop this makes it different from array
//but when we insert and delete from lst of ll 
//its tc is O(n) hence to follow principle of stack 
//we need to push and pop from the head node itself
//max size is not defined in stack via ll 
//stack can have variable size 
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *add;
};
struct node*top=0;
struct node*newnode;
void push(){
    int node;
    printf("enter the number of nodes to be created:");
    scanf("%d",&node);
    while(node!=0)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    int val;
    printf("enter val:");
    scanf("%d",&val);
    newnode->info=val;
    newnode->add=top;
    top=newnode;
    node--;
    }
}
void pop()
{
    top=top->add;
}
void display()
{
    struct node*temp=top;
    while(temp!=0)
    {
        printf("%d\n",temp->info);
        temp=temp->add;
    }
   
}
int main()
{         
    while(1)
    {
        printf("enter 1 for push\n");
        printf("Enter 2 for display\n");
        printf("Enter 3 for pop \n");
        printf("enter 5 for exit\n");
        int choice;
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                pop();
                break;
            case 5:
                exit(0);
                break;
        }
    }
}
void insert(){
    int n;
    printf("enter the no of modes");
    scanf("%d",&n);
    if (n!=0)
    {
        /* code */
        newnode=(struct node *)malloc(sizeof(struct node));
        int val;
        printf("enter the first element");
        scanf("%d",&val);
        newnode->info=val;
        top=newnode;
        newnode->add=NULL;
        for(int i=2;i<=n;i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            int val;
            printf("enter the element");
            scanf("%d",&val);
            newnode->info=val;
            newnode->add=top;
            top=newnode;   
        }

    }
    
}