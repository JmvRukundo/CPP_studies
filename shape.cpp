#include <iostream>
using namespace std;
class Shape{
public:
int width=5;
int length=10;
};
class Triangle:public Shape{
public:
void data(){
int area;
area=(width*length)/2;
cout<<area<<endl;
}
};
class Rectangle:public Shape{
public:
void product (){
int rect;
rect=width*length;
cout<<rect<<endl;
}
};
int main() {
Triangle tri;
tri.data();
Rectangle tan;
tan.product();
	return 0;
}
