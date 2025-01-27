#include "MyStack.h"
#include "WebBrowser.h"

int main() {
    WebBrowser browser;

    browser.visit("https://example.com");
    browser.visit("https://google.com");
    browser.visit("https://youtube.com");

    cout << "After visiting three websites:" << endl;
    browser.showHistory();

    cout << "\nBack: " << browser.back() << endl;
    browser.showHistory();

    cout << "\nBack: " << browser.back() << endl;
    browser.showHistory();

    cout << "\nForward: " << browser.forward() << endl;
    browser.showHistory();

    return 0;
}
