#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,c,x1,x2,delta;
cout<<"enter a,b,c"<<endl;
cin>>a>>b>>c;
delta=b*b-4*a*c;
x1=-b+sqrt(delta)/2*a;
x2=-b-sqrt(delta)/2*a;
cout<<"x1 is"<<x1<<endl;
cout<<"x2 is"<<x2<<endl;
return 0;
}
