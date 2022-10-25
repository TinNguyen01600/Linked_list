# include "linked_list.hh"

void initNode(struct Node *head,int n){
	head->val = n;
	head->next =NULL;
}

void add_Node(struct Node *head, int n){
	Node *newNode = new Node;
	newNode->val = n;
	newNode->next = NULL;

	Node *cur = head;
	while(cur != NULL) {
		if(cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}

void print(struct Node *head){
    while(head != NULL){
        cout << head->val << " ";
        head = head -> next;
    }
	cout << endl;
}

int len(struct Node *head){
	int result = 0;
	while(head != NULL){
        result++;
        head = head -> next;
    }
	return result;
}

struct Node *search_Node(struct Node *head, int n){
	Node *cur = head;
	while(cur != NULL) {
		if(cur->val == n) return cur;
		cur = cur->next;
	}
	cout << "No Node " << n << " in list.\n";
}

bool remove_Node(struct Node **head, Node *ptrDel) {
	Node *cur = *head;
	if(ptrDel == *head) {
		*head = cur->next;
		delete ptrDel;
		return true;
	}
	
	while(cur != NULL) {
		if(cur->next == ptrDel) {
			cur->next = ptrDel->next;
			delete ptrDel;
			return true;
		}
		cur = cur->next;
	}
	return false;
}

void clear_list(struct Node **head){
	Node* current = *head;
    Node* next = NULL;
 
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}

void insert_after(struct Node* head, int key, int val){
    Node* n = new Node;
	n->val = val;
    if (key == head->val) {
        n->next = head->next;
        head->next = n;
        return;
    }
 
    Node* temp = head;
    while (temp->val != key) {
        temp = temp->next;
        if (temp == NULL) {
            return;
        }
    }
    n->next = temp->next;
    temp->next = n;
}