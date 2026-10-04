class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int max_center = nums[0];
        int min_center = nums[0];
        int sum_max = nums[0];
        int sum_min = nums[0];
        int temp = nums[0];
        for(int i = 1 ; i < nums.size() ; i++){
            int v1 = max_center + nums[i];
            int v2 = nums[i];
            int v3 = min_center + nums[i];
            temp = temp + nums[i];
            max_center = max(v1,v2);
            min_center = min(v2,v3);
            sum_max = max(sum_max,max_center);
            sum_min = min(sum_min,min_center);
    
        }
        if(sum_max < 0){
            return sum_max;
        }
        int total = temp - sum_min;
        return max(sum_max,total);
    }
};