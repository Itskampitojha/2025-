
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.length();
        vector<int> diff(n + 1, 0);

        // Apply the shifts to the difference array
        for (auto& shift : shifts) {
            int start = shift[0], end = shift[1], direction = shift[2];
            if (direction == 1) {
                diff[start] += 1;
                diff[end + 1] -= 1;
            } else {
                diff[start] -= 1;
                diff[end + 1] += 1;
            }
        }

        // Compute the cumulative shifts
        int cumulativeShift = 0;
        for (int i = 0; i < n; ++i) {
            cumulativeShift += diff[i];
            // Normalize the shift to stay within 0-25 range
            int shift = (cumulativeShift % 26 + 26) % 26;
            s[i] = 'a' + (s[i] - 'a' + shift) % 26;
        }

        return s;
    }
};
