#include <iostream>
using namespace std;

int main(){
  int a,b;
  char op;
  while(cin>>a>>op>>b){
    if(op=='?') break;
    if(op=='+') cout<<a+b<<endl;
    if(op=='-') cout<<a-b<<endl;
    if(op=='*') cout<<a*b<<endl;
    if(op=='/') cout<<a/b<<endl;
  }
  return 0;
}
