#include <headerfile.h>
 
void addfirst(node *&head, node *&tail, int x){
    if(head == nullptr){
        head = new node;
        tail = head;
    }
    tail->value = x;
    tail->next = nullptr;
    tail = tail->next;
    if(x != 0) tail = new node;
} 

void display(node *head){
    for(auto i = head; i != nullptr; i = i->next){
        cout << i->value << " ";
    }
    cout << endl;
}