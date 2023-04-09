	string removeCharacters(string S) 
	{
	    int itr=0;
	  for(int i=0;i<S.length();i++)
        {
            if('0' <= S[i] and S[i]<='9')
            {
                S[itr]=S[i];
                itr++;
                
            }
        }
        return S.substr(0,itr);
	}
