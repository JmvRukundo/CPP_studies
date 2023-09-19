#include <iostream>
using namespace std;
class Display{
public:
Display(int a){
cout<<a<<endl;
}
Display(int a,int b){
int result=a+b;
cout<<result<<endl;
}
};
int main() {
Display(10);
Display(5,45);
	return 0;
}
