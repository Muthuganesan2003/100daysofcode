 
 #include<bits/stdc++.h>
 using namespace std;
 //function to reverse the array
 void reverse(int arr[],int n){
 	for(int i=0;i<n/2;i++){
 		int temp=arr[i];
 	    arr[i]=arr[n-i-1];
 	    arr[n-i-1]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
 
 }
 int main(){
 	//input the size of the array
    int n; 
	cin>>n;
    int arr[n];
    //input the array elements
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	//reversing an array
	reverse(arr,n);
 	return 0;
 }
