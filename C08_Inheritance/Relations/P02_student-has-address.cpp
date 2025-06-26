// Student has Address;

#include<iostream>
    using namespace std;
    
    class Address {
        protected: 
            char country[25];
            char municipality[25];
            int provinceNo;
            int wardNo;
        
        public:     
            void inputAddress() {
                cout<<"\n<--- Enter Valid Address --->"<<endl;
                cout<<"Country: ";
                cin>>country;
                cout<<"Municipality: ";
                cin>>municipality;
                cout<<"Province No.: ";
                cin>>provinceNo;
                cout<<"Ward No.: ";
                cin>>wardNo;
            }
             void displayAddress() {
                cout<<"\n<--- Address Details --->"<<endl;
                cout<<"Country: "<<country<<endl;
                cout<<"Municipality: "<<municipality<<endl;
                cout<<"Province No.: "<<provinceNo<<endl;
                cout<<"Ward No.: "<<wardNo<<endl;
            }
    };
    
    class Student {
        Address A1;
        char name[25];
        int rollNo;
        
        public: 
            void inputStudent() {
                cout<<"\n<--- Enter Student Details --->"<<endl;
                cout<<"Name: ";
                cin>>name;
                cout<<"Roll No.: ";
                cin>>rollNo;
                A1.inputAddress();
            }
            void displayStudent() {
                cout<<"\n<--- Student Details --->"<<endl;
                cout<<"Name: "<<name<<endl;
                cout<<"Roll No.: "<<rollNo<<endl;
                A1.displayAddress();
            }
    };
    
    int main() {
        Student S1;
        
        S1.inputStudent();
        S1.displayStudent();
        
        return 0;
    }
    
    
    /*
    
    Output: 

<--- Enter Student Details --->
Name: Utsab
Roll No.: 31

<--- Enter Valid Address --->
Country: Nepal
Municipality: Panini
Province No.: 05
Ward No.: 04

<--- Student Details --->
Name: Utsab
Roll No.: 31

<--- Address Details --->
Country: Nepal
Municipality: Panini
Province No.: 5
Ward No.: 4

    */