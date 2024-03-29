class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minValue=INT_MAX;
int maxProfit=0;

for(int i=0; i<prices.size(); i++){
	minValue = min(minValue, prices[i]);
	maxProfit = max(maxProfit, prices[i]-minValue);
}

return maxProfit; 
    }
};