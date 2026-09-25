class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        int result = 0;
        int count = 0;
        while(high < nums.size()){
            if(nums[high] == 0){
                count++;
            }
            high++;
            while(count>k){
                if(nums[low] == 0){
                    count--;
                }
                low++;
            }
            int len = high - low ;
            if(len>result){
                result = len;
            }
        }
        return result;
    }
};