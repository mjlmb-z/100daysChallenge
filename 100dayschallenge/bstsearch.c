#include<stdio.h>
#include<stdlib.h>
struct node{
   int key;
   struct node *left, *right;
};
struct node *newNode(int item){
   struct node *temp = (struct node *)malloc(sizeof(struct node));
   temp->key = item;
   temp->left = temp->right = NULL;
   return temp;
}
void traversetree(struct node *root){
   if (root != NULL){
      traversetree(root->left);
      printf("%d \t", root->key);
      traversetree(root->right);
   }
}
struct node* insert(struct node* node, int key){
   if (node == NULL) return newNode(key);
      if (key < node->key)
         node->left = insert(node->left, key);
      else if (key > node->key)
         node->right = insert(node->right, key);
   return node;
}
int main(){
   struct node *root = NULL;
   root = insert(root, 23);
   insert(root, 15);
   insert(root, 12);
   insert(root, 17);
   insert(root, 32);
   insert(root, 29);
   printf("The tree is :\n");
   traversetree(root);
   printf("\nInseting 45 to the tree\n");
   insert(root, 45);
   printf("Tree after insertion is :\n");
   traversetree(root);
   return 0;
}