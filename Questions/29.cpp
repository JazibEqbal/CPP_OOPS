#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex();
    Complex(int, int);
    int getReal();
    int getImg();
    void setReal(int);
    void setImg(int);
    void display();
};
Complex::Complex()
{
    this->real = 0;
    this->img = 0;
}
Complex::Complex(int r, int i)
{
    this->real = r;
    this->img = i;
}
int Complex::getImg()
{
    return this->img;
}
int Complex::getReal()
{
    return this->real;
}
void Complex::setReal(int r)
{
    this->real = r;
}
void Complex::setImg(int i)
{
    this->img = i;
}
void Complex::display()
{
    char ch = (img < 0 ? '-' : '+');
    cout << "Complex Number is: " << real << ch << abs(img) << "i" << endl;
}
template <typename T>
class Stack
{
    int top;
    int size;
    T arr[250];

public:
    Stack(int = 5);
    void push(T);
    T pop();
    bool isfull();
    bool isempty();
};
template <typename T>
bool Stack<T>::isfull()
{
    return (top == size - 1);
}
template <typename T>
Stack<T>::Stack(int s)
{
    this->size = s;
    this->top = -1;
}
template <typename T>
bool Stack<T>::isempty()
{
    return top == -1;
}
template <typename T>
void Stack<T>::push(T key)
{
    if (isfull())
    {
        throw "Stack is Overflow!!";
    }
    arr[top++] = key;
}

template <typename T>
T Stack<T>::pop()
{
    if (isempty())
    {
        throw "Stack is Undeflow!!";
    }
    return arr[top--];
}
int main()
{
    Stack<int> s;
    cout << "Is it empty? " << s.isempty() << endl;
    s.push(1000);
    s.push(200);
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    Stack<Complex> s2;
    s2.push(Complex(100, 20));
    s2.push(Complex(15, -20));
    s2.pop().display();
    s2.pop().display();
    return 0;
}