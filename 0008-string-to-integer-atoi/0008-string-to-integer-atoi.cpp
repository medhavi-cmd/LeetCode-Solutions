
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();

        // Step 1: Skip leading spaces
        while(i < n && s[i] == ' ') {
            i++;
        }

        // Step 2: Check the sign
        int sign = 1;

        if(i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if(i < n && s[i] == '+') {
            i++;
        }

        // Step 3: Convert digits
        long long num = 0;
        long long limit = (sign == 1) ? INT_MAX : 2147483648LL;

        while(i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            // Step 4: Check overflow before updating num
            if(num > (limit - digit) / 10) {
                if(sign == 1) {
                    return INT_MAX;
                }
                else {
                    return INT_MIN;
                }
            }

            num = num * 10 + digit;
            i++;
        }

        return (int)(sign * num);
    }
};
