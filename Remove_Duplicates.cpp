class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,n=nums.size(),c=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[k++]=nums[i];
                c++;
            }
        }
        nums[k++]=nums[n-1];
        c+=1;
        return c;
    }
};
