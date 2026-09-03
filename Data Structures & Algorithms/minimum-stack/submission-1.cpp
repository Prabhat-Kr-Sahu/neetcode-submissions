class MinStack {
    stack<long> st ;
    long minm ;
    
public:
    MinStack() {
     
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(0);
            minm = val;
        }
        else{
            st.push( (long)val - minm);
            if( val < minm) minm = val;
        }
        
    }
    
    void pop() {
        if(st.empty()) return;
        long pop0 = st.top();
        st.pop();
        if(pop0 < 0) minm = minm - pop0;

    }
    
    int top() {
        long top = st.top();
        return  (top > 0 ) ? (top + minm ) : (int) minm;

    }
    
    int getMin() {
        return (int) minm;
    }
};
