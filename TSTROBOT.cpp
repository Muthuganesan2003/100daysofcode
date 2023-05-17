#include<bits/stdc++.h>

using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	   int n,p,size;
	   string dir;
	   cin>>n>>p;
	   cin>>dir;
	   vector<int>res;
	   set<int>unique;
	   res.push_back(p);
	   for(int i=0;i<n;i++){
	       if(dir[i]=='L')p-=1;
	       else p+=1;
	       res.push_back(p);
	   }
	   size=res.size();
	   for(const auto&num:res){
	       unique.insert(num);
	   }
	   cout<<unique.size()<<endl;
	
	}
	return 0;
}
