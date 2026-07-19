int mySqrt(int x) {
    if(x==1 && x==0)
    {
        return x;
    }
    int left=1;
    int right=x;
    int ans=0;
    while(left<=right)
    {
        int mid;
        mid=left+(right-left)/2;
        if(mid<=x/mid)
        {
            ans=mid;
            left=left+1;
        }
        else 
        {
            right=mid-1;
        }
    }
    return ans;
}