class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int majority_index = nums.size() / 2 + 1;
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};