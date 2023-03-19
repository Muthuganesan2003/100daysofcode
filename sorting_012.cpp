#include<bits/stdc++.h>
using namespace std;
int main(){
	int c0=0,c1=0,c2=0,n;
	cin>>n;
	int arr[n],arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==0){
			c0++;
	}
		else if(arr[i]==1){
			c1++;
		}
		else{
			c2++;	
		}
	}
	for(int i=0;i<n;i++){
		if(i<c0)arr1[i]=0;
		else if(i>=c0&&i<c0+c1)arr1[i]=1;
		else arr1[i]=2;
	}
	for(int i=0;i<n;i++){
		cout<<arr1[i];
	}
	
	
	return 0;
}
