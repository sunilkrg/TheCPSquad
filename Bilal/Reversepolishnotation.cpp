class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto i=0;i<tokens.size();i++){
            if( tokens[i]=="+" || tokens[i]=="-"|| tokens[i]=="*" || tokens[i]=="/"){
                int a = s.top();s.pop();
                int b = s.top();s.pop();
                if(tokens[i]=="+") s.push(a+b);
                else if(tokens[i]=="*") s.push(a*b);
                else if(tokens[i]=="-") s.push(b-a);
                else if(tokens[i]=="/") s.push(b/a);
                
            }else{
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};
