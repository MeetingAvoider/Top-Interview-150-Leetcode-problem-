class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // time complexity is O(N)
        //  int majority_index=nums.size()/2+1;
        //  sort(nums.begin(),nums.end());
        //  return nums[nums.size()/2];




        //optimize way to solve
        int count = 1;
        int max_value = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (count == 0)
            {
                max_value = nums[i];
                count++;
            }
            else if (max_value == nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return max_value;
    }
};