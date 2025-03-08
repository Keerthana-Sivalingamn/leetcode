class Solution {
    public int removeElement(int[] nums, int val) {
        int l=nums.length;
        int i,k=0;
        for(i=0;i<l;i++)
        {
            if(nums[i]!=val)
            {
                nums[k++]=nums[i];
            }
        }
        return k;
        
    }
}