class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp;
        for (auto i = 0; i < nums.size();i++) {
            dp.push_back(1);
        }
        for (auto i = 0; i < nums.size();i++) {
            for (auto j =0; j< i;j++) {
                if (nums[i] > nums[j]) {
                    if (dp[j]+1 > dp[i] )
                        dp[i] = dp[j] + 1;
                }
            }
        }
        int max = 1;
        for (auto i = 0; i < dp.size();i++) {
            if (dp[i] > max)
                max =dp[i];
        }
        return max;
    }
};
