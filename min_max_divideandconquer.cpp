#include<bits/stdc++.h>
using namespace std;
pair<int,int> min_max(int arr[],int f,int l){
	if(f==l) return make_pair(arr[f],arr[f]);
	else if(l-f==1) return make_pair(min(arr[f],arr[l]),max(arr[f],arr[l]));
	else{
		int mid=(f+l)/2;
		pair<int,int>left=min_max(arr,f,mid);
		pair<int,int>right=min_max(arr,mid+1,l);
		return make_pair(min(left.first,right.first),max(left.second,right.second));
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	pair<int,int>res=min_max(arr,0,n-1);
	cout<<res.first<<endl<<res.second;
	return 0;
}
//time complexity:O(nlogn)
