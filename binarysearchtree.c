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
void preorder(struct tree*root){  
    if(root!=NULL){
    printf("%d\n",root->info);
    preorder(root->left);
    preorder(root->right);
        
    }//NLR
    
}
void postorder(struct tree*root){  
    if(root!=NULL){
        inorder(root->left);
        inorder(root->right);
        printf("%d\n",root->info);
    }//LRN
    
}

int main()
{
    struct tree *root=NULL;
    struct tree *temp;
    char opt='y';
    int num;
    do{   
        printf("enter the number to be inserted\n");
        scanf("%d",&num);
        temp=create(num);
        if(root==NULL)
        {
            root=temp;  
        }
        else
            insert(root,temp);
        printf("do you want to continue ");
        scanf("\t%c",&opt);
        }while(opt=='y');
        printf("print inorder\n");
        inorder(root);
        printf("print preoder\n");
        preorder(root);
        printf("print postorder\n");
        postorder(root);
}

