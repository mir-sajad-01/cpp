#include<iostream>
using namespace std;

class Base{
    protected :
        int as; 
    private:
        int b;

};
/* 
  For a protected member :
                        public derivation     private derivation     protected derivation
  1. Private members       Not inherited         not inherited          not inherited 
  2. protected memberes    protected               private                 protected  
  3. public members        public                  private                 protected
*/

class Derived: protected Base{
   
};

int main(){
    Base a;
    Derived b;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}

