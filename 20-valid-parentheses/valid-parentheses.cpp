class Solution {
public:
    bool isValid(string s) {
        vector<char>v;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                v.push_back(s[i]);
            }
            else{
                if(v.size() == 0)return false;
                switch(v.back()){
                    case '{':
                        if(s[i] != '}')return false;
                        break;
                    case '[':
                        if(s[i] != ']')return false;
                        break;
                    case '(':
                        if(s[i] != ')')return false;

                }
                v.pop_back();
            }
        }
        if(!v.size())
        return true;
        return false;

    }
};