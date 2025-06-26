#include<iostream>
#include<cstring>
    using namespace std;

    class University {
        protected:
            char uname[25];
            char location[25];
        public:
            University() {}
            University(char un[25], char ul[25]) {
            strcpy(uname, un);
            strcpy(location, ul);
            }
        void display() {
            cout<<"<---- The University Details ---->"<<endl;
            cout<<"Name: "<<uname<<endl;
            cout<<"Location: "<<location<<endl;
            }
    };

    class AfiliatedCollege: virtual public University {
        protected:
            char acname[25];
            char address[25];
            int no_of_progreams;
        public:
            AfiliatedCollege() {}
            AfiliatedCollege(char un[25], char ul[25], char acn[25], char aca[25], int acno): University(un, ul) {
                strcpy(acname, acn);
                strcpy(address, aca);
                no_of_progreams = acno;
                }
        void display() {
            cout<<"\n<---- Afiliated College Details ---->"<<endl;
            cout<<"Name: "<<acname<<endl;
            cout<<"address: "<<address<<endl;
            cout<<"NO of Programs: "<<no_of_progreams <<endl;
            }
    };

    class ConstituentCollege: virtual public University {
    protected:
        char school[25];
        char dean[25];
        public:
            ConstituentCollege() {}
            ConstituentCollege(char un[25], char ul[25], char ccs[25], char ccd[25]): University(un, ul){
                strcpy(school, ccs);
                strcpy(dean, ccd);
                }
            void display() {
                cout<<"\n<---- Constituent College Details ---->"<<endl;
                cout<<"School: "<<school<<endl;
                cout<<"dean: "<<dean<<endl;
                }

    };

    class Student: public AfiliatedCollege, public ConstituentCollege {
    protected:
        char student_name[25];
        char program[25];
        int enrolled_year;
    public:
        Student() {}
        Student(char un[25], char ul[25], char acn[25], char aca[25], int acno, char ccs[25], char ccd[25], char sn[25], char p[25], int ey): University(un, ul),AfiliatedCollege( un, ul, acn, aca, acno), ConstituentCollege(un, ul, ccs, ccd) {
            strcpy(student_name, sn);
            strcpy(program, p);
            enrolled_year = ey;
            }
        void display() {
            cout<<"\n<---- Student Details ---->"<<endl;
            cout<<"Name:  "<<student_name<<endl;
            cout<<"Program: "<<program<<endl;
            cout<<"Enrolled Year: "<<enrolled_year<<endl;
            }
    };

    int main() {
        Student s1("Pokhara", "Leknath", "NCIT", "balkumari", 16, "SOE", "Ram Kumar", "Utsab Adhikari", "BEIT", 2024 );
        s1.University:: display();
        s1.AfiliatedCollege:: display();
        s1.ConstituentCollege:: display();
        s1.Student:: display();

        return 0;
    }

