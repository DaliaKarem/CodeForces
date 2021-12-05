#include <iostream>
#include<cmath>
using namespace std;
 
int main()
{//m,n rectangle ,a flagstone, horizontal, vertical
    double m,n,a;
    cin>>m>>n>>a;
    long long hor,ver;
   hor=ceil(m/a);
    ver=ceil(n/a);
   cout<<hor*ver<<endl;
 
   // return 0;
}