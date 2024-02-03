class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        if (n <= 1)
        {
            return 0;
        }

        int min_price = prices[0]; // Initialize the minimum price as the first day's price.
        int max_profit = 0;        // Initialize the maximum profit as 0.

        for (int i = 1; i < n; i++)
        {
            if (prices[i] < min_price)
            {
                min_price = prices[i]; // Update the minimum price if a lower price is found.
            }
            else
            {
                int current_profit = prices[i] - min_price;
                if (current_profit > max_profit)
                {
                    max_profit = current_profit; // Update the maximum profit if a higher profit is found.
                }
            }
        }

        return max_profit;
    }
};