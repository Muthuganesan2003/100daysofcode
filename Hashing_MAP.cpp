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
     //Creating map
     map<int,int>mp;
     for(int i=0;i<n;i++){
         mp[arr[i]]++;
     }
   
     //Fetching
     cout<<"Enter a number";
     int ask;
     cin>>ask;
     cout<<mp[ask];
    return 0;
}
