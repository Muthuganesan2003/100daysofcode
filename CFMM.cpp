#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	    int n,c=0;cin>>n;
	    bool flag=1;
	    unordered_map<char,int>charcount;
	    string res="";
	    for(int i=0;i<n;i++){
	        string str;cin>>str;
	        res+=str;
	    }
	    for(int i=0;i<res.length();i++){
            charcount[res[i]]++;
	    }


	    while(flag==1){
	        int count=0;
	        if(charcount['c']>=2){charcount['c']-=2;count++;}
	        
	        if(charcount['o']>=1){charcount['o']--;count++;}
	       
	        if(charcount['d']>=1){charcount['d']--;count++;}
	        
	        if(charcount['e']>=2){charcount['e']-=2;count++;}
	        
	        if(charcount['h']>=1){charcount['h']--;count++;}
	       
	        if(charcount['f']>=1){charcount['f']--;count++;}
	        
	        if(count==6)c++;
	        else flag=0;
	        
	       
	        
	    }
	    cout<<c<<endl;
	    
	    
	    
	}
	return 0;
}
