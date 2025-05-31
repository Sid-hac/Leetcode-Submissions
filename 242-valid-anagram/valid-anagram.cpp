class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false;
        unordered_map<int , int> storeCount;


        for(char letter : s){
            storeCount[letter]++;
        }

        for(char letter : t){
            storeCount[letter]--;
            if(storeCount[letter] < 0) return false;
        }
        return true;
        
    }
};