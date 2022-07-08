class MyQueue {
public:
    stack<int> s1;
    stack <int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
     s1.push(x);   
    }
    
    int pop() {
        int d;
        if(s2.empty()==false)
        {
            d=s2.top();
            s2.pop();
            return d;
        }
        else {
            while(s1.empty()==false)
            {s2.push(s1.top());
              s1.pop(); 
            }
        d=s2.top();
            s2.pop();
        }
        return d;
    }
    
    int peek() {
         int d;
        if(s2.empty()==false)
        {
            d=s2.top();
            return d;
        }
        else {
            while(s1.empty()==false)
            {s2.push(s1.top());
              s1.pop(); 
            }
        d=s2.top();
        }
        return d;
    }
    
    bool empty() {
        return (s1.empty() and s2.empty());  }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */