int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *s=head,*f=head;
       while(n--)
       {
           if(f==NULL)
           return -1;
           f = f->next;
       }
       while(f)
       {
           s = s->next;
           f = f->next;
       }
       return s->data;
}
