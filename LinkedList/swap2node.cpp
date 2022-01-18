
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

 Node(int data){
   this->data = data;
   next = NULL;
  }
};
Node *swap_nodes(Node *head,int i,int j){
    Node *temp= head , *prev = NULL;
    Node *node1=NULL , *node2=NULL,*node1_prev = NULL, *node2_prev = NULL;
    int pos =0;
    while(temp!=NULL){
        if(pos == i){
            node1_prev = prev;
            node1 = temp;
        }
        else if(pos == j){
            node2_prev = prev;
            node2 = temp;
        }
        prev = temp;
        temp=temp->next;
        pos++;
    }
    if(node1_prev != NULL){
        node1_prev->next = node2;
    }
    else{
        head = node2;
    }
    if(node2_prev != NULL){
        node2_prev->next = node1;
    }
    else{
        head = node1;
    }
    Node *temp1 = node2->next;
    node2->next = node1->next;
    node1->next = temp1;
    return head;
}
//complexity is o(n)
Node* takeInput_Better() {
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {  
			tail -> next = newNode;
			tail = tail -> next;
			// OR
			// tail = newNode;
		}

		cin >> data;
	}
	return head;
}

void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}

int main() {

	Node *head = takeInput_Better();
	print(head);
    int i,j;
    cin>>i>>j;
	Node *ans = swap_nodes(head,i,j);
    print(ans);
	/*
	// Statically
	Node n1(1);
	Node *head = &n1;

	Node n2(2);

	Node n3(3);
	Node n4(4);
	Node n5(5);

	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;

	print(head)rfr;

ee	print(head);
	*/
	/*
	// Dynamically
	Node *n3 = new Node(10);
	Node *head = n3;
	
	Node *n4 = new Node(20);
	n3 -> next = n4;

	*/

}

