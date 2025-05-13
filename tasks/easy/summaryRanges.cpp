class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {        
        if (nums.size() == 0) {
            return vector<string>();
        }

        int lr_st = nums[0], lr_end = nums[0];
        vector<string> res;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] - 1 == nums[i - 1]) {
                lr_end = nums[i];
            } else {
                if (lr_end == lr_st) {
                    res.push_back(std::to_string(lr_st));
                } else {
                    res.push_back(std::to_string(lr_st) + "->" + std::to_string(lr_end));
                }

                lr_st = nums[i];
                lr_end = nums[i];
            }
        }

        if (lr_end == lr_st) {
            res.push_back(std::to_string(lr_st));
        } else {
            res.push_back(std::to_string(lr_st) + "->" + std::to_string(lr_end));
        }

        return res;
    }
};