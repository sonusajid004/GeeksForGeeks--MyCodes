Node* rotate(Node* head, int k) {
    // Your code here
        
        
       k = k-1;
       Node* tem = head;
       while(k--)
       {
           tem = tem ->next;
       }
      
       Node* tem1 = tem;
       while(tem1->next)
       {
           tem1 = tem1->next;
       }
       tem1->next = head;
       head = tem->next;
       tem->next = NULL;
       
       return head;
}
