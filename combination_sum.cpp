class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& a,int target, int idx,vector<int>& temp){
        if(idx>=a.size() or target<0){return;}
        
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=idx;i<a.size();i++){
            temp.push_back(a[i]);
            helper(a,target-a[i],i,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        helper(candidates,target,0,temp);
        return ans;   
    }
};
