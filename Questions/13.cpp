#include <iostream>
using namespace std;

struct Book
{
    int bookid;
    string title;
    double price;
};

void accept(struct Book *book, int id, string title, double price)
{
    book->title = title;
    book->bookid = id;
    book->price = price;
}
void display(struct Book *book)
{
    cout << "Book id: " << book->bookid << endl;
    cout << "Title: " << book->title << endl;
    cout << "Price: " << book->price << endl;
}

int main()
{
    cout << "Enter number of records you want to accept" << endl;
    int n;
    cin >> n;
    struct Book book[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter details for record "<<i+1<<endl;
        int id;
        cout << "Enter book id:"<<endl;
        cin >> id;
        string name;
        cin.ignore();
        cout << "Enter book name: " << endl;
        getline(cin, name);
        cout << "Enter book price: " << endl;
        double price;
        cin >> price;
        accept(&book[i], id, name, price);
        cout<<"\n";
    }
    cout << "Do you want to display the records?" << endl;
    char options;
    cin >> options;
    if (options == 'Y' || options == 'y')
    {
        switch (options)
        {
        case 'Y':
            for (int i = 0; i < n; i++)
            {
                cout<<"Details for record "<<i+1<<" is"<<endl;
                display(&book[i]);
                cout<<"\n";
            }
            break;
        case 'y':
            for (int i = 0; i < n; i++)
            {
                cout<<"Details for record "<<i+1<<" is"<<endl;
                display(&book[i]);
                cout<<"\n";
            }
            break;
        case 'n':
            exit(0);
        case 'N':
            exit(0);
        default:
               break;
        }
    }
    return 0;
}