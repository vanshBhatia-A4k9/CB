#include<iostream>
#include<cstring>
using namespace std;

class Car{
    private:
        int price;

    public:
        char* name;
        Car(){

        }
        ///DEEP Copy constructor
        Car(Car &x){
            price = x.price;
            name = new char[strlen(x.name) + 1];
            strcpy(name, x.name);
        }
        ///Setters:
        void setPrice(int p){
            if( p < 1000 )
                throw invalid_argument{"\nPrice cannot be less than 1000"};
            price = p;
        }
        void setName(char* s){
            name = s;
        }
        ///Getters:
        int getPrice(){
            return price;
        }
        char* getName(){
            return name;
        }
};

int32_t main(void){
    Car a;
    int price;  cin>>price;
    char name[20]; cin>>name;

    a.setPrice(price);
    a.setName(name);

    cout<<a.getPrice()<<"\n";
    cout<<a.getName()<<"\n";

    Car b = a;
    b.name[0] = 'h';

    cout<<"\nPRINTING AGAIN\n";

    cout<<a.getPrice()<<"\n";
    cout<<a.getName()<<"\n";

    cout<<b.getPrice()<<"\n";
    cout<<b.getName()<<"\n";

    return 0;
}
