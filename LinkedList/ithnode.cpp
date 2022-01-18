
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
void printithnode(Node *head,int i){
    int count = 0;
    Node *temp = head;
    while(temp!=NULL){
        if(i ==count){
            cout<<temp->data;
        }
        count++;
        temp = temp->next;
    }
}
void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}
int length(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
  int count=0;
  Node *temp = head;
  while(temp!=NULL)
  {
    temp=temp->next;
    count++;
  }
    return count;
}

int main() {

	Node *head = takeInput_Better();
	print(head);
    int i=0;
    cin>>i;
    int l = length(head);
    if(i>l){
        cout<<"The node doesnt exist as index is greater than length" <<endl;
    }else{
     printithnode(head,i);   
    }

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
