#ifndef MYSTACK_H
#define MYSTACK_H

#include <vector>
#include <iostream>
using namespace std;

template <typename T>
class MyStack {
private:
    vector<T> stackArray;
public:
    bool isEmpty() const {
        return stackArray.empty();
    }

    T top() const {
        if (!isEmpty()) {
            return stackArray.back();
        }
        else {
            throw out_of_range("Stack is empty");
        }
    }

    void push(const T& value) {
        stackArray.push_back(value);
    }

    void pop() {
        if (!isEmpty()) {
            stackArray.pop_back();
        }
        else {
            throw out_of_range("Stack is empty");
        }
    }

    void show() const {
        for (auto it = stackArray.rbegin(); it != stackArray.rend(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }
};

#endif
