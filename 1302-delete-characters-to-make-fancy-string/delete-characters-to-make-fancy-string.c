char* makeFancyString(char* s) {
    int j=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(j>=2 && s[i]==s[j-1] && s[i]==s[j-2])
        {
            continue;
        }
        s[j]=s[i];
        j++;
    }
    s[j]='\0';
    return s;
}