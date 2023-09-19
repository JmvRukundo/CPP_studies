#include <iostream>
using namespace std;
class Mother{
public:
void display(){
cout<<"hello"<<endl;
}
};
class Daughter:public Mother{
public:
void display(){
cout<< "hello brother"<<endl;
}
};
int main() {
Mother mot;
mot.display();
Daughter sort;
sort.display();
	return 0;
}
