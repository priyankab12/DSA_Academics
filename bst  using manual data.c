#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*left;
    struct node*right;
};
struct node*create(int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->left=NULL;
    n->right=NULL;
    n->info=data;
}
int main(){
    struct node*p=create(3);
    struct node*p1=create(4);
    struct node*p2=create(45);
    struct node*p3=create(3);
    struct node*p4=create(4);
    struct node*p5=create(45);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
}
