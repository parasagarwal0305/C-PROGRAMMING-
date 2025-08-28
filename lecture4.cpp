#include<iostream>
using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo<<"\n";
}
int main()
{
 int glo=8;// yahan per glo eak local variable hai phele ousko priority milegi.Local variable me jo value hai vo print hogi 
 glo=78;// yahan per local variable ki value me change aa rha hai 
int a=4,b=5;
float pi=3.14;
sum();// since glo don't have any value in local variable it will take and print the value from globle variable 
cout<<"the value of a is "<<a<<"\n the value of b is "<<b<<".\nthe value of pi is "<<pi<<"\n"; 
cout<<glo<<"\n";// will print the value that is given in local variable ,not the one given in globle variable 
bool x= true;// yahan per bool ka matlab hai boolean and it will return 0 or 1 value 1 is for true and 0 is for false 
cout<<x;    // will get output 1 
return 0;
} 