class Solution {
public:
const long long M=1e9+7;
long long power(int x,long long n){
    long long result=0;
    if(x==1 || n==0) return 1;

    long long half=power(x,n/2);
    if(n%2==0){
        result=(half*half)%M;
    }
    else result=(x*half*half)%M;
    return result%M;
}
    int countGoodNumbers(long long n) {
        long long odd_places=n/2;
        long long even_places=n-odd_places;
        long long odd=power(4,odd_places)%M;
        long long even=power(5,even_places)%M;
        long long ans=(even*odd)%M;
        return ans%M;
    }
};
