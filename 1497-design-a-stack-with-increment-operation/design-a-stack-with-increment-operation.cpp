class CustomStack {
private:
    vector<int> stack;  
    int maxSize;        

public:
    CustomStack(int maxSize) {
        this->maxSize = maxSize; 
    }

    void push(int x) {
        if (stack.size() < maxSize)
            stack.push_back(x);
    }
    
    int pop() {
        if (stack.empty()) {
            return -1;
        } else {
            int top = stack.back();
            stack.pop_back();
            return top;
        }   
    }

    void increment(int k, int val) {
        for (int i = 0; i < k && i < stack.size(); ++i) {
            stack[i] += val;
        } 
    }
};
