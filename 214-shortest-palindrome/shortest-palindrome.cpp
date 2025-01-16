class Solution {
public:
    string shortestPalindrome(string s) 
    {
        
        string str = s;

        
        reverse(s.begin(), s.end());

    
        string t = str + '#' + s;

        
        vector<int> kmp(t.size() + 1);
        kmp[0] = -1; 

        
        int j = -1, i = 0;
        while (i < t.size()) 
        {
            
            while (j != -1 && t[i] != t[j]) 
            {
                j = kmp[j];
            }

            
            i++;
            j++;
            kmp[i] = j;
        }

        
        int needed = s.size() - kmp[t.size()];

        
        string ans = "";
        for (int i = str.size() - 1; i > str.size() - needed - 1; i--) 
        {
            ans += str[i];
        }

    
        ans.append(str);

    
        return ans;
    }
};