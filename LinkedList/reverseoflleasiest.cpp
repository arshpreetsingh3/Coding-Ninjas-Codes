
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
#include "Pair.cpp"
Node *reversell_3(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *smallans = reversell_3(head->next);
    Node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    return smallans;
}
Pair reversep(Node *head){
    if(head == NULL || head->next == NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }
    Pair smallans  = reversep(head->next);
    smallans.tail->next = head;
    head->next = NULL;
    Pair ans;
    ans.head = smallans.head;
    ans.tail = head;
    return ans;
}
Node *reverse_better(Node *head){
    return reversep(head).head;
}
//complexity is O(n2)
Node *reverse(Node *head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *smallans = reverse(head->next);
    Node *temp = smallans;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = head;
    head->next = NULL;
    return smallans;
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
	Node *ans = reversell_3(head);
    cout<<"new reversed ll is: "; 
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

 