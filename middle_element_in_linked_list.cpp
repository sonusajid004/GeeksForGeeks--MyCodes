int getMiddle(Node *head)
{
   // Your code here
   Node *s = head,*f = head;
   while(f!=NULL&&f->next!=NULL)
   {
       s = s->next;
       f = f->next->next;
   }
   return s->data;
}
