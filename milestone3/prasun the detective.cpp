#include <iostream>

#include <string>

#include <stack>

#include <unordered_map>

#include <algorithm>

using namespace std;


 

int main()

{

string s;

getline(cin,s);

//sort both the strings

sort(s.begin(),s.end());

string prasun;

getline(cin,prasun);

sort(prasun.begin(),prasun.end());

 

 

s.erase(remove(s.begin(), s.end(), ' '), s.end());

prasun.erase(remove(prasun.begin(), prasun.end(), ' '), prasun.end());

 

int i;

string temp1= "";

for(i=0;i<s.size();i++)

{

if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))

{

temp1=temp1+s[i];

}

}

s=temp1;

string temp2="";

 

for(int j=0;j<prasun.size();j++)

{

if((prasun[j]>='a' && prasun[j]<='z') || (prasun[j]>='A' && prasun[j]<='Z'))

{

temp2=temp2+prasun[j];

}

}

prasun=temp2;
if(s==prasun)

{

cout<<"YES"<<endl;

}

else{

cout<<"NO"<<endl;

}
return 0;
}



