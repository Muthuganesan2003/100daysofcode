class Solution {
public:
    bool isPalindrome(int x) {
        long r,rev=0,res=x;
    while(x>0){
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
if(rev==res)return true;
else return false;
    }
};
