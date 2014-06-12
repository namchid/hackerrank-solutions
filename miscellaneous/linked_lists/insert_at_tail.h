Node* Insert(Node *head,int data)
{
    Node* tail = head;
    while(tail && tail->next) { 
        tail = tail->next; 
    }
    
    Node* n = new Node;
    n->data = data;
    if(tail) {
        tail->next = n;
        return head;   
    }
    
    return n;
}