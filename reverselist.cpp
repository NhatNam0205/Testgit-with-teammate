#include <headerfile.h>

void copy_reverse_list(node *&head, node *&head2){
    node *tmp = nullptr;
    if(head2 == nullptr) tmp = head;
    for(node *i = head; i->next != nullptr; i = i->next){
        tmp = new node;
        tmp->value = i->value;
        if(i == head) tmp->next = nullptr;
        else tmp->next = head2;
        head2 = tmp;
    }
}
 
