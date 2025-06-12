class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count = 0;

        for(int i = 0; i < n ; i++){
             
             string passenger = details[i];
             if(passenger[11] > '6'){
                count++;
             }else if(passenger[11] == '6' && passenger[12] > '0'){
                count++;
             }
        }

        return count;
        
    }
};