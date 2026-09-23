1class MinStack {
2    stack<long long> st;
3    long long minV=LLONG_MAX;
4public:
5    MinStack() {
6        
7    }
8    
9    void push(int value) {
10     if(st.empty())
11     {
12        minV=value;
13        st.push(value);
14     } 
15     else
16     {
17        if(value>minV)
18        {
19            st.push(value);
20        }
21        else
22        {
23            st.push(2LL*value-minV);
24            minV=value;
25        }
26     }  
27    }
28    
29    void pop() {
30        if(st.empty())
31        {
32            return;
33        }
34        long long x=st.top();
35        st.pop();
36        if(x<minV)
37        {
38            minV=2LL*minV-x;
39        }
40    }
41    
42    int top() {
43      if(st.empty())
44      {
45        return -1;
46      }
47      long long x=st.top();
48      if(minV<x) return x;
49      return minV;
50    }
51    
52    int getMin() {
53       return minV; 
54    }
55};
56
57/**
58 * Your MinStack object will be instantiated and called as such:
59 * MinStack* obj = new MinStack();
60 * obj->push(value);
61 * obj->pop();
62 * int param_3 = obj->top();
63 * int param_4 = obj->getMin();
64 */