Node* Delete(Node *head, int position)
{
    Node* rover = head;
    
    if(position == 0) return head->next;
    
    for(int i = 0; i < position - 1; ++i) { rover = rover->next; }
    rover->next = rover->next->next;
    return head;
}