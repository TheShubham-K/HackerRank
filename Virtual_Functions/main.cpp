#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Person {
protected:
    string name;
    int age;
    int cur_id;
public:
    Person()
        : name(""), age(0), cur_id(0)
    {   }

    virtual void getdata() { cin >> name >> age; }
    virtual void putdata() { cout << name << " " << age << endl; }
};

class Professor : public Person {
    int publications;
    static int id;
public:
    Professor()
        : publications(0)
    { cur_id = ++id;  }

    void getdata() override { cin >> name >> age >> publications; }
    void putdata() override { cout << name << " " << age << " " << publications
                                << " " << cur_id << endl; }
};
int Professor::id = 0;

class Student : public Person {
    int marks[6];
    static int id;
    int marksSum;
public:
    Student()
        : marks{0}, marksSum(0)
    { cur_id = ++id; }

    void getdata() override {
        cin >> name >> age;
        for (int i=0; i < 6; i++) {
            cin >> marks[i];
        }
    }
    void putdata() override {
        for(int i : marks)
            marksSum += i;

        cout << name << " " << age << " " << marksSum << " " << cur_id << endl;
    }
};
int Student::id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
