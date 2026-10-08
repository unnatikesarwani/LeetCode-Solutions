class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int res = 0;
        int diff = 0;
        unordered_map <int,int>f;
        for(int i = 0; i <nums.size(); i++){
            if(nums[i] == 0){
                zero++;
            }
            else{
                one++;
            }
            diff = zero - one;
            if(diff == 0){
                res = max(res,i+1);
                continue;
            }
            if(f.find(diff) == f.end()){
                f[diff] = i;
            }
            else{
                int len = i - f[diff];
                res = max(res,len);
            }
        }
        return res;
    }
};