#include<iostream>
using namespace std;
int main()
{int sum;
cout<<"enter the sum "<<endl;
cin>>sum;
if (sum>100)
{cout<<"100's are  "<<sum/100<<endl;
  sum=sum%100;
  }
if (sum>50)
{cout<<"50's are  "<<sum/50<<endl;
sum=sum%50;
  }
if (sum>20)
{cout<<"20's are  "<<sum/20<<endl;

sum=sum%20;
  }
if (sum>10)
{cout<<"10's are  "<<sum/10<<endl;
sum=sum%10;
  }
if (sum>1)
{cout<<"1's are  "<<sum/1<<endl;
  }
}
