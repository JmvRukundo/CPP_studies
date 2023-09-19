#include<iostream>
#include<cmath>
using namespace std;
int main(){
int d=2,e=6,f=4;
int *a,*b,*c;
a=&d;
b=&e;
c=&f;
int x1,x2,delta;
delta=(*b)*(*b)-4*(*a)*(*c);
x1=-*b+sqrt(delta)/2*(*a);
x2=-*b-sqrt(delta)/2*(*a);
cout<<"x1 is"<<x1<<endl;
cout<<"x2 is"<<x2<<endl;
return 0;
}
