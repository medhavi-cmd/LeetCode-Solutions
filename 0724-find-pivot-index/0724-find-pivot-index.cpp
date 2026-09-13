class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int total = 0;
        for(int x : nums){
            total +=x;
        }
        int prefixSum = 0;
        for(int i = 0; i<n; i++){
            int suffixSum = total - prefixSum - nums[i];
            if (prefixSum == suffixSum){
                return i;
            }
            prefixSum += nums[i];
        }
        return -1;
    }
};