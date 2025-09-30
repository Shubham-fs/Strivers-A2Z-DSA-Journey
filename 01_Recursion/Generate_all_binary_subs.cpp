class Solution {
  public:
  vector<string>result;
  void solve(int n,string &curr){
      if(curr.length()==n){
          result.push_back(curr);
          return;
      }
      curr.push_back('0');
      solve(n,curr);
      curr.pop_back();
      curr.push_back('1');
      
      solve(n,curr);
      curr.pop_back();
  }
    vector<string> binstr(int n) {
        // code here
        string curr="";
        solve(n,curr);
        return result;
    }
};
