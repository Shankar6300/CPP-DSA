// 
#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter ID, Name, Marks for student " << i+1 << ": ";
        cin >> arr[i].id >> arr[i].name >> arr[i].marks;
    }

    cout << "\nStudent List:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i].id << " " << arr[i].name << " " << arr[i].marks << endl;
    }
    return 0;
}
