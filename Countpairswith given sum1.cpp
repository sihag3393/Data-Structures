IMPORTANT
int getPairsCount(int arr[], int n, int k) {
        // code here
        int ans = 0;
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++)
        {
            //adding in ans the how much k-arr[i] are passed
            ans+=mp[k-arr[i]];
            cout<<"\nFor i= "<<i<<"VAlue of ans= "<<ans;
            mp[arr[i]]++;
        }
        return ans;
    }
