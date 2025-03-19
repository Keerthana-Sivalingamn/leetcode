class Solution {
    public int countNumbersWithUniqueDigits(int n) {
        int c=10,i;
        int r=(int)Math.pow(10,n);
        int u=9,ad=9;
        if(n==0) return 1;
        for(i=2;i<=n && ad>0;i++)
        {
           u=u*ad;
           c+=u;
           ad--;
        } 
        return c;
        
    }
}