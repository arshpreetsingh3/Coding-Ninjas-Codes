#include <iostream>
#include "BinaryTreeNode.h"
#include <queue>
using namespace std;

BinaryTreeNode<int>* takeInputLevelWise() {
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

	queue<BinaryTreeNode<int>*> pendingNodes;
	pendingNodes.push(root);
	while (pendingNodes.size() != 0) {
		BinaryTreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter left child of " << front->data << endl;
		int leftChildData;
		cin >> leftChildData;
		if (leftChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
			front->left = child;
			pendingNodes.push(child);
		}
		cout << "Enter right child of " << front->data << endl;
		int rightChildData;
		cin >> rightChildData;
		if (rightChildData != -1) {
			BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
			front->right = child;
			pendingNodes.push(child);
		}
	}
	return root;
}

void printTree(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	cout << root->data << ":";
	if (root->left != NULL) {
		cout << "L" << root->left->data;
	}

	if (root->right != NULL) {
		cout << "R" << root->right->data;
	}
	cout << endl;
	printTree(root->left);
	printTree(root->right);
}

BinaryTreeNode<int>* takeInput() {
	int rootData;
	cout << "Enter data" << endl;
	cin >> rootData;
	if (rootData == -1) {
		return NULL;
	}

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int>* leftChild = takeInput();
	BinaryTreeNode<int>* rightChild = takeInput();
	root->left = leftChild;
	root->right = rightChild;
	return root;
}

int numNodes(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + numNodes(root->left) + numNodes(root->right);
}

void inorder(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}
void PreOrder(BinaryTreeNode<int>* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
BinaryTreeNode<int>* buildTree(int *preorder, int preLenght, int *inorder, int inLength) {
 if(inLength==0&&preLenght!=0)
 {
     return NULL;
 }
 if(preLenght==0&&inLength==0)
 {
     return NULL;
 }
 
 BinaryTreeNode<int>*root=new BinaryTreeNode<int>(preorder[0]);
 int i;
 for( i=0;i<inLength;i++)
 {
     if(inorder[i]==preorder[0])
     {
         break;
     }
 }
 int *prel= new int[i];
 int *inl=new int[inLength-i-1];
 int *prer= new int[i];
 int *inr=new int[inLength-i-1];
 
 for(int j=0;j<i;j++)
 {
     inl[j]=inorder[j];
 }
 int inrlen=0;
 for(int j=i+1;j<inLength;j++)
 {
     inr[inrlen++]=inorder[j];
 }
 int prelen=0;
 for(int j=1;j<=i;j++)
 {
     prel[prelen++]=preorder[j];
 }
 int prelenr=0;
 for(int j=i+1;j<preLenght;j++)
 {
     prer[prelenr++]=preorder[j];
 }
 BinaryTreeNode<int>*left1=buildTree(prel,prelen,inl,i);
 BinaryTreeNode<int>*right1=buildTree(prer,prelenr,inr,inrlen);
 root->left=left1;
 root->right=right1;
 return root;

}

void printLevelWise(BinaryTreeNode<int> *root){
    if(root == NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        BinaryTreeNode<int>* front = pendingnodes.front();
        pendingnodes.pop();
        cout<<front->data<<":" ;
        if(front->left != NULL){
            pendingnodes.push(front->left);
            cout<<'L'<<':'<<front->left->data<<',';
        }else if(front->left==NULL){
            cout<<'L'<<":"<<-1<<',';
        }
        if(front->right!=NULL){
            pendingnodes.push(front->right);
            cout<<"R"<<":"<<front->right->data;
        }else if(front->right == NULL){
            cout<<"R"<<":"<<-1;
        }
        cout<<endl;
    }
}
BinaryTreeNode<int> *construct(int *preorder,int preStart,int preEnd,int *inorder,int inStart,int inEnd){
    if(preStart > preEnd || inStart >inEnd){
        return NULL; 
    }
    int val = preorder[preStart];
    BinaryTreeNode<int> *node = new BinaryTreeNode<int>(val);
    int k=0;
    for(int i=inStart;i<=inEnd;i++){
        if(val==inorder[i]){
            k=i;
            break;
        }
    }
    node->left = construct(preorder,preStart+1,preStart + (k-inStart),inorder,inStart,k-1);
    node->right = construct(preorder,preStart+(k-inStart)+1,preEnd,inorder,k+1,inEnd);
    return node;
}
BinaryTreeNode<int>* buildtree(int *preorder,int prelen,int *inorder,int inlen){
    int preStart =0 ;
    int preEnd = prelen-1;
    int inStart = 0;
    int inEnd = inlen-1;
    return construct(preorder,preStart,preEnd,inorder,inStart,inEnd);

}
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main() {
	/*
		 BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
		 BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
		 BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);
		 root->left = node1;
		 root->right = node2;
	*/
	/*BinaryTreeNode<int>* root = takeInputLevelWise();
	printTree(root);
	cout << "Num: " << numNodes(root) << endl;
	inorder(root);
    cout<<endl;
    PreOrder(root);
    cout<<endl;*/
    int preorder[12]={1 ,2 ,3 ,4 ,15 ,5 ,6 ,7 ,8 ,10 ,9 ,12};
    int inorder[12]={4 ,15 ,3 ,2 ,5 ,1 ,6 ,10 ,8 ,7 ,9 ,12};
    BinaryTreeNode<int>* ans = buildTree(preorder,12,inorder,12);
    printLevelWise(ans);
    cout<<endl;
    printTree(ans);
	return 0;
}

