Node* Insert(Node *head, int data)
{
	Node* n = new Node();
	n->data = data;
	n->next = head;
	return n;
}