class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        // int sum = 0;
        // for(int i = 0; i<n; i++){
        //     sum+=nums[i];
        //     nums[i] = sum;
        // }
        // return nums;

        // for(int i = 1; i<n; i++){
        //     nums[i] = nums[i-1] + nums[i];
        // }
        // return nums;


        vector <int> runningsum(n);
        runningsum[0] = nums[0];
        for(int i = 1; i<n; i++){
            runningsum[i] = runningsum[i-1]+nums[i];
        }
        return runningsum;
        
    }
};