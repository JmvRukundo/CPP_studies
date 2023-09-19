#include <iostream>
using namespace std;
int main(){
int rows=5,i,j;
for(i=0;i<=rows;i++){
for(j=0;j<=i;j++){
cout<<'*';
}
cout<<endl;
}
for(i=rows-1;i>=0;i--){
for(j=0;j<=i;j++){
cout<<'*';
}
cout<<endl;
}
return 0;
}
