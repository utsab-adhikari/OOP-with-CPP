/*
classes: Triangle & Rectangle, have dimensions and area feature, 
common features are declared in class Shape, Both the class are derived from Shape,
*/

#include<iostream>
    using namespace std;
    
    class Shape {
        protected: 
            int len, brd;
        public: 
            void input() {
                cout<<"\n Enter The dimensions: length and Breadth respt."<<endl;
                cin>>len>>brd;
            }
            virtual float area() = 0; // this is the pure virtual function
    };
    
    class Triangle: public Shape {
        public: 
            float area() {
                return (len*brd*0.5);
            }
    };
     class Rectangle: public Shape {
        public: 
            float area() {
                return (len*brd);
            }
    };
    
    int main() {
        Shape *sptr;
        
        Triangle tobj;
        
        sptr = &tobj;
        sptr->input();
        
        cout<<"The area of Triangle is : "<<sptr->area();
        
        Rectangle robj;
        
        sptr = &robj;
        sptr->input();
        
        cout<<"The area of Rectangle is : "<<sptr->area();
        
        return 0;
    }

    /* the Output: 

 Enter The dimensions: length and Breadth respt.
4
6
The area of Triangle is : 12
 Enter The dimensions: length and Breadth respt.
4
6
The area of Rectangle is : 24

*/