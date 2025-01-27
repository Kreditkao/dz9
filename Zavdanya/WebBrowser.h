#ifndef WEBBROWSER_H
#define WEBBROWSER_H

#include "MyStack.h"
#include <string>

class WebBrowser {
private:
    MyStack<string> history;
    MyStack<string> forwardStack;

public:
    void visit(const string& url) {
        history.push(url);
        // очищення стеку "вперед" кожного разу при додаванні нового URL
        while (!forwardStack.isEmpty()) {
            forwardStack.pop();
        }
    }

    string back() {
        if (!history.isEmpty()) {
            string current = history.top();
            history.pop();
            forwardStack.push(current);
            return history.isEmpty() ? "" : history.top();
        }
        return "";
    }

    string forward() {
        if (!forwardStack.isEmpty()) {
            string next = forwardStack.top();
            forwardStack.pop();
            history.push(next);
            return next;
        }
        return "";
    }

    void showHistory() const {
        cout << "Current history: ";
        history.show();
        cout << "Forward stack: ";
        forwardStack.show();
    }
};

#endif
