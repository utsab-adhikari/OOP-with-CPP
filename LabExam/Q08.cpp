#include<iostream>

    using namespace std;
    
    class Complex {
        int fnumber[3][3];
        
        public: 
            void input() {
                cout<<"Matrix:"<<endl;
                for(int i=0; i<3;i++) {
                    for(int j=0; j<3;j++){
                        cout<<"Value of "<<i<<","<<j<<":";
                        cin>>fnumber[i][j];
                    }
                }
            }
            
            void display() {
                 cout<<"Matrix:"<<endl;
                for(int i=0; i<3;i++) {
                    for(int j=0; j<3;j++){
                        cout<<fnumber[i][j]<<"  ";
                    }
                    
                    cout<<"\n";
                }
            }
            
            Complex operator +(Complex mat2) {
                Complex obj;
                  for(int i=0; i<3;i++) {
                    for(int j=0; j<3;j++){
                        obj.fnumber[i][j] = fnumber[i][j] + mat2.fnumber[i][j];
                    }
                }
                return obj;
            }

    };
    
    int main() {
       Complex mat1, mat2, sum;
       cout<<"For First:"<<endl;
       mat1.input();
        cout<<"For Second:"<<endl;
       mat2.input();
       
        cout<<"For First:"<<endl;
        mat1.display();
         cout<<"For Second:"<<endl;
        mat2.display();
        
        sum = mat1 + mat2;
        
        sum.display();
        
        return 0;
    }