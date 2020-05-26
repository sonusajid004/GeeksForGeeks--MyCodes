
int detectloop(Node *head) {

    // your code here
   Node* s = head,*f = head;
   while(f&&f->next)
   {
      
       s = s->next;
       f = f->next->next;
        if(s==f)
       return 1;
   }
   return 0;
}

