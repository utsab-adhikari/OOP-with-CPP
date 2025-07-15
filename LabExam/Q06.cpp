#include<iostream>

    using namespace std;
    
    class First {
        int fnumber;
        int snumber;
        
        public: 
            First(int f, int s){
                fnumber = f;
                snumber = s;
            }
            
            First(){
                fnumber = 0;
                snumber = 0;
            }
            
            void display() {
                cout<<"First Number: "<<fnumber<<endl;
                cout<<"Second Number: "<<snumber<<endl;
            }
            
            First operator ++(int) {
                First obj;
                obj.fnumber = fnumber++;
                obj.snumber = snumber++;
                return obj;
            }
            
            First operator --(int) {
                First obj;
                obj.fnumber = fnumber--;
                obj.snumber = snumber--;
                return obj;
            }
    };
    
    int main() {
        First newobj(10, 15);
        newobj.display();
        newobj--;
        newobj.display();
        newobj++;
        newobj.display();
        return 0;
    }