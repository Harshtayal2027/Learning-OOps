#include <iostream>
#include <string>

using namespace std;

// function overloading
class Check{
    public:

    int sum(int a,int b){
        int ans  = a+b;
        cout<< ans ;
        return ans;
    }

    float sum(float a,float b){
        float ans  = a+b;
        cout<< ans ;
        return ans;
    }

    ~Check(){

    }
};


// operator overloading

class  Complex{
    public:
    int real;
    int imag;

    Complex(){
        real = imag = -1;
    }

    Complex(int r,int i):real(r),imag(i){

    }
    
    void print(){
        printf("[%d + i%d]",this->real, this->imag);
    }

    Complex operator+(const Complex &B){
        Complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
    }

};

int main(){
    Check N;
    N.sum(2,3);
    N.sum(2.3f,3.5f);

    Complex A(2,3);
    Complex B(4,5);
    Complex C(A+B);
    A.print();
    B.print();
    C.print();
}