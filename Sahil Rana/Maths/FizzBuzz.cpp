//https://leetcode.com/explore/featured/card/top-interview-questions-easy/102/math/743/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> s;
        for(int i=1;i<=n;i++)
        {   string t=to_string(i);

            i%3==0 ? (i%5==0 ? s.push_back("FizzBuzz"):s.push_back("Fizz")): (i%5==0? s.push_back("Buzz"):s.push_back(t));
            
        }
        return s;
    }
};
