#include <iostream>

using namespace std;
class student{

      public:
      string name;

      //setter
      void setName (string aName){name = aName;}

      //getter
      string getName () {return name;}

      //object Functions
      void introduceSelf(){
        cout << "Hello My Name is " << name << endl;
    }
    void study(){
        cout << name << " Studied" << endl;
    }


};
class LazyStudent : public student{


public:
    void sleepinClass(){
    cout << name << " Slept in class" << endl;
    }
    void study(){
    cout << name << " Is Lazy to Study";
    }
};
int main()
{
    student student1;
    student1.setName("Timmy");
    student1.introduceSelf();
    student1.study();

    LazyStudent student2;
    student2.setName ("Irvin");
    student2.introduceSelf();
    student2.sleepinClass();
    student2.study();


    return 0;
}
