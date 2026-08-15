int longestSubsequence(int* nums, int numsSize) {
    int xor=0;
    int nonZero=0;
    for(int i=0;i<numsSize;i++)
    {
        xor^=nums[i];
        if(nums[i]!=0)
        {
            nonZero++;
        }
    }
    if(xor!=0)
    {
        return numsSize;
    }
    if(nonZero==0)
    {
        return 0;
    }
    return numsSize-1;
}