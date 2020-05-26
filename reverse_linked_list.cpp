//Iterative version

// Should reverse list and return new head.
Node* reverseList(Node *head)
{
  // Your code here
  Node *prev = NULL,*cur=head,*next;
  while(cur!=NULL)
  {
      next = cur ->next;
      cur -> next = prev;
      prev = cur;
      cur = next;
  }
  return prev;
  
 
}


//Recursive solution

Node* reverseList(Node *head,Node *prev=NULL)
{
  // Your code here
  
  if(head==NULL)return prev;
  Node* cur=head->next;
  head->next=prev;
  return reverseList(cur,head);
}

