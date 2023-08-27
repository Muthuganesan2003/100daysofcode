class Solution {
public:
    int reverse(int x) {
        int r;
        long long rev=0;
        int sign = (x >= 0) ? 1 : -1;
        long lowerbound=-pow(2,31);
        long upperbound=pow(2,31)-1;
        x=abs(x);
        while(x>0){
            r=x%10;
            rev=rev*10+r;
            x=x/10;
        }
        long res=sign*rev;
        if(res>=lowerbound&& res<=upperbound)return res;
        else return 0;
    
    }
};
