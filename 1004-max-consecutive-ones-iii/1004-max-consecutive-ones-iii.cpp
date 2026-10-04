class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int zeros = 0;
        int max_len = 0;
        int n = nums.size();

        while(j < n) {
            
            if(nums[j] == 0) {
                zeros++;
            }

            while(zeros > k) {
                
                if(nums[i] == 0) {
                    zeros--;
                }

                i++;
            }

            int length = j - i + 1;
            max_len = max(max_len, length);

            j++;
        }

        return max_len;
    }
};