//https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/885/

class Solution {
public:
    int strStr(string haystack, string needle) {
           
        if(needle=="")
            return 0;
        int found = haystack.find(needle);
        if(found!=string::npos)
            return found;
        return -1;;
      }
   };
