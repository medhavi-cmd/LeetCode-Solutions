class Solution {
public:
    int maxArea(vector<int>& height) {
       int max_water = 0;
       int i = 0;
       int j = height.size()-1;
       while(i<j){
        int w = j-i;
        int h = min(height[i], height[j]);
        int water = w*h;
        max_water = max(water , max_water);
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
       }
       return max_water;
    }
};