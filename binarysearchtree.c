#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*left;
    struct node*right;
};
struct node* create(){  //THIS FUNCTION IS USE TO CREATE NODE ALWAYS
    int num;
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the number to be inserted:");
    scanf("%d",&num);
    temp->info=num;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void insert(struct node*root,struct node*temp)  //Its is use to compare root node and further
{
    if(temp->info<root->info)
    {
        if(root->left==NULL)
        {
            root->left=temp;
        }
        else{
            insert(root->left,temp);
            
        }
    }
    else{
        if(root->right==NULL)
        {
            root->right=temp;
        }
        else{
            insert(root->right,temp);
            
        }
    }
    
}
//Traversal using inorder,preorder,postorder
void inorder(struct node*root){   //LNR
    inorder(root->left);
    printf("%d",root->info);
    inorder(root->right);
}


int main()
{
    struct node*root=NULL;
    struct node*temp;
    char ans='Y';
    do{
        temp=create();
        if(root==NULL)
        {
            root=temp;
        }
        else{
            insert(root,temp);
        }
        printf("enter Y if you want to continue else enter X\n");
        scanf("\t%c",&ans);
        
    }while(ans=='Y');
    inorder(root);
}
