
#include <iostream>
using namespace std;
class pukar{
    int a;
    public:
  pukar(){
      cout<<"Enter the value of a "<<endl;
      cin>>a;
      
  }  
  ~pukar(){
      cout<<"Memory released"<<endl;
  }
};
int main() {
   pukar p;

    return 0;
}