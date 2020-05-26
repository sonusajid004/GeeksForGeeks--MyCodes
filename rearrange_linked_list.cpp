Node *rearrangeEvenOdd(Node *head)
{
   // Your Code here
   
   Node* even = head,*odd =head->next;
   Node* oddF = odd,*evenF = even;
   while(even->next && even->next->next)
   {
       even->next = odd->next;
       even = even->next;
       odd -> next = even -> next;
       odd = odd->next;
   }
   
   even->next = oddF;
   return evenF;
   
   
   
}
