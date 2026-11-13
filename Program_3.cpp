#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n, key, i;
    cout << "Enter 5 integers: ";
    for(i = 0; i < 5; i++){
        cin >> n;
        v.push_back(n);
    }
    // Sorting the vector
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for(i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\nEnter value to search: ";
    cin >> key;
    // Binary search
    if(binary_search(v.begin(), v.end(), key)){
        cout << "Element found!";
    }
    else{
        cout << "Element not found!";
    }
    return 0;
}

