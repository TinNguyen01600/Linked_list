#include "linked_list.hh"

int main(void){
    Node *one = new Node;
    initNode(one, 10);
    print(one);
    cout << len(one) << endl;
    add_Node(one, 20);
    add_Node(one, 30);
    add_Node(one, 40);
    print(one);
    
    int del = 20;
    Node *ptrdel = searchNode(one, del);
    print(ptrdel);
    remove_Node(&one, ptrdel);
    print(one);

    insert_after(one, 20, 25);
    print(one);
}