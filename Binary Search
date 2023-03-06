int binarysearch(int arr[], int n, int k) {
        // code here
        int l=0,mid=0;
        int h=n;
        for(int i=0;i<n;i++)
        {
            mid=(l+h)/2;
            if(k==arr[mid])
               return mid;
            else if(arr[mid]<k)
                l=mid+1;
            else
                h=mid-1;
        }
        return -1;
    }
