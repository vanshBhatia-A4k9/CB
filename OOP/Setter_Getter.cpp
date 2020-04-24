#include<iostream>
using namespace std;

class Car{
    private:
        int price;
        string name;
    public:
        ///Setters:
        void setPrice(int p){
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
    cout<<a.getName()<<"\n";
    return 0;
}
