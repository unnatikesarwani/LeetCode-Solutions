class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0;
        int high = 0;
        int result = INT_MAX;
        int sum = 0;
        for(high = 0 ; high < nums.size(); high++){
            sum += nums[high];
            while(sum>=target){
                int len = high - low + 1;
                result = min(result,len);
                sum -= nums[low];
                low++;
            }
        }
        if(result == INT_MAX){
            result = 0;
        }
        return result;
    }
};