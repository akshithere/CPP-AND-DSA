#include <iostream>
using namespace std;
class Node{
        public:
        int data;
        Node* next;

        Node(int i){
            data = i;
            next = nullptr;
        }
    };
    
    void insertAtHead(Node* &head, int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        return;
    }
    void traversal(Node* head){
        Node* temp = head; 
        while(temp != nullptr){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout<<"nullptr";
        free(temp);
    }
    void deleteA(Node* head){
        Node*current = head;
        Node*temp = current->next;
        while(current != nullptr){
                current->next = current->next->next;
                current = current->next;
                temp = temp->next;
                
        }
        free(temp);
    }
    void deleteAlternate(Node* &head){
        int el = 1;
        Node* iterator = head;
        Node* temp = head;
        while(iterator != nullptr){
            if(el%2==0){
            temp->next = iterator->next;
            temp=temp->next;
            }
            el++;
            
            iterator = iterator->next;
        }
    }
    // alternste udane hau
int main(){
    Node* head = new Node(0);
    head = NULL;

    insertAtHead(head, 1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtHead(head, 8);
    insertAtHead(head, 9);
    insertAtHead(head, 10);
    
    traversal(head);
    cout << "\n";

    deleteA(head);
    traversal(head);
}