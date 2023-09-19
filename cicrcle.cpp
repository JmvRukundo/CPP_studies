#include <iostream>
using namespace std;
int main () {
int radius;
float area;
float volume;
cout<<"enter radius"<<endl;
cin>>radius;
area=4*3.14*radius*radius;
volume=4/3*3.14*radius*radius*radius;
cout<<"area is"<<area<<endl;
cout<<"volume is"<<volume<<endl;
return 0;
}
