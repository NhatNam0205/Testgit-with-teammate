#include <headerfile.h>

// remove first node in list
void removefirst(node *&head){
    node *tmp = new node;
    tmp = head;
    head = head->next;
    delete tmp;
}
 
// remove all node having the value = x
void removeall(node *&head, int x){
    while(head != nullptr && head->value == x){
        removefirst(head);
    }
    node *i = head;
    if(head == nullptr) return;
    while(i->next != nullptr){
        if(i->next->value == x){
            removefirst(i->next);
        } 
        if(i->next != nullptr && i->next->value != x) i = i->next;
    }
}
void remove_duplicated(node *&head){
    for(node *i = head; i != nullptr; i = i->next){
        int x = i->value;
        removeall(i->next, x);
    }