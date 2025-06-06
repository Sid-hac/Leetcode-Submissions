class Solution {
public:
    int appendCharacters(string s, string t) {
        stack<char>stack;
        int count = 0;

        for(int i = s.size() - 1; i >= 0; i--){
              stack.push(s[i]);
        }

        for(int i = 0; i < t.size(); i++){

            if( !stack.empty() && t[i] == stack.top()){
                stack.pop();
                count++;
            }else{
                 
                while(!stack.empty() && t[i] != stack.top()){
                    stack.pop();
                }

                 if (!stack.empty() && t[i] == stack.top()) {
                      stack.pop();
                      count++;
                 } else {
                      // Stack is empty and no match found
                      break;
                 }
            }
        }

        if(stack.empty() && count != t.size()){
                    return t.size() - count;
        }

        return 0;

        
    }
};