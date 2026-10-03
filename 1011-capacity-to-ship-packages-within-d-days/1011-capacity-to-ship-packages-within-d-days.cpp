class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 0;
        int h = 0;
        for(int i = 0; i<weights.size(); i++){
            l = max(l, weights[i]);
            h +=weights[i];
        }
        int ans = h;
        while(l<=h){
            int mid = l + (h-l)/2;
            int d = 1;
            int current = 0;
            // cal total days to ship packages 
            for(int i = 0; i< weights.size(); i++){
                if(current + weights[i] <=mid){
                current += weights[i];
            }
            else{
                d++;
                current = weights[i];
            }
            }

            if(d<=days){
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