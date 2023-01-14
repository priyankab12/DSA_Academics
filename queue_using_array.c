#include<stdio.h>
#include<stdlib.h>  //used for dynamic memory alloca,exit(0)
#define n 6
void enqueue(int queue[],int *frontt,int *rearr)
{
    int val;
    printf("enter the value to be inserted:\n");
    scanf("%d",&val);
    if(*rearr==n-1)
    {
        printf("overflow condition");
    }
    else if(*frontt==-1 && *rearr==-1)
    {
        *frontt=*frontt+1; 
        *rearr=*rearr+1;
        queue[*rearr]=val;
    }
    else{
        *rearr=*rearr+1;
        queue[*rearr]=val;
    }
}
void display(int queue[],int *frontt,int *rearr)
{
    if(*frontt==-1)
    {
        printf("underflow condition in display\n");
    }
    else{
        for(int i=*frontt;i<=*rearr;i++)
        {
        printf("the element are:%d\n",queue[i]);
        }
        
    }
    
}
void dequeue(int queue[],int *frontt,int *rearr)
{
    
    if(*frontt==-1)
    {
        printf("underflow condition\n");
    }
    else if(*frontt==*rearr)
    {
        *frontt=-1;
        *rearr=-1;
    }
    else 
    {
        printf("%d\n",queue[*frontt]);
        *frontt=*frontt+1;
    }
  
    
}
int main()
{
    int queue[n];
    int front=-1;
    int rear=-1;
    while(1)
    {
        printf("enter 1 for enqueue\n");
        printf("Enter 2 for dequeue\n");
        printf("Enter 3 for display\n");
        printf("enter 5 for exit\n");
        int choice;
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enqueue(queue,&front,&rear);
                break;
            case 2:
                dequeue(queue,&front,&rear);
                break;
            case 3:
                display(queue,&front,&rear);
                break;
            case 4:
                exit(0);
                break;
        }
    }
}



