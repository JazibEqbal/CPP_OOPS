#include <iostream>
using namespace std;

struct Book
{
    int bookId;
    string title;
    double price;
};

void accept(struct Book *book, int id, string title, double price)
{
    book->bookId = id;
    book->title = title;
    book->price = price;
}

void display(struct Book *book)
{
    cout << "Book id: " << book->bookId << endl;
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
        int id;
        cout << "Enter book id: " << endl;
        cin >> id;
        string str;
        cin.ignore();
        cout << "Enter book title: " << endl;
        getline(cin, str);
        double price;
        cout << "Enter book price: " << endl;
        cin >> price;
        accept(&book[i], id, str, price);
    }

    cout << "Do you want to display the records?" << endl;
    char options;
    cin >> options;
    if (options == 'y' || options == 'Y')
    {
        switch (options)
        {
        case 'Y':
            for (int i = 0; i < n; i++)
            {
                cout << "Details for record " << i << " is" << endl;
                display(&book[i]);
                cout << "\n";
            }
            break;
        case 'y':
            for (int i = 0; i < n; i++)
            {
                cout << "Details for record " << i << " is" << endl;
                display(&book[i]);
                cout << "\n";
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