
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
int indexOfNRecursive(Node *head, int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
      // Base case
   int a=0;
  if (head == NULL)
        return -1;
     
    // If key is present in current node, return true
    if (head->data == n)
    {
        return 0;
    }
      else
    {    
        a = indexOfNRecursive(head->next, n);  
  
    }
            if(a==-1)
  {
    return a;
  }
  else
  {
    return a+1;
  } 
}

int nodeInLL(Node *head,int n) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
  int count=0;
  Node *temp = head;
  while(temp!=NULL && temp->data!=-1)
  {
      if(temp->data == n){
          return count;
      }
    temp=temp->next;
    count++;
  }
    return -1;
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
    int n;
	cin>>n;
    int ans = indexOfNRecursive(head,n);
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

