#include <bits/stdc++.h>
using namespace std;

//Method 1
set<int> st;
void brute(int a1[], int a2[])
{

    int n1 = 6;
    int n2 = 7;

    for (int i = 0; i < n1; i++)
    {
        st.insert(a1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(a2[i]);
    }
}

void display()
{
    for (auto it : st)
    {
        cout << it << endl;
    }
}

//Method 2 

void optimal(int a1[], int a2[]){
       
}


int main()
{
    int a1[] = {1, 1, 2, 3, 4, 5};
    int a2[] = {1, 2, 3, 3, 4, 5, 6};
    brute(a1, a2);
    display();
    return 0;
}