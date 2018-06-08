#include <iostream>
#include<string.h>
using namespace std;
int main() {
int count=0,x=0; 
string S;
cin>>S;
count=S.length();
for(int i=0,j=(count-1);i<=(count-1)&&j>=0;i++,--j)
    if(S[i]==S[j])
     x++;
if(x==count)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
return 0;
}
