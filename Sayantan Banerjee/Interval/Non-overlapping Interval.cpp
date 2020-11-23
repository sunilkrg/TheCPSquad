// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/non-overlapping-intervals/

// Idea :- First Sort all the intervals w.r.t end point.
// Now traverse the intervals, if any interval overlaps, remove that interval, i.e ERASE++


bool compareInterval(vector<int> i1, vector<int> i2) 
{ 
    if(i1[1] == i2[1])
        return i1[0] < i2[0];
    
    return i1[1] < i2[1];
} 

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin() , intervals.end() , compareInterval);
        if(intervals.size() == 0)
            return 0;
        
        int erase = 0;
        int end = intervals[0][1];
        
        for(int i = 1 ; i < intervals.size() ; i++){
            if(intervals[i][0] < end){
                erase++;
            }else{
                end = intervals[i][1];
            }
        }
        
        return erase;
    }
};
