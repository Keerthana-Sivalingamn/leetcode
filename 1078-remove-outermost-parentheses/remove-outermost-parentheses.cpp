class Solution {
public:
    string removeOuterParentheses(string s) {
        // optimal - using depth(virtual stack types) - O(n) , O(1)
        string result; // answer without outermost parantheses
        int depth=0;   // helps segregate primitive decomposition
        for(auto ch: s)
        {
            if(ch=='(') // opening paranthesis
            {
                if(depth > 0) result += ch; //only add to result if it isn't outermost
                depth++;      //signify going inside 
            }

            else if(ch==')')    //closing paranthesis
            {
                depth--;    //first decrement the depth counter
                if(depth > 0) result += ch; //add to result only if not outermost paranthesis
            }
        }
        return result;
    }
};