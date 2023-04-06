public:
    string toLower(string S) {
        // code here
        for(int i=0;i<S.length();i++)
        {
            // if (isupper(S[i]))
               S[i] = tolower(S[i]);
        }
        
        return S;
    }
