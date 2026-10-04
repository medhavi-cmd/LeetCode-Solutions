class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int i = 0;
       int j = 0;
       double max_avg = INT_MIN;
       int sum = 0;
       while(j<nums.size()){
        sum += nums[j];
        if(j-i+1 >k){
            sum -= nums[i];
            i++;
        }
        if(j-i+1 == k){
            double avg = (double)sum / k;
            max_avg = max(avg, max_avg);
        }
        j++;
       }
        return max_avg;
    }
};