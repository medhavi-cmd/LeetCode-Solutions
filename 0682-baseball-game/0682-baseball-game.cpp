class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;

        for(int i = 0; i < operations.size(); i++) {
            string s = operations[i];

            if(s == "+") {
                st.push_back(st[st.size()-1] + st[st.size()-2]);
            }
            else if(s == "D") {
                st.push_back(2 * st.back());
            }
            else if(s == "C") {
                st.pop_back();
            }
            else {
                st.push_back(stoi(s));
            }
        }

        int sum = 0;

        for(int i = 0; i < st.size(); i++) {
            sum += st[i];
        }

        return sum;
    }
};