int maxValidPairSum(int* nums, int numsSize, int k) {
    int max=nums[0];
    int ans=nums[0]+nums[k];
    for(int j=k;j<numsSize;j++)
    {
        if(nums[j-k]>max)
        {
            max=nums[j-k];
        }
        if(max+nums[j]>ans)
        {
            ans=max+nums[j];
        }
    }
    return ans;
}