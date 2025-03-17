class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        Deque<Integer> q=new ArrayDeque<>();
        int l=nums.length;
        int[] ans=new int[l-k+1];
        int i,j=0;
        for(i=0;i<l;i++)
        {
            if(!q.isEmpty() && q.peekFirst()==i-k)
               q.pollFirst();
            while(!q.isEmpty() && nums[q.peekLast()]<nums[i])
            {
               q.pollLast();
            }
            q.offerLast(i);
            if(i>=(k-1))
              ans[j++]=nums[q.peekFirst()];
        }
        return ans;
        
    }
}