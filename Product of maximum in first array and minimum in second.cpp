public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
        // Complete the function
        sort(a,a+n);
        sort(b,b+m);
        int s=a[n-1];
        int r=b[0];
        return (s*r);
    }
