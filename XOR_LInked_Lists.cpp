void insert(struct Node **head_ref, int data)
{
	// Code here
    Node* tem = new Node(data);
    tem -> npx = XOR(*head_ref,NULL);
    if(*head_ref)
    {
        Node* tem1 = XOR((*head_ref)->npx,NULL);
        (*head_ref)-> npx = XOR(tem,tem1);
    }
    *head_ref = tem;
}

// function should prints the contents of doubly linked list
// first in forward direction and then in backward direction
// you should print a next line after printing in forward direction
void printList (struct Node *head)
{
       Node* curr=head;
    Node* prev = NULL;
    Node* next ;
    while(curr)
    {
        cout<<curr->data<<" ";
        next = XOR(prev,curr->npx);
        prev = curr;
        curr = next;
    }
    cout<<endl;
    curr = prev;
    prev = NULL;
    while(curr)
    {
        cout<<curr->data<<" ";
        next = XOR(prev,curr->npx);
        prev = curr;
        curr = next;
    }
 
 
}
