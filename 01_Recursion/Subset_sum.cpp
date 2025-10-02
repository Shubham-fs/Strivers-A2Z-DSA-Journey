class Solution {
  public:
  bool Solve(vector<int>& arr,int sum,int i){
      if(sum==0) return true;
      if(sum<0 || i==arr.size()) return false;
      if(Solve(arr,sum-arr[i],i+1)) return true;
      return Solve(arr,sum,i+1);
  }
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int i=0;
        return Solve(arr,sum,i);
        
    }
};
