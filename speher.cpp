#include <iostream>
using namespace std;
class Sphere{
public:
int data(){
int radius;
cout<<"enter radius"<<endl;
cin>>radius;
}
};
class Area:public Sphere{
public:
int setw(){
int radius;
float are;
are=4*3.14*radius*radius;
cout<<are<<endl;
}
};
class Volume:public Sphere{
public:
int setprecision(){
int radius;
float vol;
vol=4/3*3.14*radius*radius*radius;
cout<<vol<<endl;
}
};
int main() {
Sphere sp;
sp.data();
Area re;
re.setw();
Volume vm;
vm.setprecision();
	return 0;
}
