  #include <iostream>
#include <string>

using namespace std;

// encapsulation 

class Student{
    private:
    // attributes
    int rollNo ;
    string name;
    string gfname;
    int *cgp;
    int code;

    public:
    // default constructor 
    Student(){
        cout<<"student default const called"<< endl ;
    }
    //parametrised const

    Student(int rollNo, string name ,int cgp,string gfname){
        this->rollNo = rollNo;
        this->name = name;
        this->cgp = new int(cgp);
        this->gfname = gfname;
    }

    void getcgp(){
        cout<< *(this->cgp) << endl;
    }

    void setcgp(int code,int cgp){
        if(code == 101){
            this->cgp = new int(cgp);
            cout<< *(this->cgp) << endl;
        }else{
            cout<< "unauthorized"<< endl;
        }
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

    private: 
    void chatting(){
        cout<< this->gfname <<"chatting"<< this->name << endl;
    }

   
};

int main(){
    Student A(10,"harsh",6,"none");
    A.getcgp();
    A.setcgp(101,7);
    
    return 0;
}

 