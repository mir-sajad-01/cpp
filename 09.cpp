#include <iostream>
using namespace std;

int main()
{
    int age;
    // cout << "Tell me your age" << endl;
    // cin >> age;

    // // selection control structure :if else ladder
    // if ((age < 18) && (age > 0))
    // {
    //     cout << "you can not come to my part " << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "you are a kid and you will get a kid pass to the partys " << endl;
    // }
    // else
    // {
    //     cout << "you can come to the party " << endl;
    // }

    // selection control structure : switch case statements
    switch (age)
    {
        case 18:
        cout << "you are 18" << endl;
        break;
        case 22:
        cout << "you are 22" << endl;
        break;
        case 2:
        cout << "you are 2" << endl;
        break;

        default:
        cout << "no special cases" << endl;
        break;
    }

    cout << "Done with switch case";
    return 0;
}