int digitSum(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int minElement(int* nums, int numsSize)
{
    int ans = digitSum(nums[0]);

    for (int i = 1; i < numsSize; i++)
    {
        int sum = digitSum(nums[i]);
        if (sum < ans)
            ans = sum;
    }

    return ans;
}