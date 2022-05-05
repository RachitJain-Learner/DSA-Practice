class MyStack {
public:
    
    queue<int> qu ;
    
    MyStack() {
        
    }
    
    void push(int x) {
        qu.push(x) ;
        for(int i=0;i<qu.size()-1;++i){
			qu.push(qu.front());
			qu.pop();
		}
    }
    
    int pop() {
        int front = qu.front();
        qu.pop();
        return front ;
		
    }
    
    int top() {
        return qu.front() ;
    }
    
    bool empty() {
        if(qu.empty())
            return true ;
        else
            return false ;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */