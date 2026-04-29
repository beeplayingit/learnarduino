#include <iostream>
using namespace std;
int main() {
    int x, y, answer;
    string decision;
    cout << "Type a number: ";
    cin >> x;
    cout << "Type your second number: ";
    cin >> y;
    cout << "What do you want to do? (add, subtract, multiply, divide): ";
    cin >> decision;
    if (decision == "add") {
        answer = x + y;
    } else if (decision == "subtract") {
        answer = x - y;
    } else if (decision == "multiply") {
        answer = x * y;
    } else if (decision == "divide") {
        answer = x / y;
    }
    cout << "You chose to " << decision << " the two numbers, resulting in a value of " << answer << ".";
    return 0;
}