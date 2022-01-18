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

int numLeafNodes(TreeNode<int>* root){
    int count =0;
    if(root->children.size() == 0){
        count++;
    }
    for(int i=0;i<root->children.size();i++){
        count += numLeafNodes(root->children[i]);
    }
    return count;
}
int numLeafNodesalt(TreeNode<int>* root){
    int x,ans=0;
    if(root==NULL){
        return 0;
    }
    if(root->children.size()==0){
        return 1;
    }
    else{
        for(int i=0;i<root->children.size();i++){
            int x = numLeafNodesalt(root->children[i]);
            ans = ans +x;
        }
    }
    return ans;
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
int main() {
	/*TreeNode<int>* root = new TreeNode<int>(1);
	TreeNode<int>* node1 = new TreeNode<int>(2);
	TreeNode<int>* node2 = new TreeNode<int>(3);
	root->children.push_back(node1);
	root->children.push_back(node2);
	*/
	TreeNode<int>* root = takeInputLevelWise();
	printTree(root);
    printLevelWise(root);
    int ans = numLeafNodes(root);
    int ans1 = numLeafNodesalt(root);
    cout<<"The No Of Leaf Nodes in tree are: " << ans << ans1 <<endl;
	// TODO delete the tree
}

