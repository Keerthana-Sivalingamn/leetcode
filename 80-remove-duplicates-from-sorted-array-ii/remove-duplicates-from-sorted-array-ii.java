class Solution {
    public int removeDuplicates(int[] nums) {
        int c=1;
        int i,k=1;
        int l=nums.length;
        for(i=1;i<l;i++)
        {
            if(nums[i]==nums[i-1])
                c++;
            else
                c=1;
            if(c<=2)
            {
                nums[k++]=nums[i];
            }  
        }
        return k;
}
}