class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // finding the maximum value after each value

        vector<int> greatest;
        int maxi = prices[prices.size()-1];
        for(int i = prices.size()-1; i >= 0 ; i--){
            if(maxi < prices[i]){
                maxi = prices[i];
            }
            greatest.push_back(maxi);
        }
        reverse(greatest.begin(),greatest.end());
        maxi = 0;
        int ans = 0;
        for(int i = 0; i < prices.size(); i++){
            maxi = greatest[i] - prices[i];
            ans = max(ans,maxi);
        }

        return ans;
    }
};
