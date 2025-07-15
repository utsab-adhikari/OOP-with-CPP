// Passing Object as an Argument in a Function 

/* class - Complex, data members real and imaginary,
member function to input & display details 
and a member function to add complex number*/

#include<iostream>

    using namespace std;
    
    class Complex {
        int real;
        int img;
        
        public: 
        Complex() {
            real = 0;
            img = 0;
        }
        Complex(int r, int i) {
            real = r;
            img = i;
        }
        void display();
        void displayCom();
        void addComplex(Complex C1, Complex C2);
    };
    
    int main() {
        cout<<"\nFor First--> "<<endl;
        Complex first(3, 4);
        cout<<"\nFor Second--> "<<endl;
        Complex second(5, 6);
        
        cout<<"\nFirst Complpex Number is:";
        first.displayCom();
         cout<<"\nSecond Complpex Number is:";
        second.displayCom();
        
        Complex result;
        result.addComplex(first, second);
        
        result.display();
        
        return 0;
        
        
    }
    
    void Complex:: addComplex(Complex C1, Complex C2) {
        real = C1.real + C2.real;
        img = C1.img + C2.img;
    }
    void Complex:: displayCom() {
        cout<<" "<<real<<" + "<<img<<"i"<<endl;
    }
    
    void Complex:: display() {
        cout<<"\nThe Result is : "<<real<<" + "<<img<<"i "<<endl;
    }
    
    