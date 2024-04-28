#include<iostream>
using namespace std;

class counter {
    private :
    int count ;
    public :
    counter (): count (0){}
    void set(){
        count++;
    }
    int get(){
        return count;
    }

};
int main()
{
    counter c1,c2;
    cout<< c1.get()<<c2.get() << endl;;
    c1.set();
    c1.set();
    c2.set();
    cout<< c1.get()<<c2.get();
    return 0;
}