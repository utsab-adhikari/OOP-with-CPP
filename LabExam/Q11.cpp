#include<iostream>
    using namespace std;
    
    class Shape {
        public:
        virtual void draw() {
            cout<<"Drawing a Shape"<<endl;
        }
    };
    
    class Circle: public Shape {
        public: 
            void draw() override {
                cout<<"Drawing a Circle"<<endl;
            }
    };
    class Square: public Shape {
        public: 
            void draw() override {
                cout<<"Drawing a Square"<<endl;
            }
    };
    
    int main() {
        Shape* shapePtr;
        
        Circle C1;
        shapePtr = &C1;
        shapePtr -> draw();
        
        Square S1;
        shapePtr = &S1;
        shapePtr -> draw();
        
        return 0;
    }