class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        int m = 0;
        for (auto x : nums)
            m ^= x;
        int i = 1;
        // 寻找需要返回的两个数不一样的地方。
        while ((m & i) == 0) 
            i = i << 1;
        // 分成两个数组进行处理。
        int x = 0, y = 0;
        for (auto j : nums) {
            if ( j & i) x ^= j;
            else y ^=j;
        }
        return {x, y};
    }
};