class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string> s;
        int flag=1;
        for(auto &word:wordList)
        {
            if(word.compare(endWord)==0)
              flag=0;
            s.insert(word);
        }
        if(flag==1)
           return 0;
        queue<string>q;
        q.push(beginWord);
        int level=0;
        int levsize;
        while(!q.empty())
        {
           level++; 
           levsize=q.size();
           while(levsize--)
           {
             string curr=q.front();
             q.pop();
             for(int i=0;i<curr.size();i++)
             {
                string temp=curr;
                for(char ch='a';ch<='z';ch++)
                {
                    temp[i]=ch;
                    if(temp.compare(curr)==0)
                       continue;
                    if(temp.compare(endWord)==0)
                        return level+1;
                    if(s.contains(temp))
                      q.push(temp);
                    s.erase(temp);
                }
             }
           }
        }
        return 0;

        
        
    
        
    }
};