#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	   long int n,b1=0,b2=0,c1=0,c2=0;cin>>n;
	   long int om[n],addy[n];
	    for(long int i=0;i<n;i++){
	        cin>>om[i];
	        if(om[i]>=1)c1++;
	        else{
	            if(c1>b1){
	                 b1=c1;
	            }
	            c1=0;
	        }
	        
	    }
	    for(long int i=0;i<n;i++){
	        cin>>addy[i];
	        if(addy[i]>=1)c2++;
	        else{
	            if(c2>b2){
	                 b2=c2;
	            }
	            c2=0;
	        }
	    }
	    if(b1>b2)cout<<"Om"<<endl;
	    else if(b2>b1)cout<<"Addy"<<endl;
	    else cout<<"Draw"<<endl;
	}
	return 0;
}
