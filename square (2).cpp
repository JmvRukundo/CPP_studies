#include <iostream>
using namespace std;
class Shape{
public:
void variable(){
int length,width,side;
cout<<"enter length,width,side"<<endl;
cin>>length>>width>>side;
}
};
class Square:public Shape{
public:
void data(){
int area,side;
area=side*side;
cout<<area<<endl;
}
};
class Rectangle:public Shape{
public:
void value(){
int are,length,width;
are=length*width;
cout<<are<<endl;
}
};
int main(){
Shape dot;
dot.variable();
Square sq;
sq.data();
Rectangle rect;
rect.value();
	return 0;
}
