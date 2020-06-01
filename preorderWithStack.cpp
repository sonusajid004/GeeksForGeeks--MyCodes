void preorder(Node* root)
{
  // Your code here
  stack<Node*> s;
  s.push(root);
  while(!s.empty())
  {
      Node* cur = s.top();
      s.pop();
      while(cur)
      {
          cout<<cur->data<<" ";
          if(cur->right)
          s.push(cur->right);
          cur = cur->left;
      }
      
      
  }
}
