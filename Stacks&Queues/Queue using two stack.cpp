//User function Template for C++

class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        
        input.push(x);
    }

    int dequeue() {
        while(input.empty()==false)
        {
            output.push(input.top());
            input.pop();
        }
        
        int res= output.top();
        output.pop();
        while(output.empty()==false)
        {
            input.push(output.top());
            output.pop();
        }
        return res;
    }
};
