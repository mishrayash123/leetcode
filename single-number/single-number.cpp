class Solution {
public:
    int singleNumber(vector<int>& nums) {
     int i=0;
sort(nums.begin(),nums.end());
while( i<nums.size()-1)
{
if(nums[i]==nums[i+1])
{
i+=2;
}
else
{
break;
}
}
return nums[i];
    }
};