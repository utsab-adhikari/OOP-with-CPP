/* WAP to implement "Student is a person", 
Where the person has attributes name, address,
 contact and student has additional features Rollno,
  regNo, faculty and college name, define member function 
  as per your requirement*/

#include<iostream>
#include<cstring>
    using namespace std;
    
    class Person;
    class Student;
    
    class Person {
        protected: 
            char name[25];
            char address[25];
            int age;
    
        public: 
            Person(){}
            Person(char pn[25], char ad[25], int a) {
                strcpy(name, pn);
                strcpy(address, ad);
                age = a;
            }
            void showData() {
                cout<<"\nPerson Details are --> "<<endl;
                cout<<"Name:"<<name<<endl;
                cout<<"Address:"<<address<<endl;
                cout<<"age:"<<age<<endl;
            }
    };
    
    class Teacher: public Person {
        protected: 
            char qualification[25];
            char department[25];
        public: 
            Teacher() {}
            Teacher(char pn[25], char ad[25], int a, char ql[25], char dep[25]): Person(pn, ad, a) {
                strcpy(qualification, ql);
                strcpy(department, dep);
            }
            void showData() {
                cout<<"\nTeacher Details are --> "<<endl;
                cout<<"Department:"<<department<<endl;
                cout<<"Qualification:"<<qualification<<endl;
            }
    };
    
    class Student: public Person {
        protected: 
            char program[30], semester[25];
            
        public: 
            Student(char pn[25], char ad[25], int a, char p[25], char s[25]): Person(pn, ad, a) {
                strcpy(program, p);
                strcpy(semester, s);
            }
            void showData() {
                cout<<"\nStudent Details are --> "<<endl;
                cout<<"Program:"<<program<<endl;
                cout<<"Semester:"<<semester<<endl;
            }
    };
            
    int main() {
        
        Teacher T1("Rabina", "KTM", 30,  "er", "IT");
        T1.Person:: showData();
        T1.Teacher:: showData();
        Student S1("Utsab","BKT", 17, "IT", "2nd");
         S1.Person:: showData();
        S1.Student:: showData();
        
        return 0;
    }