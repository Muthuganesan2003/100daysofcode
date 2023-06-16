

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int doUnion(int a[], int n, int b[], int m)  {
        map<int,int>res;
        for(int i=0;i<n;i++)res[a[i]]++;
        for(int j=0;j<m;j++)res[b[j]]++;
        return res.size();
        
    }
    int dointersection(int a[], int n, int b[], int m){
    	map<int,int>res;int count=0;
    	for(int i=0;i<n;i++)res[a[i]]++;
        for(int j=0;j<m;j++)res[b[j]]++;
        for(const auto& x: res){
        	if(x.second==2)count++;
		}
		return count;
    	
	}
};
int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) <<endl<<ob.dointersection(a,n,b,m)<< endl;
	    
	}
	
	return 0;
}

