bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL)
   return true;
   Node *s=head,*f = head;
   while(f!=NULL&&f->next!=NULL)
   {
       s = s->next;
       f = f->next->next;
       if(f==s)
       return true;
   }
   return false;
   
}
