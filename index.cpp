#include <iostream>
#include <string>

using namespace std;

class Student{
    public:
    // attributes
    int rollNo ;
    string name;
    int *cgp;


    // default constructor 
    Student(){
        cout<<"student default const called"<< endl ;
    }
    //parametrised const

    Student(int rollNo, string name ,int cgp){
        this->rollNo = rollNo;
        this->name = name;
        this->cgp = new int(cgp);
    }

    // copy constructor

    Student(const Student &srcobj){
        this->rollNo = srcobj.rollNo;
        this->name = srcobj.name;
    }
    // behaviour
    void study(){
        cout<< this->name <<"study"<< endl;

    }
    void sleeping (){
        cout<< this->name << "sleeping"<< endl;

    }
    void bunk (){
        cout<< this->name << "bunk"<< endl;

    }

    ~Student(){
        cout<< "destructor called"<< endl;
        delete this-> cgp;
    }
};

int main(){
    Student A(11,"harsh",12);
    A.bunk();
    cout<< A.name<< endl;

    Student B(12,"cou",12);

    Student C = A;
    C.bunk();

    Student *D = new Student(1,"Mohit",12);
    cout<<D->name<<endl;
    delete D;
    return 0;
}

 