#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n],max=0,min=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		//checking max value
		if(arr[i]>max)max=arr[i];
		//checking min value
		if(i==0)min=arr[i];
		else if(arr[i]<min)min=arr[i];	
	}
	cout<<max<<endl<<min;
	return 0;
}
//time complexity:O(n)
