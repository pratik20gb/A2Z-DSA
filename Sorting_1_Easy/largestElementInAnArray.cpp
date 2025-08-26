class Solution
{
public:
    int secondLargestElement(vector<int> &nums)
    {
        if (nums.size() < 2)
            return -1; // not enough elements

        int largest = nums[0];
        int secondLargest = -1;

        // Find largest
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] > largest)
            {
                largest = nums[i];
            }
        }

        // Find second largest
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != largest && nums[j] > secondLargest)
            {
                secondLargest = nums[j];
            }
        }

        return secondLargest;
    }
};
