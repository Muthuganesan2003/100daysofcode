#include<bits/stdc++.h>
using namespace std;
find_k_min(int arr[],int l,int h,int k){
	if (k > 0 && k <= h - l + 1) {
        int pivot = arr[h];
        int i = l;
        for (int j = l; j <= h - 1; j++) {
            if (arr[j] <= pivot) {
                swap(arr[i], arr[j]);
                i++;
            }
        }
        swap(arr[i], arr[h]);

        if (i - l == k - 1)
            return arr[i];
        if (i - l > k - 1)
            return find_k_min(arr, l, i - 1, k);
        return find_k_min(arr, i + 1, h, k - i + l - 1);
    }
    return -1;
}
int main(){
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	cin>>k;
	int res=find_k_min(arr,0,n-1,k);
	cout<<res<<endl;
	return 0;
}
