class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     //optimal
     vector<int>v;
     map<int,int>mp;
     for(int i=0;i<nums.size();i++){
         int a=nums[i];
         int b=target-nums[i];
         if(mp.find(b)!=mp.end()){
             v.push_back(i);
             v.push_back(mp[b]);
             
         }
         else{
             mp[a]=i;
         }
     }
     return v;
    }
};
   // //Brute force
        // vector<int>v;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(i!=j && nums[i]+nums[j]==target){
        //             v.emplace_back(i);
        //             v.emplace_back(j);
        //             return v;                
        //         }
        //     }
        // }
        // return v;
