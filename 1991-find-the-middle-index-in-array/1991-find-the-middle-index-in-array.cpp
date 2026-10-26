
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = 0;
        int leftSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            total += nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            int rightSum = total - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};