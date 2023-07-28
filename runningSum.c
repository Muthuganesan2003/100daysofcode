/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
int sum=0;
int* newsum=malloc(1000*sizeof(int));
for(int i=0;i<numsSize;i++){
   sum+=nums[i];
   newsum[i]=sum;
}
*returnSize=numsSize;
return newsum;
}
