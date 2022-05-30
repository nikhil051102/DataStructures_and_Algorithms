#include<iostream>
#include<vector>
using namespace std;

struct Stack {
    vector<int> v;
    
    void push(int x) {
        v.push_back(x);
    }

    void pop() {
        v.pop_back();
    }

    void size() {
        cout<<"Size of Stack : "<<v.size();
    }

    void peek() {
        cout<<"Top element is "<<v.back();
    }

    bool isEmpty() {
        return v.empty();
    }
};

int main() {
    struct Stack s;
    s.push(10);
    s.push(20);
    s.pop();
    s.peek();
}