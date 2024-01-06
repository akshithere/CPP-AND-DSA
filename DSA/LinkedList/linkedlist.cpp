#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    
        Node(int x){
            data = x;
            next = NULL;
        }
       
};

void insertAtEnd(Node* &head, int val){
    Node* temp = head;
    Node* newNode = new Node(val);
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = newNode;
    newNode->next = nullptr;

}
void deleteAtEnd(Node* &head){
Node *temp = head;

while(temp->next->next != nullptr){
    temp = temp->next;
}
    free(temp->next);
    temp->next = nullptr;

}
void deleteAtHead(Node* &head){
    Node* temp = head;
    head = head->next;
    free(temp);
}
void updateAtPosition(Node * &head, int val, int pos){
    Node* temp = head;
    int current_pos = 0;
    while(current_pos!=pos){
        temp = temp->next;
    }
    //at the end of the linked list it is at position pos
    temp->data = val;
    return;
}
void insertAtPosition(Node* &head, int val, int pos){
    int current_pos = 0;
    Node* newNode = new Node(val);
    Node* temp = head;
    if(pos <0){
        cout << "invalid position";
        return;
    }
    if(pos == 0 || head == nullptr){
        newNode->next = head;
        head = newNode;
    }
    while(temp!= NULL && current_pos != pos - 1){
        temp = temp->next;
        current_pos++;
    }
    newNode->next = temp->next;
    temp->next = newNode;

}

void insertAtHead(Node* &head, int val){
Node* newNode = new Node(0);
newNode->data = val;
newNode->next = head;
 head = newNode;
};

void deleteAtPosition(Node* &head, int pos){
    Node* prev = head;
    int current_pos = 0;
    if(pos == 0){
        deleteAtHead(head);
    }
    while(prev != NULL && current_pos != pos-1){
        prev = prev->next;
        current_pos++;
    }
    //  now we at pos-1
    Node*temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}

void traversal(Node* head){
Node* temp = head;
while(temp != NULL){
cout << temp->data << "->";
temp = temp->next;
}
cout << "NULL\n";
}

int main(){
    //LL can be implemented through classes
    Node*head = NULL;
    traversal(head);
    insertAtHead(head,69);
    traversal(head);
    insertAtHead(head, 169);
    traversal(head);
    insertAtHead(head, 269);
    traversal(head);
    insertAtHead(head, 369);
    traversal(head);
    insertAtHead(head, 469);
    traversal(head);
    insertAtEnd(head,59);
    traversal(head);
    insertAtPosition(head,45,3);
    insertAtPosition(head,54,4);
    updateAtPosition(head,0,0);
    traversal(head);
    deleteAtHead(head);
    traversal(head);
    deleteAtEnd(head);
    traversal(head);
    deleteAtPosition(head, 1);
    traversal(head);


    
    return 0;
}