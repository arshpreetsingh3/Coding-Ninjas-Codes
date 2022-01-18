
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

Node *merge2ll(Node *head1,Node *head2){
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;
    Node *p1 = head1;
    Node *p2 = head2;
    Node *fh = NULL;
    Node *ft = NULL;
    while(p1!=NULL && p2!=NULL){
        
      if(fh == NULL){
          if(p1->data<=p2->data){
              fh=ft=p1;
              p1=p1->next;
          }else{
              fh=ft=p2;
              p2=p2->next;
          }
      }else{
          if(p1->data<=p2->data){
              ft->next = p1;
              ft=p1;
              p1=p1->next;
          }else{
              ft->next=p2;
              ft=p2;
              p2=p2->next;
          }
      }
    }
    if(p1) ft->next=p1;
    if(p2) ft->next=p2;
    return fh;
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

	Node *head1 = takeInput_Better();
    Node *head2 = takeInput_Better();
    Node *ans = merge2ll(head1,head2);
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

