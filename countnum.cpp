#include <iostream>
#include <string>
using namespace std;
int main()
{
 int n,m,count=0;
 cin>>n;
 do
 {
     m=n/10;
     count++;
     n=m;
 }while(n!=0);
 cout<<count;
 return 0;
}
