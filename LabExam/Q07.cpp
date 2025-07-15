#include<iostream>

    using namespace std;
    
    class Complex {
        int fnumber;
        int snumber;
        
        public: 
            Complex(int f, int s){
                fnumber = f;
                snumber = s;
            }
            
            Complex(){
                fnumber = 0;
                snumber = 0;
            }
            
            void display() {
                cout<<"First Number: "<<fnumber<<endl;
                cout<<"Second Number: "<<snumber<<endl;
            }
            
            Complex operator +(Complex C2) {
                Complex obj;
                obj.fnumber = fnumber+C2.fnumber;
                obj.snumber = snumber+C2.snumber;
                return obj;
            }
            Complex operator -(Complex C2) {
                Complex obj;
                obj.fnumber = fnumber-C2.fnumber;
                obj.snumber = snumber-C2.snumber;
                return obj;
            }

    };
    
    int main() {
        Complex obj1(10, 15);
        obj1.display();
        Complex obj2(20, 15);
        obj2.display();
        Complex result;
        cout<<"+ OverLoaded"<<endl;
        result = obj1 + obj2;
        result.display();
         Complex result1;
          cout<<"- OverLoaded"<<endl;
        result1 = obj1 - obj2;
        result1.display();
        return 0;
    }