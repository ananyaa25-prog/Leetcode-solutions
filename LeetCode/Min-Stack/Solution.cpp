1class MinStack {
2        stack<long long>st;
3        long long  min=LLONG_MAX;
4public:
5    MinStack() {
6        
7    }
8    void push(int value) {
9        if(st.empty())
10        {
11             min=value;
12             st.push(value);
13        }
14        else{
15            if(value>min) st.push(value);
16            else
17            {
18                st.push(2LL*value-min);
19                min=value;
20            }
21        }
22
23    }
24
25    void pop() {
26     if(st.empty())
27     {
28        return;
29     }   
30     long long x=st.top();
31     st.pop();
32     if(x<min)
33     {
34        min=2*min-x;
35     }
36    }
37    
38    int top() {
39       if(st.empty())
40       {
41        return -1;
42       } 
43       long long  x=st.top();
44       if(min<x) return x;
45       return min;
46    }
47    
48    int getMin() {
49        return min;
50    }
51};
52
53/**
54 * Your MinStack object will be instantiated and called as such:
55 * MinStack* obj = new MinStack();
56 * obj->push(value);
57 * obj->pop();
58 * int param_3 = obj->top();
59 * int param_4 = obj->getMin();
60 */