class MinStack {
public:
  stack<int>st;
  stack<int>minStack;
    MinStack() {
      
    }
    
    void push(int value) {
        st.push(value);
        if(minStack.empty())
        minStack.push(value);
        else
        minStack.push(min(minStack.top(),value));
    }
    
    void pop() {
        if(!st.empty())
        st.pop();
        minStack.pop();
    }
    
    int top() {
        
        return st.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */