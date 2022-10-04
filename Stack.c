#include <stdio.h>
#include<stdlib.h>
#define max 30


void push(int arr[],int *topp)
{
    int val;
    printf("Enter the value to be inserted:");
    scanf("%d",&val);
    if(*topp==max-1)
    {
        printf("stack is overflow");
    }
    else
    {
        *topp=*topp+1;
        arr[*topp]=val;
    }
}
void pop(int arr[],int *topp)
{
    if(*topp==-1)
    {
        printf("Stack is underflow");

    }
    else
    {
        printf("The deleted element is:%d\n",arr[*topp]);
        *topp=*topp-1;
    }
}
void peek(int arr[],int *topp)
{
    if(*topp==-1)
    printf("Stack is empty");
    else{
        printf("%d",arr[*topp]);
            }

}
void display(int arr[],int *topp)
{
    for(int i=*topp;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
}
int main(){
    int arr[max];
    int top=-1;
    int choice;
    while(1)
    {
        printf("Enter 1 for push\n");
        printf("Enter 2 for pop\n");
        printf("Enter 3 to display elements\n");
        printf("Enter 4 to access peek element\n");
        printf("Enter 5 to exit\n");
        printf("Enter the  choice!\n");
        printf("\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push(arr,&top);
            break;
        case 2:
            pop(arr,&top);
            break;
        case 3:
            display(arr,&top);
            break;
        case 4:
            peek(arr,&top);
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("invalid choice");
        }
    }
}

