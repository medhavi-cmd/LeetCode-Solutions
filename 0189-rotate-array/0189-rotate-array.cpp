class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        vector <int> temp(k);
        // store temp variables
        for (int i = 0; i<k; i++){
            temp[i] = nums[n-k+i];
        }

        // shift array elements by k
        for(int i = n-k-1; i>=0; i--){
            nums[i+k] = nums[i];
        }

        // replace array staring elemnts by temp elements
        for
        (int i = 0; i<k; i++){
            nums[i] = temp[i];
        }

        
    }
};