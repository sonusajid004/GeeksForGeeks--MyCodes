Node* deleteK(Node *head,int K)
{
  //Your code here
  if(K==1)
  return NULL;
  int c=1;
  Node* tem = head;
  while(tem&&tem->next)
  {
      if(c==K-1)
     {
         tem->next = tem->next->next;
         tem=tem->next;
         c=1;
     }
     else{
     tem = tem->next;
     c++;}
     
      
  }
  return head;
  
  
}
