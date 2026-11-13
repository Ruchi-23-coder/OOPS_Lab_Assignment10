#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
    stack<int> s;
    queue<int> q;
    // Stack operations
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Stack operations:" << endl;
    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "After pop, top element: " << s.top() << endl;
    // Queue operations
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "\nQueue operations:" << endl;
    cout << "Front element: " << q.front() << endl;
    q.pop();
    cout << "After pop, front element: " << q.front() << endl;
    return 0;
}

