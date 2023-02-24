#include<iostream>
#include <algorithm>
using namespace std;

class Array
{
    int size;
    int *arr;
    public:
        Array();
        Array(int);
        Array(Array&);
        ~Array();
        friend ostream & operator << (ostream &, const Array &);
        friend istream & operator >> (istream &, const Array &);
        void display();
        void accept();
        int& operator[](int);
        void operator!();
};
Array::Array()
{
    size=5;
    arr=new int[5];
    for(int i=0;i<5;i++){
        arr[i]=0;
    }
}
Array::Array(int s)
{
    size=s;
    arr=new int[size];
    for(int i=0;i<size;i++){
        arr[i]=0;
    }
}
Array::Array(Array &ob)
{
    size=ob.size;
    arr=new int[size];
    for(int i=0;i<size;i++){
        arr[i]=ob.arr[i];
    }
}
void Array::accept(){
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void Array::display()
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int& Array::operator[](int index){
    return arr[index];
}
ostream & operator << (ostream &cout, const Array &arr){
    cout<<"Array Elemnets are: "<<endl;
    for(int i=0;i<arr.size;i++){
        cout<<arr.arr[i]<<"   ";
    }
    cout<<endl;
    return cout;
}
void Array::operator!(){
    reverse(arr,arr+size);
}
istream & operator >> (istream &cin, const Array &a){
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<a.size;i++){
        cin>>a.arr[i];
    }
    return cin;
}
Array::~Array()
{
    delete []arr;
}
int main(){
    int n;
    cout<<"Enter size ";
    cin>>n;
    Array myarr(n);
    myarr.accept();
    myarr[n-1]=5;
    cout<<"Array Elemnets: "<<endl;
    myarr.display();
    !myarr;
    cout<<"Array Elemnets after reversing: "<<endl;
    myarr.display();
    return 0;
}