#include<bits/stdc++.h>
using namespace std;
int max_css(int arr[],int f,int mid,int l){
	int lss=INT_MIN;
	int sum=0;
	for(int i=mid;i>=f;i--){
		sum+=arr[i];
		if(sum>lss) lss=sum;
	}
	int rss=INT_MIN;
	int sum1=0;
	for(int i=mid+1;i<=l;i++){
		sum1+=arr[i];
		if(sum1>rss)rss=sum1;
	}
	return lss+rss;
}
int max_sum_subarray(int arr[],int f,int l){
	if(f==l)return arr[f];
	int mid=(f+l)/2;
	int lss=max_sum_subarray(arr,f,mid);
	int rss=max_sum_subarray(arr,mid+1,l);
	int css=max_css(arr,f,mid,l);
	return max(max(lss,rss),css);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int maxsum=max_sum_subarray(arr,0,n-1);
	cout<<maxsum<<endl;
	return 0;
}
