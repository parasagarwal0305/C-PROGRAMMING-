#include<iostream>
using namespace std;
int c = 45;
int main()
{
int a ,b,c;
cout<<"enter the value of a and b"<<endl;
cin>>a;
cin>>b;
c=a+b;
cout<<" sum of a and b is "<<c<<endl;
cout<<"the value of globle c is "<<::c;/* here :: is called scope resolution operator,
*it is used to call globle value of c if local value i4s also given */


//////////////// part 2 of program starts /////////



float d = 34.5;
double e = 335.9;
3494.8; /* ny default c++ isse as a double variable treat krega
* agar me chahta hun ki ye double ki tarah nhi or float ki tarah use ho to mujhe is number ke aage f lgana hoga */
2342.9f;
cout<<"\nthe value of d is "<<d<<"\nthe value of e "<<e<<endl;



//************************** reference variable  *************************//
float x= 3422.09;
float & y = x;// yahan pe hamne x ko bas eak dusra naam de diya hai ki paras , chotu,badu ye sab eak he log hain vese he x ka dusra naam y de diya hai 
cout<<x<<endl;
cout<<y<<endl;


//******************Typecasting ********************//
int p = 69;
float m=35.98;
cout<<"the value of p is " <<(float)p<<endl;
cout<<"the value of p is " << float(p)<<endl;
cout<<"the value of m is "<<(int)m<<endl;// typecasting ka matlab hua ki kisi variable ka type change krna jaise ki float type wale ko int wala bana diya 
cout<<"the value of m is "<<int(m)<<endl;
int l = int(m);// yahan per reference or typecasting bono saath ho rhi hai 
cout<<"the value of expression is "<< p + m<<endl;
cout<<"the value of expression is "<< p + int(m)<<endl;
cout<<"the value of expression is "<< p + (int)m<<endl;



return 0;

}