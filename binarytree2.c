#include <stdio.h>
#include <math.h>
struct node {
    int data;
    struct node * left;
    struct node * right;

};
struct node * createnode(int data){
    struct node * newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;


}
struct node *insertnode(struct node *root,int data){
    if (root==NULL)
    {return createnode(data);

        /* code */
    }
    if (data<root->data)
    {root->left=insertnode(root->left,data);

        /* code */
    }
    else if (data>root->data)
    {root->right=insertnode(root->right,data);

        /* code */
    }
    
    return root;

    

} 
void inorder(struct node *root){
if (root!=NULL)
    {inorder(root->left);
        printf("%d\n",root->data);
        inorder(root->right);

    }
    
}
int main (){
    struct node *root=NULL;
    root=insertnode(root,40);
    insertnode(root,20);
    insertnode(root,45);
    insertnode(root,60);
    insertnode(root,50);
    inorder(root);
    return 0;


}