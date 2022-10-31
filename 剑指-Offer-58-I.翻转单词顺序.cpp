class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        vector<string> v;
        while (i < n) {
            string str;
            if (s[i] == ' ' && i < n)
                while (s[i] == ' ' && i < n)
                    i++;
            if (s[i] != ' ' && i < n) {
                while (s[i] != ' ' && i < n)
                    str.push_back(s[i++]);
                v.push_back(str);
            }
        }
       for (auto i = 0; i < v.size() / 2 ; i++) {
            auto temp = v[i];
            v[i] = v[v.size()-i-1];
            v[v.size()-i-1] = temp;
        }
        string ret;
        for (auto i : v) {
            ret = ret + i + ' ';
        }
        ret.pop_back();
        return ret;
    }
};


class Solution {
public:
    string reverseWords(string s) {
        int n = s.size() - 1;
        int j = n;
        string ret;
        while (n >= 0) {
            while (n >= 0 && s[n] == ' ') {
                n--;
            }
            if (n < 0) break;
            j = n;
            while (n >= 0 && s[n] != ' ') {
                n --;
            }
            ret = ret + s.substr(n + 1, j - n ) + ' ';
            j = n;
        }
        if (!ret.empty())
            ret.pop_back();
        return ret;
    }
};
