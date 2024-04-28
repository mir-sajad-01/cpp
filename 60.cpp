#include<iostream>
#include<fstream>
// The useful classes for working files in c++ are:
// 1. fstreambase
// 2. ifstream ---> derived from fstreambase
// 3. ofstream ---> derived from fstreambase

// In order work with files in c++ , you will have to open it.
// primarily , there are 2 ways to open a file :
// 1. Using the constructor
// 2. using the member function open () of the class 

using namespace std;

int main(){
    string st = "Harry bhai";
    string st2;
    // // Opening files using constructor and writing it
    // ofstream out("sample60.txt"); // Write operation
    // out<<st;

    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // Read operation
    //in>>st2;
    getline(in, st2); 
    cout<<st2;

    return 0;
}

    