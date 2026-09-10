class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0; 
        int r = 1;
        int maxP = 0;
        while(r<prices.size()){
            int sell = prices[l];
            int buy = prices[r];
            if(sell < buy){
            
            int profit = buy - sell;
            maxP = max(maxP, profit);}
            else{
                l = r;
            }
            r++;
        }
        return maxP;
    }
};
