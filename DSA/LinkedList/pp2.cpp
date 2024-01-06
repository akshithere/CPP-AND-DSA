#include <iostream>
using namespace std;
class Node
{
public:
  int data;
  Node* next;


  Node(int i){
    data = i;
    next = nullptr;
  }  
};
class linkedList{
    public:
    Node* head;
   
        linkedList(){
            head = nullptr;
        }

   void insertAtTail(int val){
    Node* temp = head;
    Node* newNode = new Node(val);
    if (head == nullptr)
    {
      head = newNode;
      return;
    }
    
    while(temp->next!=nullptr){
            temp = temp->next;
    }
            temp->next = newNode;
            newNode->next = nullptr;
   }

   void traversal(){
Node* temp = head;
if(head == nullptr){
  
}
while(temp != NULL){
cout << temp->data << "->";
temp = temp->next;
}
cout << "NULL\n";
}
   
};


int main(){
    linkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.traversal();
    return 0;
}