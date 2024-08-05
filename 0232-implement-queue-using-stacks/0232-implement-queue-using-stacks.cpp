class MyQueue {
public:
    stack<int>stk1;
    stack<int>stk2;
    MyQueue() {
        
    }
    
    void push(int x) {
        stk1.push(x);
    }
    
    int pop() {
        if(empty()){
            return 0;
        }
        else if(!stk2.empty()){
            int element = stk2.top();
            stk2.pop();
            return element;
        }
        else{ // stk 2 is empty but stk1 is not
         while(!stk1.empty()){
            stk2.push(stk1.top());
            stk1.pop();
         }
         int element = stk2.top();
         stk2.pop();
         return element;
        }
    }
    
    int peek() {
        if(empty()){
            return 0;
        }
        else if(!stk2.empty()){
            return stk2.top();
        }
        else{
            while(!stk1.empty()){
                stk2.push(stk1.top());
                stk1.pop();
            }
            return stk2.top();
        }
    }
    
    bool empty() {
        return stk1.empty() && stk2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */