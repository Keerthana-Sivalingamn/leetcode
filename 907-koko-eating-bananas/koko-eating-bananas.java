class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int l=1,r=Arrays.stream(piles).max().getAsInt();
        int m=0;
        int k;
        while(l<r)
        {
            k=0;
            m=(l+r)/2;
            for(int pile:piles)
            {
                k+=((pile/m)+((pile%m!=0)?1:0));
                if(k>h)
                  break;
            }
            if(k<=h)
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
}