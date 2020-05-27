   
void partition(Node *head,Node*& f,Node* &s)
{
    s = head;f=head;
  
    while(f&&f->next&&f->next->next)
    {
        
        s=s->next;
        f=f->next->next;
        
    }
    Node* tem = s->next;
    s->next = NULL;
    s = tem;
    f = head;
}
Node* merge(Node* a,Node* b)
{
    Node* tem = a;
   
    
    Node* head,*tail;
    if(a==NULL)
    return b;
    if(b==NULL)
    return a;
    if(a->data<=b->data)
    {
        head = tail = a;
        a = a->next;
            }
    else
    {
       head = tail = b;
       b = b->next;
    }
    while(a!=NULL && b!=NULL)
    {
        if(a->data<=b->data)
        {
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else 
        {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    if(a)
    tail->next = a;
    if(b)
    tail->next = b;
    tem = head;
   
    return head;
}



   
Node* mergeSort(Node* &head) {
    // your code here
    
    Node* first=NULL,*second =NULL;
    if(head==NULL || head->next ==NULL )
    return head;
    partition(head,first,second);
    mergeSort(first);
    mergeSort(second);
    head= merge(first,second);
    return head;
    
}


