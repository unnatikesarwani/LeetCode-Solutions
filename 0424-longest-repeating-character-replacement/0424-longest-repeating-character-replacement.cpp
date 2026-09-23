class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char , int>f;
        int low = 0;
        int res = 0;
        int maxfreq = 0;
        for(int high = 0 ; high < s.length() ; high++){
            f[s[high]]++;
            maxfreq = max(maxfreq,f[s[high]]);
            int len = high - low + 1;
            int diff = len - maxfreq;
            while(diff>k){
                f[s[low]]--;
                low++;
                len = high-low+1;
                diff= len-maxfreq;
            }
        len = high - low + 1;
        res = max(res,len);
        }
        return res;
    }
};