#include<iostream>
using namespace std;
int main()
{
    float m1,m2,m3,m4,m5,marks;
    cout<<"Enter Marks 1: ";
    cin>>m1;
    cout<<"Enter Marks 2: ";
    cin>>m2;
    cout<<"Enter Marks 3: ";
    cin>>m3;
    cout<<"Enter Marks 4: ";
    cin>>m4;
    cout<<"Enter Marks 5: ";
    cin>>m5;
    marks=(m1+m2+m3+m4+m5)/5;
    if(marks>=90)
        {
            cout<<"Grade: O";
        }
    else if(marks>=80)
        {
            cout<<"Grade: A+";
        }
    else if(marks>=70)
        {
            cout<<"Grade: A";
        }
    else if(marks>=60)
        {
            cout<<"Grade: B+";
        }
    else if(marks>=50)
        {
            cout<<"Grade B";
        }
    else if(marks>=40)
        {
            cout<<"Grade: C";
        }
    else
        {
            cout<<"Grade: Fail";
        }
    return 0;
}