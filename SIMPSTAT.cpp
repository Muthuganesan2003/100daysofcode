#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	    int n,k;cin>>n>>k;
	    double sum=0;
	    vector<int>avg;
	    for(int i=0;i<n;i++){
	           int num;
	           cin>>num;
	           avg.push_back(num);
	    }
	    sort(avg.begin(),avg.end());
	   for(int i=k;i<n-k;i++){
  	       sum+=avg[i];
	   }
  	    
  	       
  	 // printf("%.6f\n",sum/(n-2*k));
  	 cout<<fixed<<sum/(n-2*k)<<endl;
	   
	}
	return 0;
}
