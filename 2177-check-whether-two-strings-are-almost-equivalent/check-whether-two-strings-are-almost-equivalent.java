class Solution {
    public boolean checkAlmostEquivalent(String word1, String word2) {
        HashMap<Character,Integer> m1=new HashMap<>();
        HashMap<Character,Integer> m2=new HashMap<>();
        int i;
        for(i=0;i<word1.length();i++)
        {
            m1.put(word1.charAt(i),m1.getOrDefault(word1.charAt(i),0)+1);
            m2.put(word2.charAt(i),m2.getOrDefault(word2.charAt(i),0)+1);
  
        }
        HashSet<Character> h=new HashSet<>(m1.keySet());
        h.addAll(m2.keySet());

        for(char w:h)
        {
            int r1=m1.getOrDefault(w,0);
            int r2=m2.getOrDefault(w,0);
            if(Math.abs(r1-r2)>3)
              return false;
            
        }    
        
        return true;
        
    }
}