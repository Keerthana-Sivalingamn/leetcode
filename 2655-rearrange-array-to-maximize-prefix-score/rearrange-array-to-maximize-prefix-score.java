class Solution {
    public int maxScore(int[] nums) {
        Arrays.sort(nums);
        int t;
        int i,c=0;
        int l1=nums.length;
        int[] l=new int[l1];
    
        for(i=0;i<l1/2;i++)
        {
            t=nums[i];
            nums[i]=nums[l1-1-i];
            nums[l1-1-i]=t;
        }
        long s=0;
        for(i=0;i<l1;i++)
        {
            s=s+(long)nums[i];
            if(s>0)
              c++;
        }
        return c;
        
    }
}