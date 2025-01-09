class Solution {
public:
    string shortestPalindrome(string s) 
    {
        // Step 1: Copy the original string to a new variable
        string str = s;

        // Step 2: Reverse the original string
        reverse(s.begin(), s.end());

        // Step 3: Concatenate the original string, a delimiter '#', and the reversed string
        string t = str + '#' + s;

        // Step 4: Create a KMP (Knuth-Morris-Pratt) table to store the longest prefix which is also a suffix
        vector<int> kmp(t.size() + 1);
        kmp[0] = -1; // Initialize the first element as -1

        // Step 5: Use two pointers to calculate the KMP table
        int j = -1, i = 0;
        while (i < t.size()) 
        {
            // If characters don't match, reset 'j' using the KMP table
            while (j != -1 && t[i] != t[j]) 
            {
                j = kmp[j];
            }

            // Increment both pointers and update the KMP table
            i++;
            j++;
            kmp[i] = j;
        }

        // Step 6: Calculate the number of characters we need to add in front of the string
        int needed = s.size() - kmp[t.size()];

        // Step 7: Construct the shortest palindrome by adding the required characters
        string ans = "";
        for (int i = str.size() - 1; i > str.size() - needed - 1; i--) 
        {
            ans += str[i];
        }

        // Append the original string to the prefix
        ans.append(str);

        // Return the result
        return ans;
    }
};