#include "linked_list.hh"

int main(void){
    Node *one = new Node;
    initNode(one, 10);
    print(one);
    cout << len(one) << endl;
    add_Node(one, 20);
    add_Node(one, 30);
    add_Node(one, 40);
    add_Node(one, 50);
    print(one);
    
    int del = 30;
    Node *ptrdel = search_Node(one, del);
    remove_Node(&one, ptrdel);
    print(one);

    insert_after(one, 20, 25);
    print(one);
}