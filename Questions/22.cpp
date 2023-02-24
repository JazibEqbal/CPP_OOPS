#include<iostream>
using namespace std;

class Matrix{
    int row,col;
    int **arr;
    public:
        Matrix();
        Matrix(int,int);
        Matrix(Matrix&);
        ~Matrix();
        void operator+(Matrix&);
        void operator!();
        friend ostream & operator << (ostream &, const Matrix &);
        friend istream & operator >> (istream &,Matrix &);
        void accept();
};
Matrix::Matrix(){
    row=3;col=3;
    arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
}
Matrix::Matrix(int r,int c){
    row=r;col=c;
    arr=new int*[r];
    for(int i=0;i<r;i++){
        arr[i]=new int[col];
        for(int j=0;j<c;j++){
            arr[i][j]=0;
        }
    }
}
Matrix::Matrix(Matrix &m){
    row=m.row;col=m.col;
    *arr=new int[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
        for(int j=0;j<col;j++){
            arr[i][j]=m.arr[i][j];
        }
    }
}
void Matrix::operator+(Matrix &ob){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=arr[i][j]+ob.arr[i][j];
        }
    }
}
void Matrix::operator!(){
    int temp[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            temp[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=temp[i][j];
        }
    }
}
istream& operator>>(istream &cin,Matrix &c){
    for(int i=0;i<c.row;i++){
        for(int j=0;j<c.col;j++){
            cin>>c.arr[i][j];
        }
    }
    return cin;
}
ostream & operator << (ostream &cout, const Matrix &c){
    for(int i=0;i<c.row;i++){
        for(int j=0;j<c.col;j++){
            cout<<c.arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    return cout;
}
void Matrix::accept(){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
}
Matrix::~Matrix(){
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
}
int main(){
    Matrix m1(3,3),m2(3,3);
    m1.accept();
    m2.accept();
    m2+m1;
    cout<<"Sum of two matrix is: "<<endl;
    cout<<m2;
    !m1;
    cout<<"Transpose of matrix is: "<<endl;
    cout<<m1;
    return 0;
}