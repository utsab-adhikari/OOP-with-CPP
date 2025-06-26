#include<iostream>
#include<cstring>
    using namespace std;

    class Publication {
        protected:
            char title[25];
            double price;
        public:
            Publication() {}
            Publication(char t[15], double p) {
                strcpy(title, t);
                price = p;
            }
            void display() {
                cout<<"<---Publication Details--->"<<endl;
                cout<<"Title: "<<title<<endl;
                cout<<"Price: "<<price<<endl;
            }
    };

    class Sales {
        protected:
            int monthly_sales;

        public:
            Sales() {}
            Sales(int m) {
                monthly_sales = m;
            }
            void display() {
                cout<<"\n<---Sales Details--->"<<endl;
                cout<<"Monthly Sales: "<<monthly_sales<<endl;
            }

    };

    class Book: public Publication, public Sales {
        protected:
            char author[25];
            int pageCount;
        public:
            Book() {}
            Book( char t[15], double p, int m, char a[25], int pg ):Publication(t, p), Sales(m) {
                strcpy(author, a);
                pageCount = pg;
            }
            void display() {
                cout<<"\n<---Book Details--->"<<endl;
                cout<<"Author: "<<author<<endl;
                cout<<"Page No: "<<pageCount<<endl;
            }

    };

    int main() {

        Book B1("Theory of Everything", 5000, 20, "St. Hwakin", 500);

        B1.Publication:: display();
        B1.Sales:: display();
        B1.Book:: display();

        return 0;
    }

