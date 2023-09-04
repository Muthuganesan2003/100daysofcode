
void bubbleSort(int arr[], int n) 
{
for(int i=n-1;i>=1;i--){
    int isSwap=0;
    for(int j=0;j<i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            isSwap=1;
        }
    }
    if(isSwap==0){
        break;
    }
}
}
