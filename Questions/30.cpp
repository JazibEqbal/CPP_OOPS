#include <iostream>
#include <cstring>
using namespace std;

class Overflow
{
    int line;
    char file[50], fun[20];

public:
    Overflow();
    Overflow(int, const char *, const char *);
    void show();
};
Overflow::Overflow() {}
Overflow::Overflow(int l, const char *fl, const char *fn)
{
    line = l;
    strcpy(file, fl);
    strcpy(fun, fn);
}

void Overflow::show()
{
    cout << "Stack is overflow at line " << line << " function " << fun << " file " << file << endl;
}

class Underflow
{
    int line;
    char file[50], fun[20];

public:
    Underflow();
    Underflow(int, const char *, const char *);
    void show();
};

Underflow::Underflow() {}
Underflow::Underflow(int l, const char *fl, const char *fn)
{
    line = l;
    strcpy(file, fl);
    strcpy(fun, fn);
}

void Underflow::show()
{
    cout << "Stack is underflow at line " << line << " function " << fun << " file " << file << endl;
}

template <typename T>
class Stack
{
    int top, size;
    T arr[100];

public:
    Stack(int = 5);
    void push(T);
    T pop();
    bool isfull();
    bool isempty();
    void display();
};

template <typename T>
Stack<T>::Stack(int s)
{
    size = s;
    top = -1;
}

template <typename T>
bool Stack<T>::isfull()
{
    return (top == size - 1);
}

template <typename T>
bool Stack<T>::isempty()
{
    return top == -1;
}

template <typename T>
void Stack<T>::push(T val)
{
    if (isfull())
    {
        throw Overflow(__LINE__, __FILE__, __FUNCTION__);
    }
    arr[++top] = val;
}

template <typename T>
T Stack<T>::pop()
{
    if (isempty())
    {
        throw Underflow(__LINE__, __FILE__, __FUNCTION__);
    }
    return arr[top--];
}

template <typename T>
void Stack<T>::display()
{
    if (isempty())
    {
        throw Underflow(__LINE__, __FILE__, __FUNCTION__);
    }

    cout << "Stack elements: " << endl;
    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    Stack<int> s(size);
    while (size)
    {
        int choice, num;
        cout << "Choices are:\n"
             << "1.Push\n2.Pop\n3.Display\n4.Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter element you want to push:";
            cin >> num;
            try
            {
                s.push(num);
            }
            catch (Overflow ob)
            {
                ob.show();
            }
            break;
        case 2:
            try
            {
                num = s.pop();
                cout << "Elemnet poped is: " << num << endl;
            }
            catch (Underflow ob)
            {
                ob.show();
            }
            break;

        case 3:
            try
            {
                s.display();
            }
            catch (Underflow ob)
            {
                ob.show();
            }
            break;

        case 4:
            exit(0);

        default:
            cout << "Invalid option selection.Please try again!" << endl;
            break;
        }
    }

    return 0;
}