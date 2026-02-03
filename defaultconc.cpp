#include<iostream>
using namespace std ;
class student { 
int roll ;
public :
student() {
roll = 0 ;  // default construtor
}
void display(){
  cout<<"roll = " << roll << endl ;
}
};
int main(){
  student s1 ;
  s1.display ();
  return 0 ;
}

