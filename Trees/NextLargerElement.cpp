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
bool isIdenticalsol(TreeNode<int> *root1, TreeNode<int> *root2){
    if(root1 == NULL && root2==NULL){
        return true;
    }
    if((root1==NULL && root2!=NULL) || (root1!=NULL && root2 ==NULL)){
        return false;
    }
    if((root1->data != root2->data) || (root1->children.size() != root2->children.size())){
        return false;
    }
    int i=0;
    while(i<root1->children.size()){
        TreeNode<int> * child1 = root1->children[i];
        TreeNode<int> * child2 = root2->children[i];
        if(isIdenticalsol(child1,child2)){
            i++;
        } else{
            return false;
        } 
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
TreeNode<int> *nextLargerElementSol(TreeNode<int>* root,int n){
    if(root == NULL){
        return root;
    }
    bool flag = false;
    TreeNode<int> *nextLarger = NULL;
    if(root->data > n){
        flag = true;
        nextLarger = root;
    }
    for(int i=0;i<root->children.size();i++){
        TreeNode<int> *temp = nextLargerElementSol(root->children[i],n);
        if(nextLarger == NULL){
            nextLarger = temp;
        }
        else if(temp!= NULL && temp->data < nextLarger->data ){
            flag = true;
            nextLarger = temp;
        }
    }
    return nextLarger;
}
TreeNode<int> *nextLargerElement(TreeNode<int> *root,int n){
    int temp = INT_MAX;
    if(root==NULL){
        return NULL;
    }
    TreeNode<int> *temp2 = NULL;
    queue<TreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        TreeNode<int>* front = pendingnodes.front();
        pendingnodes.pop();
        if(n < front->data && front->data < temp){
            temp2 = front;
            temp = front->data;
        }
        for(int i=0;i<front->children.size();i++){
            pendingnodes.push(front->children[i]);
        }
    }
    return temp2;
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
    //TreeNode<int>* root1 = takeInputLevelWise();


	//printTree(root);
    //printTree(root1);
    cout<<"Now lets print it level wise"<<endl;
    printLevelWise(root);
    //printLevelWise(root1);
	// TODO delete the tree
    //bool ans = containsX(root,99);
    //bool ans1 = containsXalt(root,3);
    //int ans2 = nodesGreaterThanX(root,9);
    //int ans3 = nodesGreaterThanXAlt(root,9);
    //int ans4 = NodesGreaterThanX(root,9);
    //cout<<ans2 <<" "<<ans3<<" "<<ans4<<endl;
    //cout<<ans<<" "<<ans1<<endl;
    //TreeNode<int>* node1 = maxSumNode(root);
    //TreeNode<int>* node2 = maxsumnode(root);
    //cout<<node1->data <<" " <<node2->data <<" ";
    //bool ans1 = isIdentical(root,root1);
    //bool ans2 = isIdenticalsol(root,root1);
    //cout << ans1 << " " << ans2;
    TreeNode<int> * ans = nextLargerElement(root,2);
    TreeNode<int> * ans1 = nextLargerElementSol(root,2);
    cout << ans->data <<" " <<ans1->data ;
}

