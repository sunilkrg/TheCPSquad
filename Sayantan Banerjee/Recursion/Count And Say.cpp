// AUTHOR :- SAYANTAN BANERJEE (IIIT GWALIOR)

// https://leetcode.com/problems/count-and-say/

// Row 1 = 1
// Row 2 = 11
// Row 3 = 21
// Row 4 = 1211

// Idea :- Recursively start from Row 1 returning "1" (base case), then caluculate the next row by traverse calculation.

class Solution {
public:

        string recurse(int N){
            if(N == 1)
                return "1";
            else{
                string prev = recurse(N-1);
                string output = "";
                int count = 1;
                char current = prev[0];
                for(int j=1; j<prev.length(); j++){
                    if(prev[j] == current){
                        count++;
                    }else{
                        output += to_string(count);
                        output.push_back(current);
                        current = prev[j];
                        count = 1;
                    }
                }
                output += to_string(count);
                output.push_back(current);
                return output;
            }
        }
    
        string countAndSay(int n) {
            return recurse(n);
        }
    
};
