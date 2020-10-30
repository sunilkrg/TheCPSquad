// AUTHOR :- SAYANTAN BANERJEE

// https://leetcode.com/problems/k-th-symbol-in-grammar/

// Row 1 = 0
// Row 2 = 01
// Row 3 = 0110
// Row 4 = 01101001

// Idea :- If Ith row pattern equals to AB, then (I+1)th row pattern is ABBA.
// Thus reduce (N,K) to (N-1, Keqv) where Keqv is calculated based on the pattern.


class Solution {
public:
    
    int recurse(int N, int K){
        if(N == 1){
            return 0;
        }else if(N == 2){
            if(K == 1)
                return 0;
            else
                return 1;
        }else{
            if(K <= pow(2, N - 2)){
                return recurse(N-1, K);
            }else if(K > pow(2, N - 2) && K <= pow(2, N - 2) + pow(2, N - 3)){
                return recurse(N-1, K - pow(2, N - 3));
            }else{
                return recurse(N-1, K - pow(2, N - 2) - pow(2, N - 3));
            }
        }
    }
    
    int kthGrammar(int N, int K) {
        return recurse(N, K);
    }
};
