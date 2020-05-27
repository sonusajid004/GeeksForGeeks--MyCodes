Node * mergeKLists(Node *a[], int N)
{
       // Your code here
       priority_queue<Node*,vector<Node*>,cmp> p;
       Node* head=NULL,*tail=NULL;
       for(int i=0;i<N;i++)
       {
           if(a[i])
           p.push(a[i]);
       }
       while(!p.empty())
       {
           Node* top = p.top();
           p.pop();
           if(top->next)
           {
               p.push(top->next);
           }
           if(head==NULL)
           {
               head = top;
               tail = top;
           }
           else 
           {
               tail->next = top;
               tail = top;
           }
       }
       return head;
}
