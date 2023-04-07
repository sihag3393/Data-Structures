 vector<string> splitString(string S) 
    { 
        // code here
        vector <string> v(3);
        string s1="";
        string s2="";
        string s3="";
        for(int i=0;i<S.length();i++)
        {
        
            if(isupper(S[i]) || islower(S[i]))
            {
                v[0]+=S[i];
            }
            
            else if(isdigit(S[i]))
            {
                v[1]+=S[i];
            }
            else
            {
                v[2]+=S[i];
            }
        }
        
        return v;
    } 
