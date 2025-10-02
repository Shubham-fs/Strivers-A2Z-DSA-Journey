class Solution {
public:
vector<vector<int>>result;
void CombinSum(vector<int>& nums,int i,int target,vector<int>& temp){
    if(target<0 || i==nums.size()){
        return;
    }
    if(target==0){
        result.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    CombinSum(nums,i+1,target-nums[i],temp);
    CombinSum(nums,i,target-nums[i],temp);
    temp.pop_back();//Backtrack
    CombinSum(nums,i+1,target,temp);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>temp;
        int i=0;
        CombinSum(nums,i,target,temp);
        set<vector<int>>s(result.begin(),result.end());
        vector<vector<int>>ans;
        for(auto p:s){
            ans.push_back(p);
        }
        return ans;
    }
};
