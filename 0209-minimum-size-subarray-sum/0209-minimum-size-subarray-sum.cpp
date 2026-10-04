class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
        int j = 0;
        int min_len = INT_MAX;
        int sum = 0;
        int n = nums.size();
        while(j<n){
            sum += nums[j];

            while(sum>=target){
                int length = j-i+1;
                min_len = min(length, min_len);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        if(min_len != INT_MAX){
            return min_len;
        }
        return 0;
    }
};