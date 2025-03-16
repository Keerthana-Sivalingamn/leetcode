class Solution {
    public boolean isAnagram(String s, String t) {
        Map<Character,Integer> m=new HashMap<>();
        int i;
        if(s.length()!=t.length())
           return false;
        for(i=0;i<s.length();i++)
        {
            m.put(s.charAt(i),m.getOrDefault(s.charAt(i),0)+1);
            m.put(t.charAt(i),m.getOrDefault(t.charAt(i),0)-1);


        }
        for(int value:m.values())
        {
            if(value!=0)
              return false;
        }
        return true;
        
    }
}