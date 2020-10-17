#include <iostream> 
#include <algorithm> 

using namespace std; 
  
int main() 
{ 
    string s = { "hemant" }; 
    bool val = next_permutation(s.begin(), s.end()); 
    if (val == false) 
        cout << "No Word Possible" << endl; 
    else
        cout << s << endl; 
    return 0; 
} 