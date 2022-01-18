#include<bits/stdc++.h>
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

void print(Node *head){
    //if head->next is the condition of while loop then the ending element wont be added 
    //if we want to stop at the last node then also use head->next
    //so that we want the address of first node should not get lost thus always make temp pointer and then traverse
    Node *temp = head;
    while(temp != NULL){
        cout<< temp->data << " " ;
        temp = temp->next;
    }
    //temp = head;and further use temp instead of head then it'll get printed 2 times
    while(head != NULL){
        cout<< head->data << " " ;
        head = head->next;
    }

}
int main(){
 //in a linked list all the nodes will be objects of node class
 //Statically declaring the node

 //tail node is the lasa address of the linked list

 Node n1(1);
 Node *head = &n1;//storing the address of the head node
 //this doesnt create a new node this just stores the address of the initial node 
 Node n2(2);
 Node n3(3);
 Node n4(4);
 Node n5(5);
 n1.next = &n2;//connection between the nodes
 n2.next = &n3;
 n3.next = &n4;
 n4.next = &n5;
 print(head);
  print(head);
 /*
 cout<<n1.data<<" "<< n2.data <<endl;
 //if we want to print node data using the head pointer 
 cout<<head->data; 
 */
/*
 //Dynamically Allocation of Nodes
 //blocks will be created which will hold the address 
 //the other block which will have the actual content of the node
 // eg - n4 mai 840  or 840 address p 20 or null hoga
 Node *n3 = new Node(10);
 Node *head = n3;
 Node *n4 = new Node(20);
 n3->next = n4 ;
 */
}