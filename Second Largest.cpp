int print2largest(int arr[], int n) {
	    // code here
	    int min=INT_MIN;
	    bool y=false;
	    int smax=0;
	    for(int i=0;i<n;i++)
	    {
	        if(min<arr[i])
	        {
	           min=arr[i];
	        }
	    }
	     
	    for(int i=0;i<n;i++)
	    {
	        if(smax<arr[i] && arr[i]!=min)
	        {
	            smax=arr[i];
	            y=true;
	        }
	    }
	    if(y==true)
	     return smax;
	    return -1;
	}
