#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
/*alternate method:
    sort(arr,arr+(r+1));
    return arr[k-1];*/
	vector<int>res;
	for(int i=l;i<=r;i++){
		res.push_back(arr[i]);
	}
	sort(res.begin(),res.end());
	return res[k-1];
	}
    
};
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
