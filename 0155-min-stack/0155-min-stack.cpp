class MinStack {
public:
stack<int>st , sMin;
    MinStack() {
        
    }
    
    void push(int val) {
    if(sMin.empty() || val<=sMin.top())
    {
      sMin.push(val);
    }  
    st.push(val);  
    }
    
    void pop() {
        if(st.top()==sMin.top()){
            sMin.pop();
        }
        st.pop();
    }
    
    int top() {
       return st.top(); 
    }
    
    int getMin() {
        return sMin.top();
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