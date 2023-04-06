string transform(string s)
{
    // code here
    for(int i=0;i<s.length();i++)
    {
        if(i==0)
        {
          s[i]=toupper(s[i]);
        }
        
        if(s[i]==' ')
        {
            s[i+1]=toupper(s[i+1]);
          
        }
        
    }
    return s;
}
