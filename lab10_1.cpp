#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

int main(){
srand(time(0));
int ran=rand()%9;
string x[]={"A","B+","B","C+","C","D+","D","F","W"};
std::cout<<"Press Enter 3 times to reveal your future.";
cin.get();cin.get();cin.get();
cout<<"You will get "<<x[ran]<<" in this 261102.";
return 0;
}