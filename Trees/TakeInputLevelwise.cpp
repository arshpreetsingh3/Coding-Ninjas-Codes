#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInputLevelWise() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);

	queue<TreeNode<int>*> pendingNodes;
	
	pendingNodes.push(root);
	while (pendingNodes.size() != 0) {
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter num of children of " << front->data << endl;
		int numChild;
		cin >> numChild;
		for (int i = 0; i < numChild; i++) {
			int childData;
			cout << "Enter " << i << "th child of " << front->data << endl;
			cin >> childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}

TreeNode<int>* takeInput() {
	int rootData;
	cout << "Enter data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);
	
	int n;
	cout << "Enter num of children of " << rootData << endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		TreeNode<int>* child = takeInput();
		root->children.push_back(child);
	}
	return root;
}

void printTree(TreeNode<int>* root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << ":";
	for (int i = 0; i < root->children.size(); i++) {
		cout << root->children[i]->data << ",";
	}
	cout << endl;
	for (int i = 0; i < root->children.size() ; i++) {
		printTree(root->children[i]);
	}
}
#include<queue>
bool isIdenticalsol(TreeNode<int> *root1, TreeNode<int> * root2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
   if (root1 == NULL || root2 == NULL) 
   {
     return false;
   }
   queue<TreeNode<int>*> pendingNodes1;
   queue<TreeNode<int>*> pendingNodes2;
    pendingNodes1.push(root1);
    pendingNodes2.push(root2);
  while (pendingNodes1.size() != 0 &&  pendingNodes2.size() != 0 ) 
  {
    TreeNode<int>* front1 = pendingNodes1.front();
    TreeNode<int>* front2 = pendingNodes2.front();
      pendingNodes1.pop();
      pendingNodes2.pop();
    
    if(front1->data==front2->data)
    {
      for (int i = 0,j=0; i < front1->children.size(), j < front2->children.size()  ; i++,j++) 
      {
      	pendingNodes1.push(front1->children[i]);
      	pendingNodes2.push(front2->children[j]);
	  }     
    }
    else
    {
      return false;
    }
  }
  if( pendingNodes1.size()!=pendingNodes2.size() )
  {
    return false;
  }
  return true;
}
bool isIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
   if (root1 == NULL || root2 == NULL) 
   {
     return false;
   }
   queue<TreeNode<int>*> pendingNodes1;
   queue<TreeNode<int>*> pendingNodes2;
    pendingNodes1.push(root1);
    pendingNodes2.push(root2);
  while (pendingNodes1.size() != 0 &&  pendingNodes2.size() != 0 ) 
  {
    TreeNode<int>* front1 = pendingNodes1.front();
    TreeNode<int>* front2 = pendingNodes2.front();
      pendingNodes1.pop();
      pendingNodes2.pop();
    
    if(front1->data==front2->data)
    {
      for (int i = 0,j=0; i < front1->children.size(), j < front2->children.size()  ; i++,j++) 
      {
      	pendingNodes1.push(front1->children[i]);
      	pendingNodes2.push(front2->children[j]);
	  }     
    }
    else
    {
      return false;
    }
  }
  if( pendingNodes1.size()!=pendingNodes2.size() )
  {
    return false;
  }
  return true;
}
int main() {
	/*TreeNode<int>* root = new TreeNode<int>(1);
	TreeNode<int>* node1 = new TreeNode<int>(2);
	TreeNode<int>* node2 = new TreeNode<int>(3);
	root->children.push_back(node1);
	root->children.push_back(node2);
	*/
	TreeNode<int>* root = takeInputLevelWise();
	printTree(root);
	// TODO delete the tree
}

