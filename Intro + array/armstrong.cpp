#include <iostream>
#define free_from_GS 1
#define In_formals 1
using namespace std;

int main(){
    if(free_from_GS)
        cout<< ((In_formals) ? "To Reading room" : "To 2C 186");
}
//#include<iostream>
//#include<math.h>
//using namespace std;
//int main(void) {
//    char ch;    long int n1,n2;
//    while(true){
//        cin>>ch;
//        switch(ch){
//            case '*' :  cin>>n1>>n2;
//                        cout<<n1*n2<<"\n";
//                        break;
//            case '/' :  cin>>n1>>n2;
//                        cout<<n1/n2<<"\n";
//                        break;
//            case '+' :  cin>>n1>>n2;
//                        cout<<n1+n2<<"\n";
//                        break;
//            case '-' :  cin>>n1>>n2;
//                        cout<<n1-n2<<"\n";
//                        break;
//            case '%' :  cin>>n1>>n2;
//                        cout<<n1%n2<<"\n";
//                        break;
//            case 'x' :  exit(0);
//                        break;
//            case 'X' :  exit(0);
//                        break;
//            default  :  cout<<"Invalid operation. Try again.\n";
//        }
//    }
//	return 0;
//}
