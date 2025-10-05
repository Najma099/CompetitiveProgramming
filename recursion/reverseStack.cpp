class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        if(st.size() <= 1) return;
        
        int ele = st.top();
        st.pop();
        reverseStack(st);
        addElementAtBottom(st, ele);
    }
    
    void addElementAtBottom(stack<int> &st, int ele) {
        
        if(st.empty()) {
            st.push(ele);
            return;
        }
        
        int top = st.top();
        st.pop();
        addElementAtBottom(st, ele);
        st.push(top);
    }
};