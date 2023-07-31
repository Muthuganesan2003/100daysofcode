class Solution {
public:
    string join(string str,int n){
        string res="";
        for(int i=0;i<n;i++){
            res+=str;
        }
        return res;

    }
    string gcdOfStrings(string str1, string str2) {
        int min_size=min(str1.size(),str2.size());
        for(int i=min_size;i>=1;--i){
            if(str1.size()%i>0||str2.size()%i>0){
                continue;
            }
            else{
               string result=str1.substr(0,i);
               //Find the quotient of each string by dividing with min_size
               int q1=str1.size()/i;
               int q2=str2.size()/i;
               //Check whether the both string is multiple of minimum gcd string
               if(str1==join(result,q1)&&str2==join(result,q2)){
                   return result;
               }

            }
        }
    return "";
    }
};
