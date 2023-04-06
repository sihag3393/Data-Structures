string delAlternate(string S) 
    {
     
        string a = "";
    
        for (int i = 0; i < S.length(); i++)
        {
            // take S[i] for only odd position
            if (i % 2 == 0) 
            {
             a += S[i];
            }
        }
  
        return a;
    }
