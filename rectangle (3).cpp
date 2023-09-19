#include <iostream>
using namespace std;
class Rectangle{
public:
int width=5;
int length=7;

};
class Area:public Rectangle{
public:
void are(){
int product;
product=width*length;
cout<<product<<endl;
}
};
class Perimeter:public Rectangle{
public:
void sum(){
int perimet;
perimet=2*(width+length);
cout<<perimet<<endl;
}
};
int main(){
Area ar;
ar.are();
Perimeter per;
per.sum();
	return 0;
}
