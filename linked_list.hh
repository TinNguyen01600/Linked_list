# include <bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node *next;
};

void initNode(struct Node *head,int n);
void add_Node(struct Node *head, int n);
void print(struct Node *head);
int len(struct Node *head);
bool remove_Node(struct Node **head, Node *ptrDel);
struct Node *search_Node(struct Node *head, int n);
void clear_list(struct Node **head);
void insert_after(Node* head, int key, int val);