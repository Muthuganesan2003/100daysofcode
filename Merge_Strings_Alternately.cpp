class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int max_size=max(word1.size(),word2.size());
        int min_size = min(word1.size(),word2.size());
        string result="";
      
        for(int i=0;i<min_size;i++){
              result+=word1[i];
              result+=word2[i];
        }
        
        if(min_size==word1.size()){
            for(int i=0;i<(max_size-min_size);i++){
            result+=word2[min_size+i];
            }
        }
        else{
            for(int i=0;i<(max_size-min_size);i++){
            result+=word1[min_size+i];
            }
        }
        return result;
    }
};
