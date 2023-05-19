#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	 int sum=0,n,x;
	 cin>>n>>x;
	 int arr[n];
	 for(int i=0;i<n;i++){
	     cin>>arr[i];
	     sum+=arr[i];
	 }
	 
	 if(sum%x!=0){
	     sort(arr,arr+n);
	     if(arr[0]<=sum%x)cout<<-1<<endl;
	     else cout<<sum/x<<endl;
	 }
	 else cout<<sum/x<<endl;
	 
	}
	return 0;
}
