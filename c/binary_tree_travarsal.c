/* 
Theory:   
    A binary search tree or BST is a binary tree that is either empty or in which the data 
    element of each node has a key,and: 
    1. All keys in the left subtree (if there is one) are less than the key in the root node. 
    2. All keys in the right subtree (if there is one) are greater than (or equal to) the key in 
    the root node. 
    3. The left and right subtrees of the root are binary search trees. 
    
    Insertion: Inserting an item with key 13 into a binary search tree. Lightly shaded nodes 
    indicate the path from the root down to the position where the item is inserted. The dashed 
    line indicates the link in the tree that is added to insert the item. 
    
    
    
    Deletion: Deleting a node z from a binary search tree. In each case, the node actually 
    removed is lightly shaded. (a) If z has no children, we just remove it. (b) If z has only 
    onechild,wespliceoutz.(c)Ifzhastwochildren,wespliceoutitssuccessory, which has at most 
    one child, and then replace the contents of z with the contents of y.



Algorithm 
Insertion: 
    To insert a new value v into a  binary  search  tree T.  The  procedure  is  passed a node z for 
    which key[z] = v, left[z] = NIL, and right[z] = NIL. It modifies T and some of the fields of z 
    in such a way that z is inserted into an appropriate position in the tree. 
    1. y NIL 
    2. x root[T] 
    3. while x NIL 
    4. do y x 
    5. if key[z] <key[x] 
    6. then x left[x] 
    7. elsex right[x] 
    8. p[z] y 
    9. if y =NIL 
    10. then root[T] z 
    11. else if key[z] <key[y] 
    12. thenleft[y] z 
    13. elseright[y] z 
    
    TREE-INSERT begins at the root of the tree and traces a  path  downward. The pointer x 
    traces the path, and the pointer y is maintained as the parent of x. After initialization, the 
    while loop in lines 3-7 causes these two pointers to move down the tree, going left or right 
    depending on the comparison of key[z] with key[x],until  x is set to NIL.This NIL occupies 
    the position where we wish to place the input item z. Lines 8-13 set the pointers that cause z 
    to be inserted.

TREE-DELETE(T,z) 
    1. if left[z] = NIL or right[z] =NIL 
    2. then y z 
    3. elsey TREE-SUCCESSOR(z) 
    4. if left[y] NIL 
    5. then x left[y] 
    6. elsex right[y] 
    7. if x NIL 
    8. then p[x] p[y] 
    9. if p[y] = NIL 
    10. thenroot[T] x 
    11. else if y =left[p[y]] 
    12. thenleft[p[y]] x 
    13. elseright[p[y]] x 
    14. if y z 
    15. thenkey[z] key[y] 
    16. If y has other fields, copy them,too. 
    17. returny 
 
 
TREESUCCESSOR(x) 
    1. if right[x] NIL 
    2. then returnTREE-MINIMUM(right[x]) 
    3. y p[x] 
    4. while y NIL and x =right[y] 
    5. do x y 
    6. y p[y] 
    7. returny  
*/
#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node* left;
  struct node* right;
};

struct node* createNode(value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

struct node* insertLeft(struct node* root, int value) {
  root->left = createNode(value);
  return root->left;
}

struct node* insertRight(struct node* root, int value) {
  root->right = createNode(value);
  return root->right;
}
/* 
*
*
*
*
PLEASE CHECK QUESTION AND REMOVE THE ONES NOT REQUIRED
*
*
*
*
*
*
*/
void inorderTraversal(struct node* root) 
{
  if (root == NULL){
    return;
  }
  inorderTraversal(root->left);
  printf("%d ->", root->item);
  inorderTraversal(root->right);
}


void preorderTraversal(struct node* root) {
  if (root == NULL){
    return;
  }
  printf("%d ->", root->item);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

void postorderTraversal(struct node* root) {
  if (root == NULL) {
    return;
    }
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->item);
}


int main() {
  struct node* root = createNode(1);
  insertLeft(root, 12);
  insertRight(root, 9);

  insertLeft(root->left, 5);
  insertRight(root->left, 6);
    /* 
*
*
*
*
PLEASE CHECK QUESTION AND REMOVE THE ONES NOT REQUIRED
*
*
*
*
*
*
*/
  printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\nPostorder traversal \n");
  postorderTraversal(root);
}
