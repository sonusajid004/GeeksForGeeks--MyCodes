int fun(Node* root)
{
    if(root==NULL)
    return 0;
    int lh = fun(root->left);
    if(lh == -1)
    return -1;
    int rh = fun(root->right);
    if(rh==-1)
    return -1;
    if(abs(lh-rh)>1)
    return -1;
    return max(lh,rh)+1;
}
bool isBalanced(Node *root)
{
    //  Your Code here
    if(fun(root)==-1)
    return false;
    return true;
   
}
