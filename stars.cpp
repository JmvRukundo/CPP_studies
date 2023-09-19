#include <iostream>
using namespace std;
int main(){
int i,j,rows=5;
for(i=rows-1;i>=0;i--){
for(j=1;j<=i;j++){
cout<<'*';
}
cout<<endl;
}
return 0;
}
