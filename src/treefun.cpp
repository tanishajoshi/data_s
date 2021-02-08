/*
size(): return no. nodes in the tree
empty(): return true if tree is empty and false o/w
root(): return position for tree's root, error if tree empty
positions(): return a position list of nodes in tree.

each node of a tree is accessed thru a position object
operator * is overloaded. given a position node P, it's 
associated element can be accessed by *P

position/node accessor functions
p.parent(): return parent of p, error if p == root
p.children(): return position list containing children of node p
p.isRoot(): return true if p is root. false o/w
p.isExternal(): return true if p is external 

a node is external if it doesn't have any child nodes. 



binary tree: ordered tree in which ever node has at most 2 children
each child node is laeled as left or right child

left child precedes right in ordering. proper tree= every internal node
has exactly 2 children 

*/

#include <iostream>
using namespace std;


struct node {
	int key;
	node* left;
	node* right;
};

class btree {
  btree();
  ~btree();
  void insert(int key);
  node *search(int key);
  void destroy_tree();
 
  private:
    void destroy_tree(node *leaf);
    void insert(int key, node *leaf);
    node *search(int key, node *leaf);
    node *root;
};
/*
 Due to the use of pointers, it will be necessary to include a function to 
delete the tree in order to conserve memory after the program has finished
*/
void btree::destroy_tree(node *leaf) {
	if(leaf!= NULL) {
    destroy_tree(leaf-> left);
    destroy_tree(leaf -> right);
    delete leaf;
  }
}
void btree::insert(int key, node *leaf) {
  if(key_ < leaf->key ) {
    if(leaf->left!=NULL)
     insert(key_, leaf->left);
    else {
      leaf->left=new node;
      leaf->left->key=key_;
      leaf->left->left=NULL;    //Sets the left child of the child node to null
      leaf->left->right=NULL;   //Sets the right child of the child node to null
    }  
  } else if(key_>=leaf->key){
      if(leaf->right!=NULL)
      insert(key_, leaf->right);
      else {
      leaf->right=new node;
      leaf->right->key=key_;
      leaf->right->left=NULL;  //Sets the left child of the child node to null
      leaf->right->right=NULL; //Sets the right child of the child node to null
      }

   }  
}
void btree::insert(int key_){
  if(root!=NULL)
    insert(key_, root);
  else {
    root=new node;
    root->key=key_;
    root->left=NULL;
    root->right=NULL;
  }
} 
