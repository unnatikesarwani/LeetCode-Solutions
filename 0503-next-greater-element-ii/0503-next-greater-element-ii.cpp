class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n = nums.size();
        vector<int>res(n);
        for(int i = 2*n-1; i >= 0; i--){
            int idx = i % n;
            while(!st.empty() and st.top() <= nums[idx]){
                st.pop();
            }
            if(i<n and !st.empty()){
                res[idx] = st.top();
            }
            else{
                res[idx] = -1;
            }
            st.push(nums[idx]);
        }
        return res;
    }
};