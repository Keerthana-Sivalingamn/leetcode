class Solution {
    public int[] productExceptSelf(int[] nums) {
        int l=nums.length;
        int[] a=new int[l];
        int m=1,i;
        Arrays.fill(a,1);
        int s=1;
        for(i=0;i<l;i++)
        {
            a[i]=s;
            s=s*nums[i];    
        }
        s=1;
        for(i=(l-1);i>=0;i--)
        {
           a[i]=a[i]*s;
           s=s*nums[i];


        }
        return a;

        
    }
}