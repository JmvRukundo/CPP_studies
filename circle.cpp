#include <iostream>
using namespace std;
class Circle{
public:
int radius;
public:
void input(){
cout<<"enter radius"<<endl;
cin>>radius;
}
void output(){
float area,perimeter;
area=3.14*radius*radius;
perimeter=2*3.14*radius;
cout<<area<<endl;
cout<<perimeter<<endl;
}
};
int main() {
Circle rem;
rem.input();
rem.output();
	return 0;
}
