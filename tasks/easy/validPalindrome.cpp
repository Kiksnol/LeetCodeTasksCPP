class Solution {
public:
    bool isPalindrome(string s) {
        int fwd = 0, bkwd = s.size() - 1;

        while (fwd < bkwd) {
            while (!isalnum(s[fwd])) {
                fwd++;

                if (fwd >= s.size())
                    break;
            }

            while (!isalnum(s[bkwd])) {
                bkwd--;

                if (bkwd < 0)
                    break;
            }

            if (bkwd < 0 && fwd >= s.size())
                return true;

            if (tolower(s[fwd]) != tolower(s[bkwd])) {
                return false;
            }

            fwd++;
            bkwd--;
        }

        return true;
    }
};
