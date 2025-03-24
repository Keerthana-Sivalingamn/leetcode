class Solution {
    public List<List<Integer>> findMatrix(int[] nums) {
        List<List<Integer>> l=new ArrayList<>();
        HashMap<Integer,Integer> m=new HashMap<>();
        int i,max=0;
        for(i=0;i<nums.length;i++)
        {
            m.put(nums[i],m.getOrDefault(nums[i],0)+1);
            max=Math.max(max,m.get(nums[i]));
        }
        ArrayList<Integer> a=new ArrayList<>();
        for(i=1;i<=max;i++)
        {
            List<Integer> list=new ArrayList<>();
            for(Map.Entry<Integer,Integer> x:m.entrySet())
            {
                if(x.getValue()>=i)
                  list.add(x.getKey());
            }
            l.add(list);
            
        }
        return l;
        
    }
}