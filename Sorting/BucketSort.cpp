#include<iostream>
#include<vector>
using namespace std;

class Student{
    public:
        int marks;
        string name;
    Student() : marks(), name() {
                cin>>marks;
                cin>>name;
              }
};

void bucketSort(Student arr[], int n){
    ///Assuming the maximum marks is 100:

    vector<Student> v[101];

    int marks;

    for(int i=0; i<n; i++){
        marks = arr[i].marks;
        v[marks].push_back(arr[i]);
    }

    for(int i=100; i>=0; i--){
        for(vector<Student>::iterator it = v[i].begin(); it != v[i].end(); it++){
            cout<<(*it).name<<" "<<(*it).marks<<"\n";
        }
    }
}

int32_t main(void){
    int n;  cin>>n;
    Student arr[n];
//    for(int i=0; i<n; i++){
//        cin>>arr[i].marks;
//        cin>>arr[i].name;
//    }
    bucketSort(arr, n);
    return 0;
}
