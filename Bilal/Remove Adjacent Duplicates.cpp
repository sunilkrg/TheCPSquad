class Solution {
public:
    string removeDuplicates(string S) {
        reverse(S.begin(),S.end());
        string str = "";
        stack<char> dup;
        for(auto x : S){
            if(!(dup.empty()) && x == dup.top() ){
                dup.pop();
            }else{
                dup.push(x);
            }
        }
        while(!(dup.empty())){
            str+=dup.top();
            dup.pop();
        }
        return str;
    }
};