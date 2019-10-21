#include "dkalgmain.h"
using namespace std;



int main()
{
  while(1){
  int userInp;
  cout<<"Which type of game are you wanting?"<<endl;
  cout<<"1. Full Game"<<endl;
  cout<<"2. Show Down"<<endl;
  cout<<"9. Exit"<<endl;

  cin>>userInp;
  switch(userInp)
    {
      case 1:
        fullGame();
        break;
      case 2:
        showDown();
        break;
      case 9:
        cout<<"Goodbye"<<endl;
        return 0;
      default:
        cout<<"Not a valid choice, try again."<<endl;
    }
  }

  return 0;
}
