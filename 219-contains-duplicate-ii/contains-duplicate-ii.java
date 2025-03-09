class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        Map<Integer,Integer> h=new HashMap<>();
        for(int i=0;i<nums.length;i++)
        {
            int num=nums[i];
            if(h.containsKey(num) && i-h.get(num)<=k)
              return true;
            h.put(num,i);
        }
        return false;
        
    }
}