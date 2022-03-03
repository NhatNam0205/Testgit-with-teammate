#include <headerfile.h>

void insertfirst(node *&head, int x){
    cin >> x;
    node *tmp = new node;
    tmp->value = x;
    tmp->next = head;
    head = tmp;
}
 
void insertafter(node *&head, int x){
    int k;
    cin >> x >> k;
    for(auto i = head; i!=nullptr; i=i->next){
        if(i->value == x){
            node *tmp = new node;
            tmp->value = x;
            tmp->next = i->next;
            i->next = tmp;
            break;
        }
    }
}
 
void insertbefore(node *&head, int x){
    int k;
    cin >> x >> k;
    if(head->value == x){
        insertfirst(head,k);
        return;
    }
    for(auto i = head; i->next != nullptr; i = i->next){
        if(i->next->value == x){
            node *tmp = new node;
            tmp->value = k;
            tmp->next = i->next;
            i->next = tmp;
            break;
        }
    } 
    cout << "Done. Write sth to create conflict" << endl;
}
