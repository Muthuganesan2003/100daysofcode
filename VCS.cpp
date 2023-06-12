#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	    int it=1,n,m,k,c1=0,c2=0;cin>>n>>m>>k;
	    vector<int>mvec;
	    vector<int>kvec;
	    set<int>uuset;
	    for(int i=0;i<m;i++){
	        int num;cin>>num;
	        mvec.push_back(num);
	    }
	    for(int i=0;i<k;i++){
	        int num;cin>>num;
	        kvec.push_back(num);
	    }
	    //Loop for tracked and ignored
	    for(int i=0;i<m;i++){
	        for(int j=0;j<k;j++){
	            if(mvec[i]==kvec[j])c1++;
	        }
	    }
	    vector<int>res(mvec.size()+kvec.size());
	    merge(mvec.begin(),mvec.end(),kvec.begin(),kvec.end(),res.begin());
	    for(int i=0;i<res.size();i++){
	        uuset.insert(res[i]);
	    }
	    c2=n-uuset.size();
	    cout<<c1<<" "<<c2<<endl;
	    
	    
	}
	return 0;
}
