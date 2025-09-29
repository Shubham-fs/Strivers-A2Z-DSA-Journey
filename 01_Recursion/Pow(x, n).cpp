class Solution {
public:
double power(double a,int b){
    if(a==1 || b==0) return 1;
    double half=power(a,b/2);
    double result=0;
    if(b%2==0){
        result=half*half;
    }
    else result=a*half*half;
    return result;
}
    double myPow(double x, int n) {
        long long N=n;
        if(N<0){
            x=1/x;
            N=-N;
        }
            return power(x,N);
    }
};
