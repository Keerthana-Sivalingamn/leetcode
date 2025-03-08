class Solution {
    public int removeDuplicates(int[] nums) {
        int i,k=1;
        int l=nums.length;
        int c=0;
        if(l<=1)
          return l;
        for(i=1;i<l;i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[k++]=nums[i];
            }
            
        }
        return k;
        
    }
}