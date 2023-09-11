#include <iostream>

using namespace std;
//struct is a public

struct student{
string name;
int gradelevel;

       student(string aName, int aGradelevel){
       cout << "Hello" << endl;
       }

};

// class is a private
class human{
public:

string name;
int age;

       human(string aName, int aAge){
       cout << "Hi";
       }

};

int main()
{

    student s1("Irvin",13);


    human s2("Darell",13);

    return 0;
}
