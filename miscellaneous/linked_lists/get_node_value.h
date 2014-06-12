// This is a "method-only" submission. 
// You only need to complete this method. 
int GetNode(Node *head,int positionFromTail)
{
    Node* pred = nullptr;
    Node* curr = head;
    Node* succ;
    
    while(curr) {
        succ = curr->next;
        curr->next = pred;
        pred = curr;
        curr = succ;
    }
   
    Node* rover = pred;
    for(int i = 0; i < positionFromTail; ++i) {
        rover = rover->next;
    }
    return rover->data;
}