int height(Node* root){
    // base case -> empty tree has height 0
    if(root == NULL){
        return 0;
    }
    // left tree height
    int leftHeight = height(root->left);
    // right tree height
    int rightHeight = height(root->right);
    // max of left subtree and right subtree and +1 to consider the root node
    int ans = max(leftHeight,rightHeight) + 1;
    // return the height 
    return ans;
}
