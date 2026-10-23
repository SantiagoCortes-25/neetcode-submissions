class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrecio = prices[0];
        int mejor = 0;
        for (int i = 0; i < prices.size(); i++ ){
            mejor = max(mejor, prices[i] - minPrecio); // buscar el profit mas alto
            minPrecio = min(minPrecio, prices[i]);
        }
        return mejor;

    }
};
