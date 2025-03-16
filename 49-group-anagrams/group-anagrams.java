class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> list=new ArrayList<>();
        HashMap<String,ArrayList<String>> map=new HashMap<>();
        int i;
        for(i=0;i<strs.length;i++)
        {
            String str;
            char[] c=strs[i].toCharArray();
            Arrays.sort(c);
            str=new String(c);
            if(!map.containsKey(str))
            {
                ArrayList<String> l=new ArrayList<>();
                l.add(strs[i]);
                map.put(str,l);
            }
            else
            {
                map.get(str).add(strs[i]);
            }

        }
        for(ArrayList<String> val:map.values())
        {
            list.add(val);
        }
        return list;
        
    }
}