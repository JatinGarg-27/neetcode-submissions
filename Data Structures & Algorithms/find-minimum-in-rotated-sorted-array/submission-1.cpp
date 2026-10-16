class Solution {
public:
    int findMin(vector<int> &nums) {
        // linear search 
        int left = 0;
        int n= nums.size();
        int right = n-1;
        int ans = 0;
        while(left < right){
            int mid = left + (right - left)/2;

            if(nums[mid] > nums[right]){
                left = mid+1;
            }
            else if(nums[mid] <= nums[right]) {
                right = mid;
            }
        }
        return nums[left];
    }
};
