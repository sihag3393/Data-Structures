int peakElement(int arr[], int n)
    {
       // Your code here
       int i=0;
       if(n==1)
            return i;
      for(i=0;i<n;i++)
      {
        if(arr[i]>=arr[i+1] && arr[i]>=arr[i-1])
              return i;
      }
         
    }
