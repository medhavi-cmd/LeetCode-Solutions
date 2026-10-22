class Solution {
public:
    vector<string> ans;

    void solve(string s, int i, int count, string curr) {
        if(count == 4 && i == s.length()) {
            curr.pop_back();
            ans.push_back(curr);
            return;
        }

        if(count == 4 || i == s.length()) {
            return;
        }

        for(int len = 1; len <= 3 && i + len <= s.length(); len++) {
            string part = s.substr(i, len);

            if(part.length() > 1 && part[0] == '0') {
                break;
            }

            if(stoi(part) > 255) {
                break;
            }

            solve(s, i + len, count + 1, curr + part + ".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        solve(s, 0, 0, "");
        return ans;
    }
};