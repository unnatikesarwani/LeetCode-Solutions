class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>res(n);
        int left = 0;
        int right = n-1;
        int index = n-1;
        while(left<=right){
            int sq_left=nums[left]*nums[left];
            int sq_right=nums[right]*nums[right];
            if(sq_left>sq_right){
                res[index]=sq_left;
                left++;
            }
            else{
                res[index]=sq_right;
                right--;
            }
            index--;
        }
        return res;
    }
};