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

void printLevelWise(TreeNode<int>* root){
    if(root == NULL){
        return;
    }
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data << ":";
        for(int i=0;i<front->children.size();i++){
            if(i == front->children.size()-1){
                cout<<front->children[i]->data;
            }
            else{
                cout<<front->children[i]->data<<"," ;
            }
        }
        cout<<endl;
        for(int i=0;i<front->children.size();i++){
            pendingNodes.push(front->children[i]);
        }
        }

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
TreeNode<int>* maxDataNodealt(TreeNode<int>* root){
    if(root==NULL){
        return root;
    }
    TreeNode<int> *max = root;
    for(int i=0;i<root->children.size();i++){
        TreeNode<int> *temp = maxDataNodealt(root->children[i]);
        if(temp->data > max->data){
            max = temp;
        }
    }
    return max;
}
TreeNode<int>* maxDataNode(TreeNode<int>* root) {
  TreeNode<int> * max = new TreeNode<int>(0);
  if(root==NULL)
  {
    return root;
  }
  queue<TreeNode<int>*> pendingNodes;
  pendingNodes.push(root);
  while (pendingNodes.size() != 0) 
  {
    TreeNode<int>* front = pendingNodes.front();
    pendingNodes.pop();
   if( max->data < front->data )
   {
     max->data=front->data;
   }
	for (int i = 0; i < front->children.size() ; i++) 
    {
		pendingNodes.push(front->children[i]);
	}
  }
  return max;
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
    cout<<"Now lets print it level wise"<<endl;
    printLevelWise(root);
    TreeNode<int>* maxnode = maxDataNode(root);
    TreeNode<int>* maxnode1 = maxDataNodealt(root);
    cout << "The data with the max data value is  " <<maxnode->data << maxnode1->data <<endl;
	// TODO delete the tree
}

