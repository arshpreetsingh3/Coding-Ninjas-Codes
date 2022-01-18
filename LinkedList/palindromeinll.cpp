
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
bool palindrome(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *slow= head;
    Node *fast = head->next;
    while(fast!= NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *mid = slow;
    Node *head2 = mid->next;
    Node *prev = NULL;
    Node *curr = head2;
    Node *n;
    //loop for reversing the other half of the linked list
    while(curr!=NULL){
        n=curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
    }
    head2=prev;
    while(head!=NULL && head2!=NULL){
        if(head->data == head2->data){
            head=head->next;
            head2=head2->next;
        }else{
            return false;
        }
    }
    return true;
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
	bool ans = palindrome(head);
    cout<<ans<<endl;
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

