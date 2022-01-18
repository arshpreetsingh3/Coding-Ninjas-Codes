#include <iostream>
#include "BinaryTreeNode.h"
#include <queue>
#include<bits/stdc++.h>
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

BinaryTreeNode<int>* buildTreeHelper(int* in, int* pre, int inS, int inE, int preS, int preE) {
	if (inS > inE) {
		return NULL;
	}

	int rootData = pre[preS];
	int rootIndex = -1;
	for (int i = inS; i <= inE; i++) {
		if (in[i] == rootData) {
			rootIndex = i;
			break;
		}
	}

	int lInS = inS;
	int lInE = rootIndex - 1;
	int lPreS = preS + 1;
	int lPreE = lInE - lInS + lPreS;
	int rPreS = lPreE + 1;
	int rPreE = preE;
	int rInS = rootIndex + 1;
	int rInE = inE;
	BinaryTreeNode<int>*  root = new BinaryTreeNode<int>(rootData);
	root->left = buildTreeHelper(in, pre, lInS, lInE, lPreS, lPreE);
	root->right = buildTreeHelper(in, pre, rInS, rInE, rPreS, rPreE);
	return root;
}

BinaryTreeNode<int>* buildTree(int* in, int* pre, int size) {
	return buildTreeHelper(in, pre, 0, size - 1, 0, size - 1);
}

int height(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + max(height(root->left), height(root->right));
}

int diameter(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return 0;
	}

	int option1 = height(root->left) + height(root->right);
	int option2 = diameter(root->left);
	int option3 = diameter(root->right);
	return max(option1, max(option2, option3));
}

pair<int, int> heightDiameter(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		pair<int, int> p;
		p.first = 0;
		p.second = 0;
		return p;
	}
	pair<int, int> leftAns = heightDiameter(root->left);
	pair<int,int> rightAns = heightDiameter(root->right);
	int ld = leftAns.second;
	int lh = leftAns.first;
	int rd = rightAns.second;
	int rh = rightAns.first;

	int height = 1 + max(lh, rh);
	int diameter = max(lh + rh, max(ld, rd));
	pair<int, int> p;
	p.first = height;
	p.second = diameter;
	return p;
}
class PairAns{
    public:
        int min;
        int max;
};
pair<int,int> minMaxAlt(BinaryTreeNode<int>* root){
    if(root==NULL){
        pair<int,int> p;
        p.first = INT_MIN;
        p.second = INT_MAX;
        return p;
    }
    pair<int,int> left = minMaxAlt(root->left);
    pair<int,int> right = minMaxAlt(root->right);
    int leftmin = left.second;
    int leftmax = left.first;
    int rightmin = right.second;
    int rightmax = right.first;
    pair<int,int> final;
    final.first = max(root->data,max(leftmax,rightmax));
    final.second = min(root->data,min(leftmin,rightmin));
    return final;

}
PairAns minMax(BinaryTreeNode<int> *root){
    if(root == NULL){
        PairAns p;
        p.min = INT_MAX;
        p.max = INT_MIN;
        return p;
    }
    PairAns left = minMax(root->left);
    PairAns right = minMax(root->right);
    int leftmin =  left.min;
    int leftmax = left.max;
    int rightmin = right.min;
    int rightmax = right.max;
    PairAns final;
    final.max = max(root->data,max(leftmax,rightmax));
    final.min = min(root->data,min(leftmin,rightmin));
    return final;
}
int sumOfAllNodes(BinaryTreeNode<int> * root){
    if(root == NULL){
        return 0;
    }
    int sum = root->data;
    int lsum = sumOfAllNodes(root->left);
    int rsum = sumOfAllNodes(root->right);
     sum = sum + lsum + rsum;
    return sum;
}
bool isBalanced(BinaryTreeNode<int> * root){
    if(root == NULL){
        return true;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    int diff = max(lh,rh) - min(lh,rh);
    bool a = isBalanced(root->left);
    bool b = isBalanced(root->right);
    bool f = a && b;
    if(diff > 1){
        return false;
    }
    else if(diff<=1 && f){
        return true;
    }
}
class Balanced{
    public:
    int height;
    bool balanced;
};
Balanced * isBalancedSolHelper(BinaryTreeNode<int>* root){
    if(root == NULL){
        Balanced * ans = new Balanced();
        ans->height=0;
        ans->balanced=true;
        return ans;
    }
    Balanced* left = isBalancedSolHelper(root->left);
    Balanced* right = isBalancedSolHelper(root->right);
    bool flag;
    if((left->balanced!= true) || (right->balanced!= true) || abs(left->height - right->height) > 1){
        flag =  false;
    }else{
        flag = true;
    }
    Balanced * output = new Balanced();
    output->height = max(left->height,right->height) +1;
    output->balanced = flag;
    return output; 
}
bool isBalancedSol(BinaryTreeNode<int>* root){
    if(root == NULL){
        return true;
    }
    return isBalancedSolHelper(root)->balanced;
}
void printLevelWiseSol(BinaryTreeNode<int> * root){
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()!=0){
        BinaryTreeNode<int> * front = q.front();
        q.pop();
        if(front == NULL){
            if(q.empty()){
                break;
            }
            cout<<endl;
            q.push(NULL);
            continue;
        }
        cout<<front->data;
        if(front->left){
            q.push(front->left);
        }
        if(front->right){
            q.push(front->right);
        }
    }
}
void printLevelWise(BinaryTreeNode<int> *root){
    if(root == NULL){
        return ;
    }
    //BinaryTreeNode<int>* null = new BinaryTreeNode<int>(NULL);
    queue<BinaryTreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size()!=0){
        for(int i=0;i<pendingnodes.size();i++){
            BinaryTreeNode<int> *front = pendingnodes.front();
            pendingnodes.pop();
            cout<<front->data<<" ";
            //cout<<endl;
            if(front->left != NULL){
                pendingnodes.push(front->left);
            }
            if(front->right != NULL){
                pendingnodes.push(front->right);
            }
        }
        cout<<endl;
    }
}
BinaryTreeNode<int> * removeLeafNodes(BinaryTreeNode<int>* root){
    if(root == NULL){
        return root;
    }
    if(root->left == NULL && root->right == NULL){
        return NULL;
    }
    BinaryTreeNode<int>* root1 = removeLeafNodes(root->left);
    BinaryTreeNode<int>* root2 = removeLeafNodes(root->right);
    root->right=root2;
    root->left=root1;
    return root;
}
void nodesWithoutSiblingsol(BinaryTreeNode<int>*root){
    if(root == NULL){
        return ;
    }
    if(root->left == NULL && root->right!=NULL){
        cout<<root->right->data<<endl;
    }else if(root->left!=NULL && root->right == NULL){
        cout<<root->left->data<<endl;
    }
    nodesWithoutSiblingsol(root->left);
    nodesWithoutSiblingsol(root->right);
}
void nodesWithoutSibling(BinaryTreeNode<int> *root){
    if(root == NULL){
        return;
    }
    nodesWithoutSibling(root->left);
    nodesWithoutSibling(root->right);
    if(root->left == NULL && root->right!=NULL){
        cout<<root->right->data<<endl;
    }
    if(root->right == NULL && root->left!= NULL){
        cout<<root->left->data<<endl;
    }
}
template <typename T>
class node{
    public:
     T data;
     node<T> *next;
     node(T data){
         this->data=data;
         this->next = NULL;
     }
};
vector<node<int>*> createLLForEachLevel(BinaryTreeNode<int>* root){
    queue<BinaryTreeNode<int>*> q;
    vector<node<int>*> v;
    q.push(root);
    q.push(NULL);
    node<int> *head = NULL;
    node<int> *tail = NULL;
    while(!q.empty()){
        BinaryTreeNode<int>* current = q.front();
        if(current!=NULL){
            if(current->left!=NULL){
                q.push(current->left);
            }
            if(current->right!=NULL){
                q.push(current->right);
            }
            if(head == NULL && tail == NULL){
                int x = current->data;
                node<int> *n=new node<int>(x);
                head = n;
                tail = n;
            }else{
                int x= current->data;
                node<int>* n = new node<int>(x);
                tail->next = n;
                tail = n;
            }
        }else{
            if(q.size()!=1){
                q.push(NULL);
            }
            v.push_back(head);
            head=NULL;
            tail=NULL;
        }
        q.pop();
    }
    return v;
}
    
