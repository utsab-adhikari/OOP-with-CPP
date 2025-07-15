// Mountain with friend function
#include<iostream>
    using namespace std;
    
    class Mountain;
    void compHeight(Mountain M1, Mountain M2);
    
    class Mountain {
        char name[20];
        int height;
        char location[20];
        
        public: 
        void input();
        void display();
        friend void compHeight(Mountain M1, Mountain M2);
    };
    
    void Mountain:: input()
        {
            cout<<"\nEnter Mountain Details: "<<endl;
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Height: ";
            cin>>height;
            cout<<"Enter Location: ";
            cin>>location;
        }
    
    void Mountain:: display()
        {
            cout<<"\nThe Details of the Mountain Are: "<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Location: "<<location<<endl;
            cout<<"Height: "<<height<<endl;
        }
        
    int main()
        {
           Mountain M1, M2;
           
           cout<<"\nFor 1st ----->";
           M1.input();
           
           cout<<"\nFor 2nd ----->";
           M2.input();
           
           compHeight(M1, M2);

           return 0;
        }
        
    void compHeight(Mountain M1, Mountain M2) 
        {
            if(M1.height>M2.height)
                {
                    cout<<"\nThe Highest Mountain is "<<M1.name<<endl;
                    M1.display();
                } else {
                    cout<<"\nThe Highest Mountain is "<<M2.name<<endl;
                    M2.display();
                }
        }