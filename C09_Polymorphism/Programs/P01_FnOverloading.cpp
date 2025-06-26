/*
Class Addition has three mem fn with same name "sum" that adds two
three and four numbers
*/

#include<iostream>
    using namespace std;
    
    class Addition {
        int w, x, y, z;
        
        public: 
            void sum(int x, int y) {
                cout<<"The sum of "<<x<<" and "<<y<<" is "<<x+y<<endl;
            }
            void sum(int x, int y, int w) {
                cout<<"The sum of "<<x<<", "<<y<<" and "<<w<<" is "<<x+y+w<<endl;
            }
            void sum(int x, int y, int w, int z) {
                cout<<"The sum of "<<x<<", "<<y<<", "<<w<<" and "<<z<<" is "<<x+y+w+z<<endl;
            }
    };
    
    int main() {
        
        Addition A1;
        
        A1.sum(5, 2);
        A1.sum(5, 2, 1);
        A1.sum(5, 3, 2, 1);
        return 0;
    }

    /*
    
    Output is : 

The sum of 5 and 2 is 7
The sum of 5, 2 and 1 is 8
The sum of 5, 3, 2 and 1 is 11

    */