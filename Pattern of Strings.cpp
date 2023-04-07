vector<string> pattern(string S)
	{
	    // Your code goes here
	    int n=S.length();
	    string s1="";
	    vector <string> v;
	        for(int i=n;i>0;i--)
	        {
	             for(int j=0;j<i;j++)
	               {
	                 s1+=S[j];
	               }
	                 v.push_back(s1);
	                 s1="";
	        }
	         
	   
	    return v;
	    
	}
