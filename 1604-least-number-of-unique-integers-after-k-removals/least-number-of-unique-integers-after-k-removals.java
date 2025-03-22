class Solution {
    public int findLeastNumOfUniqueInts(int[] arr, int k) {
        HashMap<Integer,Integer> m=new HashMap<>();
        for(int num:arr)
        {
            m.put(num,m.getOrDefault(num,0)+1);
        }  
        int c1=0;  
        List<Integer> l=new ArrayList<>(m.values());
        Collections.sort(l);
        int c=l.size();
        for(int v:l)
        {
            if(k>=v)
            {
                k=k-v;
                c--;
            }
            else
               break;
        }
        return c;

    }
}