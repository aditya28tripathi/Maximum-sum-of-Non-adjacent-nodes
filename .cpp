class Solution{
  public:
  
  pair<int ,int> solve(Node* root){
      if(root==NULL){
          pair<int,int>p = make_pair(0,0);
          return p;
      }
      
      pair<int,int>left = solve(root->left);
      pair<int ,int>right = solve(root->right);
      
      
      pair<int ,int> result; //answer dena hai
      
      result.first = root->data + left.second + right.second;
      result.second = max(left.first,left.second) + max(right.first,right.second);
      
      return result;
  }
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        pair<int ,int>ans = solve(root);//solve name ka function hai yeh
        return max(ans.first , ans.second);
    }
};
