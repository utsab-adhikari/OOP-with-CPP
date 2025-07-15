//Polar to Rectangular using userdefined to userdefined conversion,

#include<iostream>
#include<math.h>
    using namespace std;

      class Rectangular {
        int x, y;
        public:
            Rectangular() {
                x = 0;
                y = 0;

            }
            Rectangular( int a, int b) {
                x = a;
                y = b;
            }
           void displayRect(){
                cout<<"x = "<<x<<endl;
                cout<<"y = "<<y<<endl;
            }
    };
    
     class Polar {
        int r, a;
        public:
             Polar(){}
            Polar(int r1, int a1) {
                r = r1;
                a = a1;
            }
            void displayPolar(){
                cout<<"r = "<<r<<endl;
                cout<<"a = "<<a<<endl;
            }
            operator Rectangular(){
                int x, y;
                x = r*cos(a);
                y = r*sin(a);
                Rectangular obj(x, y);
                return obj;
            }

    };



    int main() {
         Rectangular R1;
        Polar P1(20, 30);
        R1 = P1;
        R1.displayRect();
        P1.displayPolar();

        return 0;
    }
