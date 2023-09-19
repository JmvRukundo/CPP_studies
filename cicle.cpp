#include <iostream>
using namespace std;
int main() {
float width;
float *radius,area,perimeter;
cout<<"enter width"<<endl;
cin>>width;
radius=&width;
area=3.14*(*radius)*(*radius);
perimeter=2*3.14*(*radius);
cout<<area<<endl;
cout<<perimeter<<endl;
	return 0;
}
