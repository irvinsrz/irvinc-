#include <iostream>

using namespace std;
class Tshirt{
private:
    string Size;

public:
    string Brand;
    string Color;


  Tshirt(string aBrand, string aColor, string aSize){

    Brand = aBrand;
    Color = aColor;
    setSize(aSize);
  cout << "You Created a Shirt" << endl;

  }

  //Getter
  string getSize(){
   return Size;

  }
  //Setter
  void setSize(string aSize){
  if (aSize == "S" || aSize == "M" || aSize == "L"){
  Size = aSize;
    }else Size = "Unknown Size";

   }

  };

int main()
{
    Tshirt shirt1("Oxgn","Black","L");
    Tshirt shirt2("Penshoppe","White","M");

    cout << shirt1.getSize();



    return 0;
}
