class Solution {
    public int maxArea(int[] height) {
        int n=height.length;
        int l=0,r=n-1;
        int m=(l+r)/2;
        int area,max_area=0;
        while(l<r)
        {
            area=Math.min(height[l],height[r])*(r-l);
            max_area=Math.max(max_area,area);
            if(height[l]<height[r])
            {
                l++;
            }
            else if(height[l]>height[r])
            {
                r--;
            }
            else
            {
                l++;
                r--;
            }
        }
        return max_area;
        
    }
}