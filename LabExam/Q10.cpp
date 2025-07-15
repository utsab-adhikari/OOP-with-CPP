//KG to GRAM using userdefined to userdefined conversion,

#include<iostream>
    using namespace std;

      class Gram {
        float wtg;
        public:
            Gram() {
                wtg = 0;
            }
            Gram( float g ) {
                wtg = g;
            }
            void displayGram() {
                cout<<"Gram = "<<wtg<<endl;
            }

    };

    class Kg {
        float wtkg;
        public:
            Kg() {
                wtkg = 0;
            }
            Kg( float w ) {
                wtkg = w;
            }
            void displayKg() {
                cout<<"KG = "<<wtkg<<endl;
            }

            operator Gram() {
                float x;
                x = wtkg * 1000;
                Gram g(x);
                return g;
            }

    };


    int main() {
        Kg kobj(4);
        Gram gobj;
        kobj.displayKg();
        gobj = kobj;
        gobj.displayGram();
        return 0;
    }
