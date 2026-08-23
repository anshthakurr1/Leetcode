bool sumGame(char* num) {
    int n=strlen(num);
    int leftsum=0;
    int rightsum=0;
    int leftq=0;
    int rightq=0;
    for(int i=0;i<n/2;i++)
    {
        if(num[i]=='?')
        {
            leftq++;
        }
        else
        {
            leftsum=leftsum+num[i]- '0';
        }
    }
    for(int i=n/2;i<n;i++)
    {
        if(num[i]=='?')
        {
            rightq++;
        }
        else
        {
            rightsum=rightsum+num[i]-'0';
        }
    }
    if((leftq+rightq)%2==1)
    {
        return true;
    }
    if((leftsum-rightsum) == (rightq-leftq)/2*9)
    {
        return false;
    }
    return true;
}