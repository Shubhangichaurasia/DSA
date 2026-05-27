class Solution {
public:
    bool isValid(string s) {
       // Online C++ compiler to run C++ program online
stack<char> stk;

for(int i=0;i<s.length();i++){
    char ch ;
    ch = s[i];
    if(ch == '(' || ch == '[' || ch == '{')
      stk.push(ch);
      else{
         // if closing bracket is encountered 
         if(stk.empty())
           return false;
         char top = stk.top();
        if((top == '(' && ch == ')') ||
                   (top == '{' && ch == '}') ||
                   (top == '[' && ch == ']')) {
                stk.pop();}
            else return false ;
      }
}
return stk.empty();


    }
};