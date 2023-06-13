#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	    int n;cin>>n;
	    long int sum=0;
	    vector<int>magic;
	    for(int i=0;i<n;i++){
	        int num;cin>>num;
	        magic.push_back(num);
	    }
	    
	        for(int i=0;i<n;i++)sum+=i;
	        cout<<sum<<endl;
	    
	}
	return 0;
}
