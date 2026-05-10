#include <iostream>
#include <string>

using namespace std;

class Human {
public:
    string name;
    int age;

protected:
    int phone;

private:
    string isRelation;

public:
    Human(string name, int age, int phone, string isRelation) {
        this->name = name;
        this->age = age;
        this->phone = phone;
        this->isRelation = isRelation;
    }

    void getRelation(int otp) {
        if (otp == 110) {
            cout << isRelation << endl;
        } else {
            cout << "unauthorized" << endl;
        }
    }

    void greet() {
        cout << "hello " << name << endl;
    }

    void validate() {
        if (age > 18) {
            cout << "eligible" << endl;
        } else {
            cout << "not eligible" << endl;
        }
    }

    ~Human() {
        cout << "destructor called";
    }
};

class Male : public Human {
private:
    int inch;

public:
    Male(string name, int age, int phone, string isRelation, int inch)
        : Human(name, age, phone, isRelation) {

        this->inch = inch;
    }

    void getInch(int otp) {
        if (otp == 102) {
            cout << inch << endl;
        } else {
            cout << "unauthorized" << endl;
        }
    }
    void getphone(){
        cout<< phone<< endl;
    }
};

int main() {

    Male h("Harsh", 20, 12, "No", 5);

    cout << h.name << endl;

    h.getRelation(110);

    h.getInch(102);

       

    return 0;
}