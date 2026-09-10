class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>f;
        int low = 0;
        int high = 0;
        int res = 0;
        int n = s.length();
        for(high = 0; high < n ; high ++){
            f[s[high]]++;
            while(f[s[high]] > 1){
                f[s[low]]--;
                if(f[s[low]] == 0){
                    f.erase(s[low]);
                }
                low++;
            }
            int len = high - low +1;
            res = max(res ,len);
        }
        return res;
    }
};