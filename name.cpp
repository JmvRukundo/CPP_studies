#include <iostream>
using namespace std;
class Name{
public:
};
class First:public Name{
public:
void one(){
cout<<"shema"<<endl;
}
};
class Last:public Name{
public:
void second(){
cout<<"lucien"<<endl;
}
};
class Full:public Name{
public:
void third(){
cout<<"shema lucien"<<endl;
}
};
int main (){
First fir;
fir.one();
Last las;
las.second();
Full ful;
ful.third();
	return 0;
}
