class Solution {
public:
    int isValid(string s) {
        stack<char> stack;
        for(auto i:s){
            if(i=='('||i=='{'||i=='[') stack.push(i);
            else{
                if(stack.empty()||(stack.top()=='('&&i!=')')||(stack.top()=='['&&i!=']')||(stack.top()=='{'&&i!='}')) return false;
                stack.pop();
            }
        }
        return stack.empty();
    }
};