#include <iostream>
using namespace std;
class Rectangle{
public:
Rectangle(int width,int length){
int area=width*length;
cout<<area<<endl;
}
};
int main() {
Rectangle rect(10,5);
	return 0;
}
