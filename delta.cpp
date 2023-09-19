#include<iostream>
using namespace std;
class Discriminant{
public:
int a;
int b;
int c;
public:
void data(){
cout<<"enter a"<<endl;
cout<<"enter b"<<endl;
cout<<"enter c"<<endl;
cin>>a;
cin>>b;
cin>>c;
}
void values(){
int delta,x1,x2;
delta=b*b-4*a*c;
x1=-b+sqrt(delta)/2*a;
x2=-b-sqrt(delta)/2*a;
cout<<delta<<endl;
cout<<x1<<endl;
cout<<x2<<endl;
}
};
int main() {
Discriminant del;
del.data();
del.values();
	return 0;
}
