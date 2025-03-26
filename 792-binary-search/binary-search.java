class Solution {
    public int search(int[] nums, int target) {
        int l=0;
        int len=nums.length;
        int r=len-1;
        int m;
        while(l<=r)
        {
            m=(l+r)/2;
            if(nums[m]==target)
            {
                return m;
            }
            if(nums[m]>target)
            {
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return -1;
        
    }
}