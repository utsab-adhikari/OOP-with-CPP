#include<iostream>
    using namespace  std;
    
    class Base {
        protected: 
            int x;
            
        public: 
            virtual void display() {
                cout<<"Inside the  Base class";
            }
    };
    
    class Derived: public Base {
        protected: 
            int y;
            
        public: 
            void display()  {
                cout<<"Inside Derived";
            }
    };
    
    int main() {
        
        Base *bptr, bobj;
        bptr = &bobj;
    
        cout<<"\nCalling display from bptr that points object of Base"<<endl;
    
        bptr->display();
    
        Derived dobj;
        bptr = &dobj;
        cout<<"\nCalling display from bptr that points object of Derived"<<endl;
    
        bptr->display();
        
        return 0;
    }

/*

output: 

Calling display from bptr that points object of Base
Inside the  Base class
Calling display from bptr that points object of Derived
Inside Derived

*/