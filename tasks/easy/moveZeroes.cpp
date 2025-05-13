class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        std::vector<int>::iterator zero_it = nums.begin(), num_it = nums.begin();

        while (num_it != nums.end()) {
            while (zero_it != nums.end() && *zero_it != 0) {
                zero_it++;
            }

            if (zero_it == nums.end())
                return;
            
            num_it = zero_it;
            while (num_it != nums.end() && *num_it == 0) {
                num_it++;
            }

            if (num_it == nums.end())
                return;

            std::swap(*zero_it, *num_it);
        }
    }
};
