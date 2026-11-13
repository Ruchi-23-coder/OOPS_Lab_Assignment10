#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    map<int, string> students;
    map<int, string>::iterator it;
    int n, roll, searchRoll;
    string name;
    cout << "Enter number of students: ";
    cin >> n;
    // Insert student records
    for(int i = 0; i < n; i++){
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
        students.insert(make_pair(roll, name));
    }
    // Display all records
    cout << "\nStudent Records:\n";
    for(it = students.begin(); it != students.end(); it++){
        cout << "Roll Number: " << it->first
             << ", Name: " << it->second << endl;
    }
    // Search student by roll number
    cout << "\nEnter roll number to search: ";
    cin >> searchRoll;
    it = students.find(searchRoll);
    if(it != students.end()){
        cout << "Student Found!" << endl;
        cout << "Name: " << it->second;
    }
    else{
        cout << "Student not found!";
    }
    return 0;
}

