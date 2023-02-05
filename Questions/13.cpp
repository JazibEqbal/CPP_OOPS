#include<iostream>
using namespace std;

struct Book{
    int bookid;
    string title;
    double price;
};

void accept(struct Book *book,int id,string title,double price){
    book->title = title;
    book->bookid = id;
    book->price=price;
} 
void display(struct Book *book){
    cout<<"Book id: "<<book->bookid<<endl;
    cout<<"Title: "<<book->title<<endl;
    cout<<"Price: "<<book->price<<endl;
}

int main(){
    struct Book book[5];
    accept(&book[0],1,"India After Gandhi",499.9);
    accept(&book[1],2,"India ",199.9);
    accept(&book[2],3,"India After Gandhi",499.9);
    accept(&book[3],4,"India After Gandhi",499.9);
    accept(&book[4],5,"India After Gandhi",499.9);
    for(int i=0;i<5;i++){
        display(&book[i]);
    }
    return 0;
}