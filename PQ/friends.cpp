#include<iostream>
using namespace std;

class Sample{
    int x;
    int y;
    public:
       Sample():x(0),y(0){}
       Sample(int p,int q): x(p), y(q){}
       friend void setx(Sample *,int x);
       friend void sety(Sample *s,int y);
       friend void printxy(Sample &);
};
   void setx(Sample *s,int p){
    s->x=p;
   }
   void sety(Sample *s,int q){
    s->y=q;
   }
   void printxy(Sample& ref){
    cout<<ref.x<<" "<<ref.y<<endl;
   }
int main(){
    Sample s(10,20);
    setx(&s,15);
    sety(&s,20);
    printxy(s);
    return 0;
}
