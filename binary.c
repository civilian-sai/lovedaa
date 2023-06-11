#include <stdio.h>
#include<stdlib.h>
struct node{
    struct node* lptr;
    int data;
    struct node* rptr;
};
void inorder(struct node* x)
{
    if(x!=NULL){
        inorder(x->lptr);
        printf("%d",x->data);
         inorder(x->rptr);
    }
}

struct node* insert()
{
    int i;
    printf("enter(-1 to exit)\n");
    scanf("%d",&i);
    if(i==-1)
     return(NULL);
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=i;
    printf("enter the left subtree of %d",i);
    ptr->lptr=insert();
    printf("enter the right subtree of %d",i);
    ptr->rptr=insert();
    return ptr;
}
int main() {
  struct node* root;
   root=insert();
   inorder(root);

    return 0;
}