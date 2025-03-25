class Solution {
    public int minDays(int[] bloomDay, int m, int k) {
        int len=bloomDay.length;
        int x=0,i;
        int min=-1;
        int l=1,r=Arrays.stream(bloomDay).max().getAsInt();
        int mid;
        while(l<=r)
        {
            int nf=0;
            int nb=0;
            mid=(l+r)/2;
            for(int bloom:bloomDay)
            {
                if(bloom<=mid)
                {
                   nf++;
                }
                else
                   nf=0;
                if(nf==k)
                {
                    nb++;
                    nf=0;
                }
            }
            if(nb>=m)
            {
                min=mid;
                r=mid-1;
                
            }
            else
               l=mid+1;

        }
        return min;
        
    }
}