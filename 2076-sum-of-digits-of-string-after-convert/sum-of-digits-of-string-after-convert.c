int getLucky(char* s, int k) {
    int sum=0;
    for(int i=0;s[i]!='\0';i++)
    {
        int val=s[i]-'a'+1;
     while(val>0)
     {
        sum+=val%10;
        val/=10;
     }
    }
     while(--k)
     {
        int temp=0;
        while(sum>0)
        {
            temp+=sum%10;
            sum/=10;
        }
        sum=temp;
     }
     return sum;
}