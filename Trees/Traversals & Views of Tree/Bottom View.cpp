class Solution {
  public:
    vector <int> bottomView(Node *root) {
        map<int,int> mp;
        vector<int> ans;
        if(root==NULL) return ans;
        queue<pair<Node*, int>>q;
        q.push({root,0});
        while(!q.empty()){
            Node* curr=q.front().first;
            int hd=q.front().second;
            q.pop();
            mp[hd]=curr->data;
            if(curr->left) q.push({curr->left,hd-1});
            if(curr->right) q.push({curr->right,hd+1});
        }
        
        
        for(auto &i:mp){
            ans.push_back(i.second);
        }
        
        
        return ans;
    }
};
