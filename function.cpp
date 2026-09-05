#include<iostream>
using namespace std;
//function without parameters 
void greet(){
  cout<<"Hello from c++"<<endl;
}
//function with parameters
void displayNumber(int n){
  cout<< "Number:"<< n << endl;
}
//functio with return value 
int add ( int a, int b){
  return a+b;
}
//pass by refernce 
void changeValue( int&x){
  x=100;
}
//function overloading 
int multiply( int a, int b){
  return a*b;
}
int multiply( int a , int b, int c){
  return a*b*c;
}
int main(){
  // calling the without parameters 
  greet();
//calling the functions with the parameters 
displayNumber(10);
//calling function with the return value 
int result = add(10, 20);
cout<<"the result is:"<<"\n";
// Pass by reference
    int number = 50;
    changeValue(number);
    cout << "Changed value: " << number << endl;

    // Function overloading
    cout << "Multiplication: " << multiply(2, 3) << endl;
    cout << "Multiplication: " << multiply(2, 3, 4) << endl;

    return 0;
}

