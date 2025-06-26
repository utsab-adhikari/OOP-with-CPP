#include<iostream>
#include<cstring>
    using namespace std;

    class Animal {
        protected:
            char name[25];
            int age;
            char species[25];
        public:
            Animal() {}
            Animal(char n[25], int a, char s[25]) {
                strcpy(name, n);
                age = a;
                strcpy(species, s);
            }
            void display() {
                cout<<"\n<---Animal Details--->"<<endl;
                cout<<"Name: "<<name<<endl;
                cout<<"Age: "<<age<<endl;
                cout<<"Species: "<<species<<endl;
            }
    };

    class WildAnimal: public Animal {
        protected:
            char region[25];
            char diet[25];
            char conv_ststus[25];
        public:
            WildAnimal() {}
            WildAnimal(char n[25], int a, char s[25], char r[25], char d[25], char conv[25]): Animal(n, a, s) {
                strcpy(region, r);
                strcpy(diet, d);
                strcpy(conv_ststus, conv);
            }
            void display() {
                cout<<"\n<---WildAnimal Details--->"<<endl;
                cout<<"Region: "<<region<<endl;
                cout<<"Diet: "<<diet<<endl;
                cout<<"Conversation Status: "<<conv_ststus<<endl;
            }
    };

    class PetAnimal: public Animal {
        protected:
            char owner_name[25];
            char food[25];
        public:
            PetAnimal() {}
            PetAnimal(char n[25], int a, char s[25], char on[25], char f[25]): Animal(n, a, s) {
                strcpy(owner_name, on);
                strcpy(food, f);
            }
            void display() {
                cout<<"\n<---PetAnimal Details--->"<<endl;
                cout<<"Owner Name: "<<owner_name<<endl;
                cout<<"Food: "<<food<<endl;
            }
    };


    int main() {

        PetAnimal P1("Cat", 2, "Mammal", "Ram", "Milk");
        P1.Animal:: display();
        P1.PetAnimal:: display();

        WildAnimal W1("Tiger", 7, "wild", "Asia", "Meat", "hey there !");
        W1.Animal:: display();
        W1.WildAnimal:: display();
        return 0;
    }
