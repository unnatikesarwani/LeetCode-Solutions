class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete = arr[0];
        int onedelete = INT_MIN;
        int res = arr[0];
        int v1 = 0;
        for(int i = 1 ; i < arr.size(); i++){
            int prev_nodelete = nodelete;
            int prev_onedelete = onedelete;
            nodelete = max(nodelete + arr[i] , arr[i]);
            if(prev_onedelete == INT_MIN){
                v1 = arr[i];
            }
            else{
                v1 = prev_onedelete + arr[i];
            }
            onedelete = max(v1 , prev_nodelete);
             res = max(res, max(onedelete,nodelete));
        }
       return res;
    }
};