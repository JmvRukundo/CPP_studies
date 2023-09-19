#include <iostream>
using namespace std;
int setw(int radius){
float area;
area=4*3.14*radius*radius;
return area;
}
int setprecision(int radius){
float volume;
volume=4/3*3.14*radius*radius*radius;
return volume;
}
int main(){
float ar=setw(5);
cout<<ar<<endl;
float vol=setprecision(5);
cout<<vol<<endl;
	return 0;
}
