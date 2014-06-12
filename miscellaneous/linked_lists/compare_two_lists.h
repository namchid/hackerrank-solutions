// This is a "method-only" submission. 
// You only need to complete this method 
int CompareLists(Node *headA, Node* headB)
{
    Node *a = headA; 
    Node *b = headB;
    while(a && b) {
        if(a->next == nullptr && b->next != nullptr) return 0;
        else if(a->next != nullptr && b->next == nullptr) return 0;
        
        if(a->data != b->data) return 0;
        a = a->next;
        b = b->next;
    }
    return 1;
}