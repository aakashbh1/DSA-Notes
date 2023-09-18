void solve(Node* root, vector<int> &ans) {
    if(root == NULL) return;
    
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();
        while(temp) {
            ans.push_back(temp->data);
            if(temp->left) {
                q.push(temp->left);
            }
            temp = temp->right;
        }
    }
}


vector<int> diagonal(Node *root) {
   // your code here
   vector<int>ans;
   solve(root, ans);
   return ans;
}
