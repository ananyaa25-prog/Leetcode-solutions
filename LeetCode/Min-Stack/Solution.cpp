1class MinStack {
2    stack<long long>st;
3    long long minV=LLONG_MAX;
4public:
5    MinStack() {
6        
7    }
8    
9    void push(int value) {
10       if(st.empty())
11       {
12        minV=value;
13        st.push(value);
14       } 
15       else
16       {
17        if(value>minV)
18        {
19            st.push(value);
20        }
21        else
22        {
23           st.push(2LL*value-minV);
24           minV=value;
25        }
26       }
27    }
28    
29    void pop() {
30       if(st.empty())
31       {
32        return;
33       } 
34        long long x=st.top();
35        st.pop();
36        if(x<minV)
37        minV=2LL*minV-x;
38    }
39    
40    int top() {
41        if(st.empty())
42        {
43            return -1;
44        }
45        long long x=st.top();
46        if(minV<x) return x;
47        return minV;
48    }
49    
50    int getMin() {
51        return minV;
52    }
53};
54
55/**
56 * Your MinStack object will be instantiated and called as such:
57 * MinStack* obj = new MinStack();
58 * obj->push(value);
59 * obj->pop();
60 * int param_3 = obj->top();
61 * int param_4 = obj->getMin();
62 */