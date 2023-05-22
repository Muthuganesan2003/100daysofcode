#include <iostream>
using namespace std;

int main() {
	int T;cin>>T;
	while(T--){
	    int n,k,v,x,sum=0;cin>>n>>k>>v;
	    int arr[n];
	    for(int i=0;i<n;i++){
	    cin>>arr[i];
	    sum+=arr[i];
	    }
	    x=((n+k)*v)-sum;
	    if(x%k==0&&x/k>0){
	        cout<<x/k<<endl;
	    }
	    else cout<<-1<<endl;
	    
	}
	return 0;
}
