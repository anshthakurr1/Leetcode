int findLengthOfLCIS(int* nums, int numsSize) {
    if(numsSize==0)
    {
        return 0;
    }
    int curr=1;
    int ans=1;
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]>nums[i-1])
        {
            curr++;
        }
        else
        {
            curr=1;
        }
        if(curr>ans)
        {
            ans=curr;
        }
    }
    return ans; 
}