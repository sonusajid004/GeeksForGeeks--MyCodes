// Should return head of the modified linked list
Node *sortedInsert(struct Node* head, int data) {
    // Code here
    Node *tem = head,*prev = NULL;
    while(tem&&data>tem->data)
    {
        prev = tem;
        tem = tem->next;
    }
    
    Node* n = new Node(data);
    if(!prev)
    {
        n -> next = tem;
        return n;
    }
    else
    {
        prev->next = n;
        n->next = tem;
        return head;
    }
}
