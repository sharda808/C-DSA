#include<iostream>
#include<string>
using namespace std;
class Car {
  string name;
string color;
public:
Car (){
  cout<<"constructor without params\n";
}
Car (string name,string color){ // paramater
  cout<<"constructor with params\n";
this->name = name;
this->color = color;
}
void start(){
  cout<<"car has being stated..\n";
}
void stop(){
  cout<<"car has stop:\n";
}
string GetName (){
  return name;
}
};
int main(){
  Car C0; // non-parameter
  Car c1("maruti 800","red"); // Argument // parameter THIS points c1  and anme points value 
cout<<"car name is:"<<c1.GetName()<<endl;
Car c2 ("fortuner","white");
  return 0;
}