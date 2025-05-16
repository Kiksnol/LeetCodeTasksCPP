class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, std::vector<int>> nums_amount;

        for (int i = 0; i < nums.size(); ++i) {
            nums_amount[nums[i]].push_back(i);
        }

        for (int i = 0; i < nums.size(); ++i) {
            if (nums_amount[target - nums[i]].size() != 0) {
                if (target - nums[i] == nums[i]) {
                    if (nums_amount[nums[i]].size() > 1)
                        return {nums_amount[nums[i]][0], nums_amount[nums[i]][1]};
                    else
                        continue;
                } else  {
                    return {nums_amount[nums[i]][0], nums_amount[target - nums[i]][0]};
                }
            }
        }

        return {};
    }
};
