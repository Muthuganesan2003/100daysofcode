#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	   int n,flag=0;cin>>n;
	   double avg,sum=0;
	   vector<double>sav;
	   for(int i=0;i<n;i++){
	       int num;
	       cin>>num;
	       sum+=num;
	       sav.push_back(num);
	   }
	   avg=sum/n;
	   for(int i=0;i<n;i++){
	     if(sav[i]==avg){cout<<i+1<<endl;flag=1;break;}
	     
	   }
	   if(flag==0)cout<<"Impossible"<<endl;
	   
	   
	}
	return 0;
}
