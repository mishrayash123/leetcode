class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),l=0;
        char d='A';
      sort(nums.begin(),nums.end());
        if(nums[0]!=0){
            return 0;
        }
        for(int i=0;i<nums[n-1];i++){
            if(i!=nums[i]){
                l=i;
                d='B';
                break;
            }
        }
        if(d=='A'){
            return nums[n-1]+1;
        }
        return l;
    }
};