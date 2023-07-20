#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age;
    string first_name;
    string last_name;
    int standard;
    
    void Nhap(){
        cin >> age;
        cin >> first_name;
        cin >> last_name;
        cin >> standard;
    }    
    
    void Xuat(){
        cout << age << " " << first_name << " " << last_name << " " << standard << endl;
    }
};

int main() {
    Student st;
    
    st.Nhap();
    st.Xuat();
    return 0;
}