#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	    int n,k,p;cin>>n>>k;
	    vector<int>vote;
	    vector<int>res;
	    unordered_map<int,int> count;
	    for(int i=0;i<n;i++){
	        cin>>p;
	        vote.push_back(p);
	    }
	  
	    for(int i=0;i<vote.size();i++){
	        if(i+1!=vote[i]&&count[vote[i]]!=-1){
	            count[vote[i]]++;
	        }
	        else count[vote[i]]=-1;
	    }
	    for(const auto&num:count){
	        if(num.second>=k)res.push_back(num.second);
	    }
	    cout<<res.size()<<endl;
	   
	}
	return 0;
}