class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& candidates, int target, int i, vector<int>& curr) {
        if(target == 0) {
            ans.push_back(curr);
            return;
        }

        if(i == candidates.size() || target < 0) {
            return;
        }

        curr.push_back(candidates[i]);
        solve(candidates, target - candidates[i], i, curr);

        curr.pop_back();
        solve(candidates, target, i + 1, curr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        solve(candidates, target, 0, curr);
        return ans;
    }
};