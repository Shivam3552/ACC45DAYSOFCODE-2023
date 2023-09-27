#include<iostream>
using namespace std;
int main(){
   int i = 0, t;
  cin>> t;
  while (i < t)
    {
      int A, B, C, D, E;
      cin >> A >> B >> C >> D >> E;
      if ((A + B <=D&&C<=E)||(A+C<=D&&B<=E)||(B+C<=D&&A<=E)){
          cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }

      i++;
    }
    return 0;
}
