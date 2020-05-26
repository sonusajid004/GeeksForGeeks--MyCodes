Node* deleteMid(Node* head) {
    // Your Code Here
    Node *s=head,*f=head;
    while(f!=NULL&&f->next!=NULL)
    {
        s = s->next;
        f = f->next->next;
    }
    s->data = s->next->data;
    Node* tem = s->next;
    s->next = s->next->next;
    delete tem;
    return head;
    
}
