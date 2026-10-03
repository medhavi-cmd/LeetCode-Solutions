class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l = 0; 
        int h = 0;
        for(int i = 0; i< nums.size(); i++){
            l = max(l, nums[i]);
            h += nums[i];
        }
        int ans = h;

        while(l<=h){
            int mid = l + (h-l)/2;

            int sub = 1;
            int curr = 0;
            for(int i = 0; i<nums.size(); i++){
                if (curr + nums[i] <=mid){
                    curr += nums[i];
                }
                else{
                    sub++;
                    curr = nums[i];
                }
            }

            if (sub<=k){
                ans = mid;
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
        
    }
};