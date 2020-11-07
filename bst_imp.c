//Required libraries.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Node of BST.
struct Node
{
int data;
struct Node* left;
struct Node* right;
};


//Function to create a Node of BST.
struct Node* Create(int x)
{
struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=x;
temp->left=NULL;
temp->right=NULL;
return temp;
}

//Function to insert a Node to BST.
struct Node* Insert(struct Node* root,int data)
{
//If tree is empty.
if(root==NULL)
{root=Create(data);
 return root;
}

//Insert node to left subtree of BST,if its value is less(or)equal than root node.
else if(data<=root->data)
root->left=Insert(root->left,data);

//Insert node to right subtree of BST,if its value is greater than root node. 
else if(data>root->data)
root->right=Insert(root->right,data);
return root;
}

//Function to search an element in BST.
void Search(struct Node* root,int ele)
{
if(root==NULL)
{printf("Element not found");
 return;
}
else if(ele==root->data)
{
printf("Element is found");
return;
}

//If element is less than value of root node,means it is present in left subtree of BST.
else if(ele<root->data)
return Search(root->left,ele);

//If element is greater than value of root node,means it is present in right subtree of BST.
else if(ele>root->data)
return Search(root->right,ele);
}


//Driver function.
int main()
{
struct Node* root=NULL;
int n=0,i=0,x=0;
printf("Enter the no.of elements for your BST \n");
scanf("%d",&n);

//Inserting elements in BST.
for(i=0;i<n;i++)
{
int ele=0;
printf("Enter the element \n");
scanf("%d",&ele);
root=Insert(root,ele);
}

//Searching element in BST.
printf("Enter the element to be searched\n");
scanf("%d",&x);
Search(root,x);

return 0;
}
