#include <iostream>
using namespace std;
class Rectangle{
private:
int width;
int length;
public:
void set_values(){
cout<<"enter width,length"<<endl;
cin>>width>>length;
}
void area(){
int result;
result=width*length;
cout<<result<<endl;
}
};
int main(){
Rectangle rect;
rect.set_values();
rect.area();
	return 0;
}
