class Solution {
public:
    vector<vector<int>> findContinuousSequence(int target) {
        int i = 1, j = 2, s = 3;
        vector<vector<int>> ret;
        while (i < j) {
            if (s == target) {
                vector<int> v;
                for (auto k = i; k <= j; k++)
                    v.push_back(k);
                ret.push_back(v); 
            }
            if (s >= target) {
                s -= i;
                i++;
            } else {
                j++;
                s+=j;
            }
        }
        return ret;
    }
};