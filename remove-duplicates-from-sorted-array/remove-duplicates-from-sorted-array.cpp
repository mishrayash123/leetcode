class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int t=nums.size(),s=t;
        for(int i=0;i<t-1;i++){
          if(nums[i]==nums[i+1]){
              s--; 
          }
        }
        int j=1;
        for(int i=1;i<t;i++){
          if(nums[i]!=nums[i-1]){
              nums[j++]=nums[i]; 
          }
        }
        
        return s;
    }
};