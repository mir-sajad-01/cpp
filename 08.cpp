#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   // int a = 34;
   // cout <<"The value of a was : "<<a;
   // a = 45;
   // cout <<"The value of a is : " <<a;
//    //constants in c++
   // const int a = 3;
   // cout <<"The value of a was : "<<a <<endl;
   //  a = 45 ; // YOu will get an error because a is a constant 
   // cout << "The value of a is : "<<a <<endl;

//    // Manipulators in c++
   int a = 3 , b = 78, c = 1233 , d = 9999999;
   cout << "The value of a without stew is :" <<a <<endl;
   cout << "The value of b without stew is :" <<b <<endl;
   cout << "The value of c without stew is :" <<c <<endl;

   cout << "The value of a is :" <<setw(7) <<a <<endl; 
   cout << "The value of b is :" <<setw(7) <<b <<endl;
   cout << "The value of c is :" << setw(7)<<c <<endl;
   cout << "The value of d is :"  <<d << endl;
   // Operator Precedence 
   // int a = 3 , b = 4;
   // //int c = ( a * 5 ) + b ;
   // int c = ((((a * 5 ) + b )-45) + 87);
   // cout <<c;
   return 0;
}

