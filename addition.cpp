#include <iostream>
using namespace std;
class Addition{
public:
int a=5;
int b=15;
public:
void sum(){
int result;
result=a+b;
cout<<result<<endl;
}
};
int main() {
Addition add;
add.sum();
	return 0;
}
