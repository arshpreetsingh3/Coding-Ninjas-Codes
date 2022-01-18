#include <iostream>
#include <queue>
#include<bits/stdc++.h>
#include "TreeNode.h"
using namespace std;
template<typename T>
class MaxNodePair{
    public:
    TreeNode<T> *node;
    int sum;
};
MaxNodePair<int> *maxsumnodehelper(TreeNode<int> *root){
    if(root==NULL){
        MaxNodePair<int> *pair = new MaxNodePair<int>();
        pair->node = NULL;
        pair->sum = INT_MIN;
        return pair;
    }
    int sum = root->data;
    for(int i=0;i<root->children.size();i++){
        sum += root->children[i]->data;
    }
    MaxNodePair<int> *ans = new MaxNodePair<int>();
    ans->node =root;
    ans->sum = sum;
    for(int i=0;i<root->children.size();i++){
        MaxNodePair<int> *childans = maxsumnodehelper(root->children[i]);
        if(childans->sum > ans->sum){
            ans = childans;
        }
    }
    return ans;
}
TreeNode<int> *maxsumnode(TreeNode<int> *root){
    return maxsumnodehelper(root)->node;
}
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
bool containsX(TreeNode<int>* root,int x){
    if(root->data == x){
        return true;
    }
    for(int i=0;i<root->children.size();i++){
        bool ans = containsX(root->children[i],x);
        
        if(ans){
           return true;
        }
    }
    return false;
}
bool containsXalt(TreeNode<int>* root, int x) {
    // Write your code here
      
      
      for(int i=0;i<root->children.size();i++)
      {  if(containsXalt(root->children[i],x))
         return 1;
      }
      if(root->data==x)
      return 1;
      return 0;
}
int nodesGreaterThanX(TreeNode<int>*root,int x){
    int count = 0 ;
    if(root->data > x){
        count = 1;
    }
    else{
        count  = 0 ;
    }
    for(int i=0;i<root->children.size();i++){
        count += nodesGreaterThanX(root->children[i],x);
    }
    return count;
}
int nodesGreaterThanXAlt(TreeNode<int>* root,int x){
    int count =0;
    if(root == NULL){
        return 0;
    }
    for(int i=0;i<root->children.size();i++){
        count += nodesGreaterThanXAlt(root->children[i],x);
    }
    if(root->data > x){
        count++;
    }
    return count;
}
int NodesGreaterThanX(TreeNode<int>* root,int x){
    queue<TreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    int count =0;
    while(!pendingnodes.empty()){
        TreeNode<int>* front = pendingnodes.front();
        pendingnodes.pop();
        if(x < front->data){
            count++;
        }
        for(int i=0;i<front->children.size();i++){
            pendingnodes.push(front->children[i]);
        }
    }
    return count;
}
TreeNode<int> *maxSumNode(TreeNode<int> *root){
    if(root==NULL){
        return root;
    }
    vector<int> v;
    TreeNode<int> *maxSumNode=NULL;
    queue<TreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    int sum = INT_MIN;
    int temp = 0;
    while(!pendingnodes.empty()){
        temp=0;
        TreeNode<int> *currentnode = pendingnodes.front();
        temp= currentnode->data;
        for(int i=0;i<currentnode->children.size();i++){
            pendingnodes.push(currentnode->children[i]);
            temp = temp + currentnode->children[i]->data;
        }
        if(temp>sum){
            sum=temp;
            maxSumNode =    currentnode;
        }
        pendingnodes.pop();
    }
    return maxSumNode;
}
int main() {
    // 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
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
	// TODO delete the tree
    bool ans = containsX(root,99);
    bool ans1 = containsXalt(root,3);
    int ans2 = nodesGreaterThanX(root,9);
    int ans3 = nodesGreaterThanXAlt(root,9);
    int ans4 = NodesGreaterThanX(root,9);
    cout<<ans2 <<" "<<ans3<<" "<<ans4<<endl;
    cout<<ans<<" "<<ans1<<endl;
    TreeNode<int>* node1 = maxSumNode(root);
    TreeNode<int>* node2 = maxsumnode(root);
    cout<<node1->data <<" " <<node2->data <<" ";

}

