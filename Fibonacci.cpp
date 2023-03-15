vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> v;
        long long sum=1;
        long long first=1;
        long long second=1;
         v.push_back(1);
        for(int i=1;i<n;i++)
        {
            v.push_back(sum);
            sum=first+second;
            first=second;
            second=sum;
        }
        return v;
