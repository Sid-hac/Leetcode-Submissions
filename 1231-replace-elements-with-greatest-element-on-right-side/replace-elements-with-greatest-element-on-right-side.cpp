class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        // vector<int>ans;

        // if(arr.size() == 1){
        //     ans.push_back(-1);
        //     return ans;
        // }

        // for(int i = 0; i < arr.size(); i++){

        //         int maxi = 0;
        //         if(i == arr.size()-1){
        //             ans.push_back(-1);
        //             return ans;
        //         }
        //     for(int j = i+1; j < arr.size(); j++){

        //         maxi = max(maxi , arr[j]);
        //     }
        //     ans.push_back(maxi);
        // }

        // return ans;
                stack<int> s;
        s.push(-1);
        int n = arr.size();
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            ans[i] = s.top();
            while(s.top() != -1 && s.top() < arr[i]) {
                s.pop();
            }
            if (arr[i] > s.top())
                s.push(arr[i]);
        }

        return ans;

    
    }
};