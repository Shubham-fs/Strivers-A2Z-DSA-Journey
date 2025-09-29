class Solution {
  public:
  void insertAtBottom(stack<int> &st,int val){
      if(st.empty()){
          st.push(val);
       return;}
      int top=st.top();
      st.pop();
      insertAtBottom(st,val);
      st.push(top);
  }
    void reverseStack(stack<int> &st) {
        // code here
        if(st.empty()) return;
        int top=st.top();
        st.pop();
        reverseStack(st);
        insertAtBottom(st,top);
    }
};
