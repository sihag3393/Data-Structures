//complexity O(n2)

int count=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         int h=i+1;
    //         while(h<n)
    //         {
    //             if((arr[i]+arr[h])==k)
    //                 count++;
    //             h++;
    //         }
            
    //     }
    //     return count;
    // }

COmplexity o(n)
  int ans = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
        // adding in ans the how much k-arr[i] are passed
            ans+=mp[k-arr[i]];
            mp[arr[i]]++;
        }
        return ans;
