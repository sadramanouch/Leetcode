class MinStack {
public:
    stack<int> q;
    stack<int> mini;
    MinStack() {
        
    }
    
    void push(int val) {
        if (mini.empty()){
            mini.push(val);
        }
        else{
            mini.push(min(val,mini.top()));
        }
        q.push(val);
    }
    
    void pop() {
        q.pop();
        mini.pop();
    }
    
    int top() {
        return q.top();
    }
    
    int getMin() {
        return mini.top();
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