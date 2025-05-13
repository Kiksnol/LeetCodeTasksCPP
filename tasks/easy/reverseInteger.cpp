class Solution {
public:
    int reverse(int x) {
        int sign = x > 0 ? 1 : -1;
        long long reversed = x;
        reversed *= sign;
        std::string s = std::to_string(reversed);
        std::reverse(s.begin(), s.end());
        reversed = std::stoll(s);

        int new_x = reversed;

        if (reversed != new_x) {
            return 0;
        } else {
            return new_x * sign;
        }
    }
};
