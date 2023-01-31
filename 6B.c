#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node*newNode(int d)
{
    struct node*new=(struct node*)malloc(sizeof(struct node*));
    new->data=d;
    new->left=NULL;
    new->right=NULL;
    return new;
}
struct node*insert(struct node*root,int d)
{
    if(root==NULL)
    {
        return newNode(d);
    }
    else if(d<root->data)
    {
        root->left=insert(root->left,d);
    }
    else if(d>root->data)
    {
        root->right=insert(root->right,d);
    }
    return root;
}
void inOrder(struct node*n)
{
    if(n!=NULL)
    {
        inOrder(n->left);
        printf("%d--->",n->data);
        inOrder(n->right);
    }
}
void preorder(struct node*n)
{
    if(n!=NULL)
    {
        printf("%d--->",n->data);
        preorder(n->left);
        preorder(n->right);
    }
}
void postorder(struct node*n)
{
    if(n!=NULL)
    {
        postorder(n->left);
        postorder(n->right);
        printf("%d--->",n->data);
    }
}
void main()
{
    struct node*root=NULL;
    int ch,ele;
    do{
        printf("\n1.insert 2.inorder 3.preorder 4.postorder 5.exit");
        printf("Enter the choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the element to be inserted: ");
            scanf("%d",&ele);
            root=insert(root,ele);
            break;
            case 2:
            inOrder(root);
            break;
            case 3:
            preorder(root);
            break;
            case 4:
            postorder(root);
            break;
            case 5:
            exit(0);
            default :printf("Wrong choice");
            break;
        }
    }while(ch<=3);
}