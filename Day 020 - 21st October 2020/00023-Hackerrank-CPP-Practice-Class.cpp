#include <iostream>
#include <sstream>
using namespace std;

class Student{
    int age;
    int standard;
    string first_name;
    string last_name;
public:
    void set_age(int);
    void set_standard(int);
    void set_first_name(string);
    void set_last_name(string);

    int get_age();
    int get_standard();
    string get_first_name();
    string get_last_name();

    string to_string();
};

void Student :: set_age(int newAge){
    age = newAge;
}
void Student :: set_standard(int newStandard){
    standard = newStandard;
}
void Student :: set_first_name(string newFirst_name){
    first_name = newFirst_name;
}
void Student :: set_last_name(string newLast_name){
    last_name = newLast_name;
}
int Student ::  get_age(){
    return age;
}
int Student ::  get_standard(){
    return standard;
}
string Student ::  get_first_name(){
    return first_name;
}
string Student ::  get_last_name(){
    return last_name;
}

string Student ::  to_string(){
    stringstream ss;
    char c = ',';
    ss << age << c << first_name << c << last_name << c << standard;
    return ss.str();
}





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
