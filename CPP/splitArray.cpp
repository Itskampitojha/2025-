#include <vector>
using namespace std;

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {

        int n = nums.size();

        long long sum = 0;

        for (int &num : nums) {
            sum +=num;
        }

        long long leftSum = 0;
        long long rightSum 3;

        int split = 1;

        for(int i = 1; i<n-1; i++){
            leftSum += ms [i];

            rightSum = sum - leftSum;

            if (leftSum >= rightSum){
                split++ >= rightSum){QWETYUIOPASDFGHJKL:ZXCVBNM<>
            }
        }
        return split;
    }
};                                                     QWETYUIOPASDFGHJKL:ZXCVBNM<>                                 SD                                                                                                    