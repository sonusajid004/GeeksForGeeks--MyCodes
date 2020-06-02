
bool fun(struct Node* root,Node* tem1,Node* tem2)
{
    if(root==NULL)return true;
    if(tem1->data==tem2->data){
	if(tem1->left==NULL && tem2->right==NULL)return true;
	if(tem1->right==NULL && tem2->left==NULL)return true;
    }
	else if(tem1->data!=tem2->data)
	return false;
	if(tem1->left && tem2->right)
	{
	    return fun(root,tem1->left,tem2->right); 
	}
	else if(tem1->right && tem2->left)
	{
	    return fun(root,tem1->right,tem2->left);
	}
	else
	return false;
}
// return true/false denoting whether the tree is Symmetric or not
bool isSymmetric(struct Node* root)
{
	// Code here
    return fun(root,root,root);
}
