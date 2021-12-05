#include <iostream>
using namespace std;

struct bnode {
    int data;
    bnode* left, *right;
};

bnode* insert(int val) {
    bnode* newNode = (bnode*)malloc(sizeof(bnode));
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}
void preorderTraversal(bnode* node) {
  if (node == NULL)
    return;

  cout << node->data << "\t";
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}

void inorderTraversal(bnode* node) {
  if (node == NULL)
    return;

  inorderTraversal(node->left);
  cout << node->data << "\t";
  inorderTraversal(node->right);
}

void postorderTraversal(bnode* node) {
  if (node == NULL)
    return;

  postorderTraversal(node->left);
  postorderTraversal(node->right);
  cout << node->data << "\t";
}

int main() {
	bnode *root = (bnode*)malloc(sizeof(bnode));
	
	//Insertion into tree:
	root = insert(10);
	root->right = insert(20);
	root->left = insert(30);
	root->left->left = insert(5);
	root->left->right = insert(25);
	
	cout << "\nPreorder Sequence: " << endl;
	preorderTraversal(root);
	
  cout << "\nInorder Sequence: " << endl;
	inorderTraversal(root);

  cout << "\nPostorder Sequence: " << endl;
	postorderTraversal(root);
  return 0;
}