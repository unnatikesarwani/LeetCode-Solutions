class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxproduct = nums[0];
        int minproduct = nums[0];
        int product = nums[0];
        for(int i = 1; i < nums.size(); i++){
            int ch1 = nums[i];
            int ch2 = maxproduct * nums[i];
            int ch3 = minproduct * nums[i];
            maxproduct = max(ch1, max(ch2,ch3));
            minproduct = min(ch1, min(ch2,ch3));
            product = max(product,max(maxproduct,minproduct));
        }
        return product;
    }
};