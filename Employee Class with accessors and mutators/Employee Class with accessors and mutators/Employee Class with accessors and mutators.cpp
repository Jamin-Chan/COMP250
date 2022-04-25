// Employee Class with accessors and mutators
//Jamin Chan 4/23/22

#include <iostream>
using namespace std;

class Employee {
public:
    Employee();
    Employee(string n, string d);
    void setDept(string d);
    void setName(string n);
    string getName() const;
    string getDept() const;

private:
    string name;
    string dept;
};

Employee::Employee() {
    name = "Jamin";
    dept = "STEM";
}

Employee::Employee(string n, string d) {
    name = n;
    dept = d;

    cout << name << " is in the " << dept << " department\n";
}

void Employee::setName(string n){
    name = n;
}

void Employee::setDept(string d){
    dept = d;
}

string Employee::getName()const{
    return name;
}

string Employee::getDept()const {
    return dept;
}


int main() {
    Employee worker("monkey", "zoo");
    worker.setName("horse");
    cout << "worker1 is " << worker.getName() << "\n";

    Employee worker2("captian", "police");
    worker2.setDept("firehouse");
    cout << "worker2 is in the " << worker2.getDept() << " department\n";

}

