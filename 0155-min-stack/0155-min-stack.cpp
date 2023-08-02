class MinStack {
public:
    stack<int> s;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        stack<int> s1=s;
        int a=s1.top();
        while(!s1.empty()){
            if(s1.top()<a) a=s1.top();
            s1.pop();
        }
        return a;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */