#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    private:
        int age;
        int std;
        string f_name;
        string l_name;
    public:
        void set_age(int a){
            age = a;
        }
        int get_age(){
            return age;
        }
        void set_standard(int s){
            std = s;
        }
        int get_standard(){
            return std;
        }
        void set_first_name(string f){
            f_name=f;
        }
        string get_first_name(){
            return f_name;
        }
        void set_last_name(string l){
            l_name=l;
        }
        string get_last_name(){
            return l_name;
        }
        string to_string(){
            stringstream ss;
            ss<<age<<","<<f_name<<","<<l_name<<","<<std;
            return ss.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}


