/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
float area(float radius)
{
    cout<<"Area is :"<<((3.14)*radius*radius);
    return 0;
}
float area(float base,int height)
{
    cout<<"Area is :"<<((0.5)*base*height);
    return 0;
}
float area(float length,float breadth)
{
    cout<<"Area is :"<<(length*breadth);
    return 0;
}

int start();

int main()
{
    start();
}
int start()
{
    int choice,h;
    float r,l,b,b1;
    cout<<"Enter the shape of your choice : 1.Circle 2.Triangle 3.Rectangle \n";
    cin>>choice;
    if (choice==1)
    {
        cout<<"Enter the radius of the circle :\n";
        cin>>r;
        area(r);
    }
    else if(choice==2)
    {
        cout<<"Enter the base and height of thr triangle \n:";
        cin>>b1;
        cin>>h;
        area(b1,h);
    }
    else if(choice==3)
    {
        cout<<"Enter the length and breadth of the rectangle \n:";
        cin>>l;
        cin>>b;
        area(l,b);
    }
    else
    {
        cout<<"Please enter a valid choice \n";
        start();
    }
   
    return 0;
}