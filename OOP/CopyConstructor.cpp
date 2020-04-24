#include<iostream>
using namespace std;

class Car{
    private:
        int price;
        string name;

    public:
        Car(){

        }
        ///Copy constructor
        Car(Car &x){
            price = x.price;
            name = x.name;
        }
        ///Setters:
        void setPrice(int p){
            if( p < 1000 )
                throw invalid_argument{"\nPrice cannot be less than 1000"};
            price = p;
        }
        void setName(string s){
            name = s;
        }
        ///Getters:
        int getPrice(){
            return price;
        }
        string getName(){
            return name;
        }
};

int32_t main(void){
    Car a;
    int price;  cin>>price;
    string name; cin>>name;

    a.setPrice(price);
    a.setName(name);

    cout<<a.getPrice()<<"\n";
    cout<<a.getName()<<"\n\n";

    Car b(a);

    cout<<b.getPrice()<<"\n";
    cout<<b.getName()<<"\n\n";

    Car c = b;

    cout<<c.getPrice()<<"\n";
    cout<<c.getName()<<"\n";

    return 0;
}
