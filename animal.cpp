#include <iostream>
using namespace std;
class Animalia{
public:
void anim(){
cout<<"it is all animal"<<endl;
}
};
class Habitat:public Animalia{
public:
void habit(){
cout<<"it is wild or domestic"<<endl;
}
};
class Feed:public Animalia{
public:
void eat(){
cout<<"it is herbivores,carnivores and omnivores"<<endl;
}
};
class Reproduction:public Animalia{
public:
void reproductive(){
cout<<"it is sexual or asexual"<<endl; 
}
};
class Movement:public Animalia{
public:
void mov(){
cout<<"every can move"<<endl;
}
};
class Growth:public Animalia{
public:
void grown(){
cout<<"every can grow up"<<endl;
}
};
int main(){
Animalia an;
an.anim();
Habitat hab;
hab.habit();
Feed fee;
fee.eat();
Reproduction rep;
rep.reproductive();
Movement move;
move.mov();
Growth gro;
gro.grown();
return 0;
}
