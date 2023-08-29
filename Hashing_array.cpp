//Count of each number in an array using hashing

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n ;cin>>n;
    int arr[n];
    //Getting input of an array
    cout<<"Enter array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  
     //Creating hash array
     int hash[1000000]={0};
     for(int i=0;i<n;i++){
         hash[arr[i]]+=1;
     }
     //Fetching
     cout<<"Enter a number";
     int ask;
     cin>>ask;
     cout<<hash[ask];
    return 0;
}