void zigZagOrder(BinaryTreeNode<int>* root){
    stack<BinaryTreeNode<int>*> s1;
    stack<BinaryTreeNode<int>*> s2;
    s1.push(root);
    while(!s1.empty()||!s2.empty()){
        while(!s1.empty()){
            BinaryTreeNode<int>* top1 = s1.top();
            s1.pop();
            cout<<  top1->data << " ";
            if(top1->left!=NULL){
                s2.push(top1->left);
            }
            if(top1->right!=NULL){
                s2.push(top1->right);
            }
        }
        cout<<endl;
        while(!s2.empty()){
            BinaryTreeNode<int>* top2 = s2.top();
            s2.pop();
            cout<< top2->data <<" ";
            if(top2->right!=NULL){
                s1.push(top2->right);
            }
            if(top2->left!=NULL){
                s1.push(top2->left);
            }
        }
        cout<<endl;
    }
}
BinaryTreeNode<int>* searchInBST(BinaryTreeNode<int>* root,int k){
    if(root == NULL){
        return root;
    }
    if(root->data == k ){
        return root;
    }else if(k>root->data){
        return searchInBST(root->right,k);
    }else{
        return searchInBST(root->left,k);
    }
}
void elementsInRangek1k2(BinaryTreeNode<int>* root,int k1,int k2){
    if(root==NULL){
        return;
    }
    if(root->data > k1){
        elementsInRangek1k2(root->left,k1,k2);
    }
    if(root->data >= k1 && root->data <= k2){
        cout<<root->data<<" ";
    }
    
    if(root->data <= k2){
        elementsInRangek1k2(root->right,k1,k2);
    }
}

