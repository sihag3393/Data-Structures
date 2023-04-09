 string triDownwards(string S) {
        // code here
        string r="";
        int a=0;
        for(int i=0;i<S.length();i++)
        {
          
          for(int j=0;j<S.length();j++)
                {
                    if(j<i)
                      r+='.';
                    else
                      r+=S[j] ;
                }
             
                
            
        }
        return r;
