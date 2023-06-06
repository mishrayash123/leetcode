class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
               if(nums.size()<3) return false;
        
        int n = nums.size();
        int start = nums[0];
        int mid = INT_MAX;
        
        for(int i=1; i<n; i++) {
            if(nums[i] <= start) start = nums[i];
            else {
                if(nums[i] <= mid) mid = nums[i];
                else return true;
            }
        }
        return false;
    }
};