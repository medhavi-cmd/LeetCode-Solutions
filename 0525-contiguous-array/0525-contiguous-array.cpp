class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int n = nums.size();
        int prefix = 0;
        int ans = 0;
        mpp[0] = -1;
        for(int i = 0; i<n; i++){
            if (nums[i]==0){
                prefix +=-1;
            }
            else{
                prefix += 1;
            }

            if (mpp.count(prefix)){
                ans = max(ans, i-mpp[prefix]);
            }
            else{
                mpp[prefix] = i;
            }
        }
        return ans;
    }
};