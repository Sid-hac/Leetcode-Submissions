class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        vector<int>ans;

        if(arr.size() == 1){
            ans.push_back(-1);
            return ans;
        }

        for(int i = 0; i < arr.size(); i++){

                int maxi = 0;
                if(i == arr.size()-1){
                    ans.push_back(-1);
                    return ans;
                }
            for(int j = i+1; j < arr.size(); j++){

                maxi = max(maxi , arr[j]);
            }
            ans.push_back(maxi);
        }

        return ans;

        
    }
};