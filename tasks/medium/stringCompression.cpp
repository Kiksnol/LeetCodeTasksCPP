class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int ind = 0;

        for (int i = 0; i < n; ++i) {
            char c = chars[i];
            int cnt = 0;

            while (i < n && chars[i] == c) {
                cnt++;
                i++;
            }

            if (cnt == 1) {
                chars[ind++] = c;
            } else {
                chars[ind++] = c;
                string s = to_string(cnt);

                for (char digit : s) {
                    chars[ind++] = digit;
                }
            }
            i--;
        }

        chars.resize(ind);
        return ind;
    }
};