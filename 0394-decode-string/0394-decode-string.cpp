class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> strs;
        string curr = "";
        int num = 0;

        for(int i = 0; i < s.length(); i++) {
            if(isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }
            else if(s[i] == '[') {
                nums.push(num);
                strs.push(curr);
                num = 0;
                curr = "";
            }
            else if(s[i] == ']') {
                int k = nums.top();
                nums.pop();

                string temp = strs.top();
                strs.pop();

                while(k--) {
                    temp += curr;
                }

                curr = temp;
            }
            else {
                curr += s[i];
            }
        }

        return curr;
    }
};