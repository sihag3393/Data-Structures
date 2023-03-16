void leftRotate(int arr[], int n, int d) {
        // code here
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    }
};
