#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;

};
struct Node * creatNode(int  data){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    return newNode;

}
struct Node *insertNode(struct Node * root,int data){
    if (root==NULL)
    {return creatNode(data);
    
        /* code */
    }
    if (data<root->data)
    {root->left=insertNode(root->left,data);

        /* code */
    }else if (data>root->data)
    {root->right=insertNode(root->right,data);

        /* code */
    }return root;

    
    
    
}
void inorder(struct Node *root){
    if (root!=NULL)
    {inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);

    }
    
}
int main() {
    struct Node* root = NULL;

    // Inserting nodes into the binary tree
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    // Performing in-order traversal
    printf("In-order traversal: ");
    inorder(root);

    return 0;
}