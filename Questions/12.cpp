#include<iostream>
using namespace std;

struct Book{
    int bookid;
    string title;
    double price;
};

void accept(struct Book* book,int id,string title,double price){
        book->bookid = id;
        book->title = title;
        book->price = price;
};
void display(struct Book* book){
    cout<<"Book id: "<<book->bookid<<endl;
    cout<<"Title: "<<book->title<<endl;
    cout<<"Price: "<<book->price<<endl;
}

int main(){
    struct Book book;
    int id;
    cout<<"Enter book id: "<<endl;
    cin>>id;
    string str;
    cin.ignore();
    cout<<"Enter book name: "<<endl;
    getline(cin,str);
    cout<<"Enter book price: "<<endl;
    double price;
    cin>>price;
    accept(&book,id,str,price);
    cout<<"Details of book is:"<<endl;
    display(&book);
    return 0;
}