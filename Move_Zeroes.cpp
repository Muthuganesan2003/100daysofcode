class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int one=0,two=0,n=nums.size();
        while(one<n && two<n){
            if(nums[two]!=0){
                swap(nums[one++],nums[two++]);
            }
            else{
                two++;
            }
        }
    }

};
