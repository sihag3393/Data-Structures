 long int i,count=1,max=1;
       for(i=0;i<n-1;i++)
       {
           if(arr[i+1]>arr[i])
           {
               count++;
               if(count>max)
               {
                   max=count;
               }
           }
           else
           {
               count=1;
            //   continue;
           }
       }
       return max;
