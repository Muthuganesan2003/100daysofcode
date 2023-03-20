#include<bits/stdc++.h>
using namespace std;
void side_negative(int arr[],int n){
	int p=0;
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			if(i!=p){
			swap(arr[i],arr[p]);
				p++;
		}
		}
	
	}
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	side_negative(arr,n);
	return 0;
}
