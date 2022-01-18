
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
Node *skipmdeleten(Node *head,int M,int N){
    int c1=1,c2=1;
    Node *temp1 = head;
    Node *temp2;
    Node *temp = head;
    while(temp1!= NULL){
        while(c1!=M && temp1!=NULL){
            temp1=temp1->next;
            c1++;
        }
        if(temp1!=NULL){
            temp2=temp1->next;
            while(c2!=N && temp2!=NULL){
                temp2=temp2->next;
                c2++;
            }
            if(temp2!=NULL){
                temp2=temp2->next;
            }
            temp1->next = temp2;
            c1 =1;
            c2 = 1;
            temp1=temp1->next;
        }
    }
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
    cout<<endl;
    int m,n;
    cin>>m>>n;
	Node *ans = skipmdeleten(head,m,n);
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

