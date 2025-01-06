int findPeakElement(int* a, int n) {
    int l=0,r=n-1;
    int m;
    while(l<r)
    {
        m=(l+r)/2;
        if(a[m]>a[m+1])
        {
            r=m;
        }
        else
        {
            l=m+1;
        }
    }
    return r;
}