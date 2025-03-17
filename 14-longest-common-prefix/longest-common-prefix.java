class Solution {
    public String longestCommonPrefix(String[] strs) {
        StringBuilder s=new StringBuilder();
        int i,j;
        for(i=0;i<strs[0].length();i++)
        {
            char s1=strs[0].charAt(i);
            for(j=1;j<strs.length;j++)
            {
                if(i>=strs[j].length() || strs[j].charAt(i)!=s1)
                 return s.toString();
            }
            s.append(s1);
        }
        return s.toString();
    
    }
}