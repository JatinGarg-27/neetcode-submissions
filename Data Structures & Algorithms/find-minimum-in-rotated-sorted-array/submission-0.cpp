class Solution {
public:
    int findMin(vector<int> &nums) {
        // linear search 
        int mini = 10001;

        for(auto i : nums){
            if ( i < mini) mini = i;
        }

        return mini;
    }
};
