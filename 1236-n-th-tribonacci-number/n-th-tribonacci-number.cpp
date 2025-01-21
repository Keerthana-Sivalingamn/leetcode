class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return n;
        if(n==1 ||n==2) return 1;
        int i;
        int f1=0;
        int f2=1;
        int f3=1;
        int s=0;
        for(i=3;i<=n;i++)
        {
            s=f1+f2+f3;
            f1=f2;
            f2=f3;
            f3=s;
        }
        return s;
        
    }
};