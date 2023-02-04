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
    accept(&book,234,"India After Gandhi",499.9);
    display(&book);
    return 0;
}