#include<stdio.h>
#include<stdlib.h>
struct tree{
    int info;
    struct tree *left;
    struct tree *right;
};
struct tree *create(int num)
{
    struct tree *temp;
    temp=(struct tree*)malloc(sizeof(struct tree));
        temp->left=NULL;
        temp->right=NULL;
        temp->info=num;
    return(temp);
}
void insert(struct tree *root,struct tree *temp)
{
    if(temp->info<root->info)
    {
        
        if(root->left==NULL)
        root->left=temp;
        else
        insert(root->left,temp);
    }
    else{
    if(root->right==NULL)
    root->right=temp;
    else
    insert(root->right,temp);
    }
}
void inorder(struct tree*root){  //inorder gives bst in ascending order
    if(root!=NULL){
         inorder(root->left);
    printf("%d\n",root->info);
    inorder(root->right);
        
    }//LNR
    
}
void insert_in_bst(int num,struct tree*root)
{
    if(num<root->info)
    {
        if(root->left==NULL)
        {
            struct tree*temp;
            temp=(struct tree*)malloc(sizeof(struct tree*));
            temp->info=num;
            temp->left=NULL;
            temp->right=NULL;
            root->left=temp;
        }
        else
        insert_in_bst(num,root->left);
    }
    else{
        if(root->right==NULL)
        {
            struct tree*temp;
            temp=(struct tree*)malloc(sizeof(struct tree*));
            temp->info=num;
            temp->left=NULL;
            temp->right=NULL;
            root->right=temp;
        }
        else
        insert_in_bst(num,root->right);
        
    }
    
}
void search(int num,struct tree*root){
    if(num==root->info)
    printf("found");
    else if(num<root->info)
    {
        if(root->left!=NULL)
        search(num,root->left);
    }
    else{
        if(root->right!=NULL)
        search(num,root->right);
    }
    
}

int main()
{
    struct tree *root=NULL;
    struct tree *temp;
    char opt='y';
    int searc;
    int num1;
    int choice;
    int num;
    do{   
        printf("enter the number to be inserted\n");
        scanf("%d",&num1);
        temp=create(num1);
        if(root==NULL)
        {
            root=temp;  
        }
        else
            insert(root,temp);
        printf("do you want to continue ");
        scanf("\t%c",&opt);
        }while(opt=='y');
    while(1){
        printf("press 1 for print inorder\n");
        printf("press  2 for insertion\n");
        printf("press 3 for searching\n");
        printf("press 4 to exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                inorder(root);
                break;
            case 2:
                printf("Enter the num To insert in the Binary Search tree");
                scanf("%d",&num);
                insert_in_bst(num,root);
                break;
            case 3:
                printf("enter the value to be searched:\n");
                scanf("%d",&searc);
                search(searc,root);
                break;
            case 4:
                exit(1);
        }
    }
}


