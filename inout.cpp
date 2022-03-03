#include <headerfile.h>
 
void addfirst(node *&head, node *&tail, int x){
    if(head != nullptr){
        tail->next = new node;
        tail = tail->next;
    }
    if(head == nullptr){
        head = new node;
        tail = head;
    }
    if(head != nullptr){
        tail->value = x;
        tail->next = nullptr;
    }
} 

void display(node *head){
    for(auto i = head; i != nullptr; i = i->next){
        cout << i->value << " ";
    }
    cout << endl;
}