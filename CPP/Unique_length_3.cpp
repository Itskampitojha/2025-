class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        vector<int> leftSeen(26, 0), rightSeen(26, 0);
        unordered_set<string> uniquePalindromes;

        for (char c : s) {
            rightSeen[c - 'a']++;
        }

        for (int i = 0; i < n; ++i) {
            char middle = s[i];
            rightSeen[middle - 'a']--;

            for (int c = 0; c < 26; ++c) {
                if (leftSeen[c] > 0 && rightSeen[c] > 0) {
                    string palindrome = "";
                    palindrome += (char)(c + 'a');
                    palindrome += middle;
                    palindrome += (char)(c + 'a');
                    uniquePalindromes.insert(palindrome);
                }
            }

            leftSeen[middle - 'a']++;
        }

        return uniquePalindromes.size();
    }
};
