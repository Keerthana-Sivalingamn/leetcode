class Solution {
    public boolean digitCount(String num) {
        int i;
        HashMap<Integer,Integer> m=new HashMap<>();
        for(i=0;i<num.length();i++)
        {
            int v=num.charAt(i)-'0';
            m.put(v,m.getOrDefault(v,0)+1);    
        }
        for(i=0;i<num.length();i++)
        {

            int e=num.charAt(i)-'0';
            int r=m.getOrDefault(i,0);
            if(e!=r)
              return false;
        }
        return true;
        
    }
}