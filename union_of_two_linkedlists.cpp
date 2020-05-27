#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printList(struct node *node)
{
    while(node!=NULL){
        cout<<node->data<<' ';
        node = node->next;
    }
    printf("\n");
}

void push(struct node** head_ref, int new_data)
{
    struct node* new_node =	new node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

struct node* makeUnion(struct node* head1, struct node* head2);

int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        struct node* a = NULL;
        struct node* b = NULL;
        int n, m, tmp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            push(&a, tmp);
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>tmp;
            push(&b, tmp);
        }
        printList(makeUnion(a, b));
      //  cout<<"HELLO";
    }
    return 0;
}
// } Driver Code Ends


/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/

void partition(node* head,node *&a,node *&b)
{
    node *s=head,*f=head;
    while(f&&f->next&&f->next->next)
    {
        s = s->next;
        f = f->next->next;
    }
    b = s->next;
    s->next = NULL;
    a = head;
}


node* merge(node* a,node* b)
{
    node* res;
    if(a==NULL)
    return b;
    if(b==NULL)
    return a;
    if(a->data<b->data)
    {
        res = a;
        a->next = merge(a->next,b);
    }
    else
    {
        res = b;
        b->next = merge(a,b->next);
    }
    return res;
}

node* mergeSort(node *& head)
{
    node* a,*b;
    if(head==NULL || head->next==NULL)
    return head;
    partition(head,a,b);
    mergeSort(a);
    mergeSort(b);
    head = merge(a,b);
    return head;
    
}

node* mergesort(node *head)
{
    mergeSort(head);
    return head;
}







struct node* makeUnion(struct node* head1, struct node* head2)
{
    // code here
    
   head1 = mergesort(head1);
   head2 = mergesort(head2);
   node* res=NULL,*restail=NULL;
   while(head1!=NULL && head2 !=NULL)
   {
       if(head1->data<head2->data)
       {
          if(res==NULL)
          {
              res=restail=head1;
          }
          else
          {
              restail->next = head1;
              restail = head1;
          }
             int t=head1->data;
           while((head1)&&(t==head1->data))
           {
               head1=head1->next;
           }
          
       }
       else if(head1->data>head2->data)
       {
            if(res==NULL)
          {
              res=restail=head2;
          }
          else
          {
              restail->next = head2;
              restail = head2;
          }
            int t=head2->data;
           while(head2 && (t==head2->data))
           {
               head2 = head2->next;
           }
            cout<<head1->data<<" sks\n";
       }
       else
       {
            if(res==NULL)
          {
              res=restail=head1;
          }
          else
          {
              restail->next = head1;
              restail = head1;
          }
           int t=head1->data;
           while((head1)&&(t==head1->data))
           {
               head1=head1->next;
           }
           while(head2 && (t==head2->data))
           {
               head2 = head2->next;
           }
           
       }
       
   }
  
   while(head1)
   {
      
      
       if(res==NULL)
          {
              res=restail=head1;
          }
          else
          {
              restail->next = head1;
              restail = head1;
          }
       int t=head1->data;
        
      
           while((head1)&&(t==head1->data))
           {
              
               head1=head1->next;
               
           }
         
       
   }
   while(head2)
   {
         if(res==NULL)
          {
              res=restail=head2;
          }
          else
          {
              restail->next = head2;
              restail = head2;
          }
            int t=head2->data;
           while(head2 && (t==head2->data))
           {
               head2 = head2->next;
           }
   }
   restail->next = NULL;
   return res;
   
   
}
