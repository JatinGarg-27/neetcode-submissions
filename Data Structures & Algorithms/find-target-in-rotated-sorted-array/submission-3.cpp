class Solution {
public:
    int binarySearch(vector<int>& nums, int left, int right,int target){

        while(left <= right){
            int mid = left + (right - left) / 2;

            if(nums[mid] == target) return mid;

            if(nums[mid] > target){
                right = mid - 1 ;
            }

            else {
                left = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        // this can be done that if i find the minimum and then can compare where it is i need to find ultimately two binary search 

        int n = nums.size();
        int left = 0;
        int right = n-1;

        while(left < right){
            int mid = left + (right - left) / 2;

            if(nums[mid] > nums[right]){
                left = mid + 1;
            }
            else if ( nums[mid] <= nums[right]) right = mid;
        }
        cout << left;
        // now left denotes the position of the minimum 

        if(nums[left] == target) return left;

        if(left != 0){
            if(nums[left-1] >= target && nums[0] <= target) return binarySearch(nums,0,left-1,target);
            else if(nums[left] <= target && nums[n-1] >= target) return binarySearch(nums,left,n-1,target);
        }

        return binarySearch(nums,0,n-1,target);

    }
};
