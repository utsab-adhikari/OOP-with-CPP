// Car has a engine;

#include<iostream>
    using namespace std;
    
    class Engine {
        public: 
            void startEngine() {
                cout<<"\nEngine Starting ........."<<endl;
            }
            void stopEngine() {
                cout<<"............ Engine Stopped"<<endl;
            }
    };
    
    class Car {
        Engine E1;
        
        public: 
            void startCar() {
                E1.startEngine();
                cout<<"Car Starting ........."<<endl;
            }
            void stopCar() {
                E1.stopEngine();
                cout<<".......... Car Stopped"<<endl;
            }
    };
    
    int main() {
        Car C1;
        
        C1.startCar();
        C1.stopCar();
        
        return 0;
    }

    /*
    
    Output: 

Engine Starting .........
Car Starting .........
............ Engine Stopped
.......... Car Stopped

    */