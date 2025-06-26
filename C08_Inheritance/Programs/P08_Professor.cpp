#include<iostream>
#include<cstring>
    using namespace std;

    class Professor {
        protected:
            char profName[25];
            char department[25];
            int experience;
        public:
            Professor() {}
            Professor( char pN[25], char d[25], int e) {
                strcpy(profName, pN);
                strcpy(department, d);
                experience = e;
            }
            void display() {
                cout<<"<--- Professor Details ---> "<<endl;
                cout<<"Professor Name: "<<profName<<endl;
                cout<<"Department: "<<department<<endl;
                cout<<"Years of Experience: "<<experience<<endl;
            }
    };

    class Student {
        protected:
            char studentName[25];
            char faculty[25];
        public:
            Student() {}
            Student( char sN[25], char f[25]) {
                strcpy(studentName, sN);
                strcpy(faculty, f);
            }
            void display() {
                cout<<"\n<--- Student Details ---> "<<endl;
                cout<<"Student Name: "<<studentName<<endl;
                cout<<"Faculty: "<<faculty<<endl;
            }
    };

    class Course: public Professor, public Student {
        protected:
            char courseName[25];
            char code[25];
            int credit;
        public:
            Course() {}
            Course(  char pN[25], char d[25], int e, char sN[25], char f[25],char cN[25], char c[25], int cd): Professor(pN, d, e), Student(sN, f) {
                strcpy(courseName, cN);
                strcpy(code, c);
                credit = cd;
            }
            void display() {
                cout<<"\n<--- Course Details ---> "<<endl;
                cout<<"Course Name: "<<courseName<<endl;
                cout<<"Code: "<<code<<endl;
                cout<<"Credit: "<<credit<<endl;
            }
    };

    int main() {

        Course C1("Shiva Hari", "Electrical Er.", 18, "Ujjwal", "IT", "Digital Logic", "DL01", 3);
        C1.Professor:: display();
        C1.Student:: display();
        C1.Course:: display();


        return 0;
    }

