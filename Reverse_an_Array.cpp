vector<int> reverseArray(int n, vector<int> &nums)
{
    if(n==nums.size()*2) return{};
    vector<int>v=reverseArray(n+1,nums);
    v.push_back(nums[n-nums.size()]);
    return v;
}

