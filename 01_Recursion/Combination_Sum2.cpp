class Solution {
public:
vector<vector<int>>result;
void CombinSum(vector<int>& nums,int target,vector<int>& temp,int idx){
    if(target==0){
        result.push_back(temp);
        return;
    }
    if(target<0 || idx==nums.size()){
        return;                                      //To Avoid Duplicates Use Sorting
                                                     //If using for loop no need no need to recurse after no take
    }
    for(int i=idx;i<nums.size();i++){
        if(i>idx && nums[i]==nums[i-1]) continue;
        temp.push_back(nums[i]);
        CombinSum(nums,target-nums[i],temp,i+1);
        temp.pop_back();
    }

}
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<int>temp;
        sort(nums.begin(),nums.end());
        CombinSum(nums,target,temp,0);
        return result;
    }
};
