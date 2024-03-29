class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int mn=prices[0];
        int sum=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<mn){
                mn=prices[i];
            }
            else if(prices[i]>mn){
                sum+=prices[i]-mn;
                mn=max(mn,prices[i]);
            }
        }
        return sum;
    }
};