    string revStr(string S) {
        // code here
        int low=0;
        int high=S.length();
         
       
        while(low<high)
        {
            swap(S[low],S[high-1]);
            low++;
            high--;
        }
        
          return S;
    }
};
