
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

//this function returns address of the first node to the main so that we can access the linked list
//this function will take input until -1 is  entered 

Node* takeInput() {
	int data;//entry of first data
	cin >> data;
	Node *head = NULL;//this will hold the address of first node of ll 
	while(data != -1) {
        //here node creation will not take place statically because in static declaration inside loops the scope is just 1 iteration 
        //in dynamic allocation it stays till a point we dont deallocate it
        //here the pointer newnode will be deallocated in the next iteration but the node structure will remain
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
		}
		else {
            //now we have to reach the node where its next part is null so as to attach tha last node to this one 
            //thus we travel on linked ist using a temp pointer
        	Node *temp = head;
			while(temp -> next != NULL) {
				temp = temp -> next;
			}
			temp -> next = newNode;
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

	Node *head = takeInput();
	print(head);
	
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

	print(head);

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
