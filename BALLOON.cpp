#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	    int n,c=0,pos=0;cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	         cin>>arr[i];   
	        }
	    if(n==7) cout<<7<<endl;
	    else{
	        for(int i=0;i<n;i++){
	            if(arr[i]<=7){
	                c+=1;
	            }
	            pos+=1;
	            if(c==7) break;
	        }
	         cout<<pos<<endl;
	    }
	   
	}
	return 0;
}
