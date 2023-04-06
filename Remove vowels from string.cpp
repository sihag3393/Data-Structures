string removeVowels(string S) 
	{
	    // Your code goes here
	    int itr=0;
	    for(int i=0;i<S.length();i++)
	    {
	        if ((((S[i]!='a' && S[i]!='e') && S[i]!='i') && S[i]!='o') && S[i]!='u' )
	        {
	            S[itr]=S[i];
	            itr++;
	        }
	    }
	    return S.substr (0, itr);
	}
