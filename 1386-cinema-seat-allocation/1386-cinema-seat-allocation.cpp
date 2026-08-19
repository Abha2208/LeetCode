class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int> mp;

        for (auto &seat : reservedSeats) {
            int row = seat[0];
            int col = seat[1];

            // Mark reserved seat using bitmask
            mp[row] |= (1 << col);
        }

        int ans = (n - mp.size()) * 2;

        for (auto &[row, mask] : mp) {
            bool left = true;
            bool middle = true;
            bool right = true;

            // 2,3,4,5
            for (int i = 2; i <= 5; i++) {
                if (mask & (1 << i)) {
                    left = false;
                    break;
                }
            }

            // 4,5,6,7
            for (int i = 4; i <= 7; i++) {
                if (mask & (1 << i)) {
                    middle = false;
                    break;
                }
            }

            // 6,7,8,9
            for (int i = 6; i <= 9; i++) {
                if (mask & (1 << i)) {
                    right = false;
                    break;
                }
            }

            if (left && right)
                ans += 2;
            else if (left || middle || right)
                ans += 1;
        }

        return ans;
    }
};