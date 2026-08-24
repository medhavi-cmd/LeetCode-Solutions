class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector <int> prefix(n,0);
        vector <int> suffix(n,0);

        // prefix sum calc
        for(int i = 1; i<n; i++){
            prefix[i] = prefix[i-1] + nums[i-1];
        }

        // suffix sum calc
        for(int i=n-2; i>=0; i--){
            suffix[i] = suffix[i+1] + nums[i+1];
        }

        // check for pivot
        for(int i = 0; i<n; i++){
            if (prefix[i]==suffix[i]){
                return i;
            }
        }
        return -1;
    }
};