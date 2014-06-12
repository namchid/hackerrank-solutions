// This is a "method-only" submission. 
// You only need to complete this method. 
Node* RemoveDuplicates(Node *head)
{
    Node* pred = head;
    if(!pred) return head;
    
    Node* rover = pred->next;
    
    while(rover) {
        if(rover->data == pred->data) {
            pred->next = rover->next;
            rover = rover->next;
        } else {
            rover = rover->next;
            pred = pred->next;
        }
    }
    return head;
}