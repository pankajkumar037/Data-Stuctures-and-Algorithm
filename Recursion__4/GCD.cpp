//find greatest common divisor of two number

#include<bits/stdc++.h>
using namespace std;


int gcd(int a,int b){
    // a < b always..
    if(a==0) return b;
    gcd(b%a,a);

}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
   cout<< gcd(n,m);
}


/*    ** iterative Method **
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    int gcd=1;
    for(int i=1;i<min(n,m);i++){
        if(n%i==0 && m%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
}
*/
