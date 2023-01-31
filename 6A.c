#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* new_node(int d)
{
    struct Node* new=(struct Node*)malloc(sizeof(struct Node*));
    new->data=d;
    new->left=NULL;
    new->right=NULL;
    return new;
}
void inOrder(struct Node* n)
{
    if(n!=NULL)
    {
        inOrder(n->left);
        printf("%d -> ",n->data);
        inOrder(n->right);
    }
}
void preOrder(struct Node* n)
{
    if(n!=NULL)
    {
        printf("%d -> ",n->data);
        preOrder(n->left);
        preOrder(n->right);
    }
}
void postOrder(struct Node* n)
{
    if(n!=NULL)
    {
        postOrder(n->left);
        postOrder(n->right);
        printf("%d -> ",n->data);
    }
}
struct Node* insert(struct Node*root,int data)
{
    if(root==NULL)
    {
        return new_node(data);
    }
    else if(data<root->data)
    {
        root->left=insert(root->left,data);
    }
    else if(data>root->data)
    {
        root->right=insert(root->right,data);
    }
    return root;
}
int get_min(struct Node* r)
{
    if(r->left==NULL)
    {
        return r->data;
    }
    else
    {
        return get_min(r->left);
    }
}
struct Node* delete(struct Node* root,int data)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(data<root->data)
    {
        root->left=delete(root->left,data);
    }
    else if(data>root->data)
    {
        root->right=delete(root->right,data);
    }
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->right==NULL)
        {
            struct Node* temp=root->left;
            free(root);
            return temp;
        }
        else if(root->left==NULL)
        {
            struct Node* temp=root->right;
            free(root);
            return temp;
        }
        else
        {
            int least=get_min(root->right);
            root->data=least;
            root->right=delete(root->right,least);
            return root;
        }
    }
    return root;
}
int main()
{
    struct Node*root=NULL;
    int ch,ele,x;
    do
    {
        printf("\n1.Insert 2.inorder 3.preorder 4.postorder 5.delete 6.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter data of node to be inserted : ");
                scanf("%d",&ele);
                root=insert(root,ele);
                break;
            case 2:
                inOrder(root);
                break;
            case 3:
                preOrder(root);
                break;
            case 4:
                postOrder(root);
                break;
            case 5:
                printf("Enter data of node to be deleted : ");
                scanf("%d",&x);
                root=delete(root,x);
                printf("Inorder traversal: ");
                inOrder(root);
                break;
            case 6:
                exit(0);
            default:
                printf("Wrong choice, Please enter correct choice ");
                break;
        }
    }while(ch<=3);
}