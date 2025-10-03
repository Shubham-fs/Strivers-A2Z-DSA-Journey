class Solution {
public:
vector<vector<int>>result;
void Subset2(vector<int>& nums,int i,vector<int>& temp){
    if(i==nums.size()){
        result.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    Subset2(nums,i+1,temp);
    temp.pop_back();
    int idx=i+1;
    while(idx<nums.size() && nums[idx]==nums[idx-1]){
        idx++;
    }
    Subset2(nums,idx,temp);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        int i=0;
        sort(nums.begin(),nums.end());
        Subset2(nums,i,temp);
        return result;
    }
};
