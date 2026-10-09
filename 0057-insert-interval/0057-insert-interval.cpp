class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>  res;
        bool insert = false;
        int start1 = newInterval[0];
        int end1 = newInterval[1];
        for(int i = 0; i < intervals.size(); i++){
            int start2 = intervals[i][0];
            int end2 = intervals[i][1];
            if(end2 < start1) {
                res.push_back(intervals[i]);
            }
            else if(start2 > end1) {
                if(insert == false) {
                    res.push_back({start1, end1});
                    insert = true;
                }

                res.push_back(intervals[i]);
            }
            else {
                start1 = min(start1, start2);
                end1 = max(end1, end2);
            }
        }

        if(insert == false) {
            res.push_back({start1, end1});
        }

        return res;
    }
};