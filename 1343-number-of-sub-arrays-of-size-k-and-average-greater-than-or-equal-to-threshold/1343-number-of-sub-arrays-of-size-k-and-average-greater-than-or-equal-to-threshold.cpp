class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i = 0;
        int j = 0;
        int count = 0;
        int sum = 0;
        while (j< arr.size()){
            sum += arr[j];
            if(j-i+1 >k){
                sum -= arr[i];
                i++;
            }
            int avg = sum/k;
            if (j-i+1 ==k){
                if(avg >= threshold){
                    count++;
                }
            }
            j++;
        }
        return count;
        
    }
};