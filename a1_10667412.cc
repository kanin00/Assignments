#include <iostream>

using namespace std;

int main()
{
int count=0;
int number;
  cout<<"Hello user!";
  cin.get();
  cout<<"This is a simple program that determines whether a number is a prime number or not.";
  cin.get();
  cout<<"A prime number is any number is any number divisible by only itself and 1";
  cin.get();
  cout<<"Please enter a number: ";

    cin>>number;
    for(int i=2;i<10;i++)
    {
        if(number%i==0&&number!=i)
        {
            count=count+1;
        }

    }
    if(count>=1)
    {
        cout<<"This number is not a prime number.";

    }
    else
    {
        cout<<"This number is a prime number.";
    }
return 0;
}

