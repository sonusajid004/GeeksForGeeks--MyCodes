void removeTheLoop(Node *head)
{
     //Your code here
     Node *s=head,*f=head;
     bool c=0;
     while(f&&f->next)
     {
         s=s->next;
         f=f->next->next;
         if(s==f)
         {
             c=1;
             break;
         }
        
     }
      if(!c)return;
      s=head;
      while(s->next!=f->next)
      {
          s=s->next;f=f->next;
      }
      f->next=NULL;
    
     
}

