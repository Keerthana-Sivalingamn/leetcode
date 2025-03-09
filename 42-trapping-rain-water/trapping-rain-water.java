class Solution {
    public int trap(int[] height) {
        int n=height.length;
        int i=0,j=(n-1);
        int l=height[i],r=height[j];
        int res=0;
        while(i<j)
        {
            if(l<r)
            {
               i=i+1;
               l=Math.max(l,height[i]);
               res+=l-height[i];
            }
            else
            {
                j=j-1;
                r=Math.max(r,height[j]);
                res+=r-height[j];
            }
        }
        return res;
        

        
    }
}