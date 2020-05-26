// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head) {
    // Your Code Here
    Node *s=head,*f=head,*p=NULL;
    while(f!=NULL&&f->next!=NULL)
    {
        p=s;
        s = s->next;
        f = f->next->next;
    }
  
    Node* tem = p->next;
    p->next = s->next;
    delete tem;
    return head;
}
