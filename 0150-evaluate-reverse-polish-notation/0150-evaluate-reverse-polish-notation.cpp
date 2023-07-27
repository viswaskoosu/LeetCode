class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s1;
        for (const string& token : tokens) {
            if (isdigit(token[0]) || (token.size() > 1 && isdigit(token[1]))) {
                s1.push(stoi(token));
            } else {
                int num2 = s1.top(); s1.pop();
                int num1 = s1.top(); s1.pop();
                if (token == "+") {
                    s1.push(num1 + num2);
                } else if (token == "-") {
                    s1.push(num1 - num2);
                } else if (token == "*") {
                    s1.push(num1 * num2);
                } else if (token == "/") {
                    s1.push(num1 / num2);
                }
            }
        }
        return s1.top();
    }
};
