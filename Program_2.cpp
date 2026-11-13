#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l;
    list<int>::iterator it;
    // Insert elements
    l.push_back(20);
    l.push_back(30);
    l.push_front(10);
    cout << "Original list: ";
    for(it = l.begin(); it != l.end(); it++){
        cout << *it << " ";
    }
    // Remove element 20
    l.remove(20);
    cout << "\nAfter removing 20: ";
    for(it = l.begin(); it != l.end(); it++){
        cout << *it << " ";
    }
    return 0;
}

