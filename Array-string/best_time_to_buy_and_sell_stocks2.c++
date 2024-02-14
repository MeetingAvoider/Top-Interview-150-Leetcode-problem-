class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int finalProfit = 0;

        if (n <= 1)
        {
            return 0;
        }

        for (int i = 1; i < n; i++)
        {
            if (prices[i] > prices[i - 1])
            {
                finalProfit += prices[i] - prices[i - 1];
            }
        }
        return finalProfit;
    }
};