class Solution {
    public int lengthOfLastWord(String s) {
        int i,c=0;
        s.strip();
        int l=s.length();
        for(i=l-1;i>=0;i--)
        {
            if(s.charAt(i)==' ' && c>0)
            {
                break;
            }
            else if(s.charAt(i)!=' ')
               c++;
        }
        return c;
        
    }
}