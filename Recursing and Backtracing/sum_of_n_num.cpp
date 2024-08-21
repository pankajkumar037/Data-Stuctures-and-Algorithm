#include<iostream>
using namespace std;

/*//                                  paramiterised method
void name(int i,int sum){
   if(i==0) {
    cout<<sum;
   }
   name(i-1,sum+i);

}
int main(){
    name(4,0);
}
*/

//                                     functional method

//    isme pas ek number hai jo pas hoga bas usi se pura sum return ho ke aa jayega
int name(int n){
  if(n==0) return 0;
  return n+name(n-1);
  

}
int main(){
  cout<<  name(4);
}