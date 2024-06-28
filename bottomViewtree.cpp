class Solution {
  public:
    vector <int> bottomView(Node *root) {
       vector <int>ans; //level=line
       if(root==NULL)return ans;
       map<int,int>mpp; // level, val
       queue<pair<Node*,int> >q; //Node,level
       q.push({root,0});

       
       while(!q.empty()){
           auto it=q.front(); 
           q.pop();
           Node* node=it.first;
           int line=it.second;
           
           mpp[line]=node->data; //only change in top view
           
           if(node->left)q.push({node->left,line-1});
           if(node->right)q.push({node->right,line+1});
           
       }
       for(auto it : mpp){
           ans.push_back(it.second);
       }
       return ans;
    }   
};