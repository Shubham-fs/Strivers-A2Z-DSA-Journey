class Solution {
public:
long long helper(string &s,int i,long long num,bool neg){
    if(i>=s.length() || !isdigit(s[i])) return num;
    num=10*num+(s[i]-'0');
    if(num>INT_MAX && !neg) return INT_MAX;
    if(-num<INT_MIN && neg) return INT_MIN;
    return helper(s,i+1,num,neg);
}
    int myAtoi(string s) {
        int i=0;
        int n=s.length();
        while(i<n && s[i]==' '){
            i++;
        }
        bool neg=false;
        if(i<n && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='-') neg=true;
            i++;
        }
        long long num=0;
        num=helper(s,i,num,neg);
        if(neg) return -num;
        return num;
    }
};
