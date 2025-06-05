class Solution {
public:
    bool isSubsequence(string s, string t) {
        stack<char>stack;
        int count = 0;
        int n = t.size();

        for(int i = n-1; i >= 0; i-- ){
            stack.push(t[i]);
        }

        for(int i = 0; i < s.size(); i++){
             
             while(!stack.empty() && s[i] != stack.top()){
                stack.pop();
                
             }
             if(stack.empty()) return false;
             
             count++;
             stack.pop();
        }

        if(s.size() == count){
            return true;
        }

        return false;

        
    }
};