class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestending = nums[0];
        int ans = nums[0];
        for(int i = 1; i < nums.size(); i++){
            int ch1 = bestending + nums[i];
            int ch2 = nums[i];
            bestending = max(ch1,ch2);
            ans = max(ans,bestending);
        }
        return ans;
    }
};