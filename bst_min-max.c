#include<stdio.h>
#include<stdlib.h>

//Node of BST.
struct Node
{
int data;
struct Node* left;
struct Node* right;
};

//Create a node in BST.
struct Node* Create(int x)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->left=NULL;
temp->right=NULL;
return temp;
}

//Inserting a node in BST(Using recursion).
struct Node* Insert(struct Node *root,int data)
{
//Empty tree.
if(root==NULL)
{
root=Create(data);
return root;
}
else if(data<=root->data)
root->left=Insert(root->left,data);
else if(data>root->data)
root->right=Insert(root->right,data);
return root;
}

//Finding the maximum element of BST.
void find_max(struct Node* root)
{
if(root->right==NULL)
{printf("%d",root->data);
 return;
}
return find_max(root->right);
}

//Finding the minimum element of BST.
void find_min(struct Node* root)
{
if(root->left==NULL)
{printf("%d",root->data);
 return;
}
return find_min(root->left);
}

//Driver function.
int main()
{
struct Node* root=NULL;
int n=0,ele=0,i=0;
printf("Enter the no.of nodes\n");
scanf("%d",&n);

//Creating the tree.
for(i=1;i<=n;i++)
{
printf("Enter the element\n");
scanf("%d",&ele);
root=Insert(root,ele);
}

printf("The maximum element of BST is\n");
find_max(root);

printf("\n");

printf("The minimum element of BST is\n");
find_min(root);

return 0;
}

