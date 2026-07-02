int majorityElement(int* nums, int numsSize) {
    int i=nums[0];
    int count=1;
    for(int j=1;j<numsSize;j++)
    {
        if(nums[j]==i)
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            i=nums[j];
            count=1;
        }
    }
    return i;
}