#include<iostream>
using namespace std;
int main()
{
    int a = 34;
    cout<<"the value of a is "<<a<<endl;
    a=67;
    cout<<"the value of a now is "<<a<<endl;
    // ouper hamne a ki phele kuch or thi or ab kuch or hai.Meaning hamne a ki value change kr di 
    // to stop that from happening we use keyword (const)
    const int b = 4;
    cout<<"the value of b is "<<b<<endl;// noe the value of b cannot be changed in the entire programm
    // if we try to change then the system will show error
     
    return 0;   

}