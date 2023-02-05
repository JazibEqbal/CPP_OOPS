#include<iostream>
using namespace std;

class Array{
    int size;
    int *arr;
public:
    Array(){
        size = 5;
        arr= new int[size];
        for(int i=0; i<size;i++){
            arr[i] =0;
        }
    }
    Array(int size){
        this->size=size;
        arr = new int[size];
        for(int i=0; i<size;i++){
            arr[i] =0;
        }
    }
    //Copy constructor
    Array(Array& x){
        size=x.size;
        arr=x.arr;
    }
    ~Array(){
        delete[] arr;
    }
};

int main(){
    int size;
    cin>>size;
    Array a(size);
    Array b(a);
    return 0;
}