int maximum(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return INT_MIN;
	}
	return max(root->data, max(maximum(root->left), maximum(root->right)));
}

int minimum(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return INT_MAX;
	}
	return min(root->data, min(minimum(root->left), minimum(root->right)));
}

bool isBST(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		return true;
	}

	int leftMax = maximum(root->left);
	int rightMin = minimum(root->right);
	bool output = (root->data > leftMax) && (root->data <= rightMin) && isBST(root->left) && isBST(root->right);
	return output;
}
class IsBSTReturn {
	public:
		bool isBST;
		int minimum;
		int maximum;
};

IsBSTReturn isBST2(BinaryTreeNode<int>* root) {
	if (root == NULL) {
		IsBSTReturn output;
		output.isBST = true;
		output.minimum = INT_MAX;
		output.maximum = INT_MIN;
		return output;
	}
	IsBSTReturn leftOutput = isBST2(root->left);
	IsBSTReturn rightOutput = isBST2(root->right);
	int minimum = min(root->data, min(leftOutput.minimum, rightOutput.minimum));
	int maximum = max(root->data, max(leftOutput.maximum, rightOutput.maximum));
	bool isBSTFinal = (root->data > leftOutput.maximum) && (root->data <= rightOutput.minimum) &&
		leftOutput.isBST && rightOutput.isBST;
	IsBSTReturn output;
	output.minimum = minimum;
	output.maximum = maximum;
	output.isBST = isBSTFinal;
	return output;
}
bool isBST3(BinaryTreeNode<int>* root, int min = INT_MIN, int max = INT_MAX) {
	if (root == NULL) {
		return true;
	}
	if (root->data < min || root->data > max) {
		return false;
	}
	bool isLeftOk = isBST3(root->left, min, root->data - 1);
	bool isRightOk = isBST3(root->right, root->data, max);
	return isLeftOk && isRightOk;
}
BinaryTreeNode<int>* helper(int *arr,int start,int end){
    if(start>end){
        return NULL;
    }
    //int midd = start + (end-start)/2
    int midd=(start+end)/2;
    int mid = arr[midd];
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(mid);
    root->left = helper(arr,start,midd-1);
    root->right = helper(arr,midd+1,end);
    return root;

}
BinaryTreeNode<int> * constructTree(int *input,int n){
    int start=0,end = n-1;
    return helper(input,start,end);
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
	/*int in[] = {4,2,5,1,8,6,9,3,7};
	int pre[] = {1,2,4,5,3,6,8,9,7};
	BinaryTreeNode<int>* root = buildTree(in, pre, 9);
	*/
	//BinaryTreeNode<int>* root = takeInputLevelWise();
	//printTree(root);
	//cout << "Num: " << numNodes(root) << endl;
	//inorder(root);
	//cout << endl;
    //printLevelWise(root);
    //cout<<"Now using cn sol"<<endl;
    //printLevelWiseSol(root);
    //cout<<endl;
	//pair<int, int> p = heightDiameter(root);
	//cout << "Height: " << p.first << endl;
	//cout << "Diameter: " << p.second << endl;
   // PairAns ans = minMax(root);
   // cout<<"Max element : "<<ans.max <<"Min element : "<<ans.min;
	/*pair<int,int> ans1 = minMaxAlt(root);
    cout<<"Max element : "<<ans1.first <<"Min element : "<<ans1.second;
    int sum = sumOfAllNodes(root);
    cout<<"Sum of all nodes is : "<<sum;
    bool ans = isBalanced(root);
    if(ans){
        cout<<"Balanced"<<endl;
    }else{
        cout<<"Unbalanced"<<endl;
    }
    bool f = isBalancedSol(root);
    if(f){
        cout<<"balanced via class solution which takes o(n) time"<<endl;
    }else{
        cout<<"Unbalanced"<<endl;
    }*/
    /*BinaryTreeNode<int>* answer = removeLeafNodes(root);
    printLevelWiseSol(answer);
    */
   /*cout<<"ans is"<<endl;
    nodesWithoutSibling(root);
    nodesWithoutSiblingsol(root);
    */
   /*
   vector<node<int>*> v = createLLForEachLevel(root);
   for(int i=0;i<v.size();i++){
       cout<<v[i]->data<<" "<<v[i]->next<<endl;
   }*/
   /*
   zigZagOrder(root);
    delete root;
    */
   //elementsInRangek1k2(root,6,10);
  /* if(isBST(root)){
       cout<<"Given tree is a bst using sol1 where we find the min max and isbst seperatlely"<<endl;
   }else{
       cout<<"not a bst"<<endl;
   }*/
   //IsBSTReturn ans = isBST2(root);
   /*if(isBST3(root,INT_MIN,INT_MAX)){
       cout<<"Given tree is a bst using sol3 where we refine the constraints using -inf , + inf and respectively for the the left right subtrees"<<endl;
   }else{
       cout<<"not a bst"<<endl;
   }*/
   int input[7]={1,2,3,4,5,6,7};
   BinaryTreeNode<int> * ans = constructTree(input,7);
   printLevelWise(ans);
   printLevelWiseSol(ans);
}

