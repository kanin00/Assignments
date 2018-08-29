#include <iostream>
#include <conio.h>


using namespace std;
void primefunc(int number);
int main()
{
int x;

cout<<"Hello user!"<<endl;
getch();
cout<<"This is a simple program that determines whether a number is a prime number or not."<<endl;
getch();
cout<<"A prime number is any number is any number divisible by only itself and 1."<<endl;
getch();
cout<<"Please enter a number: ";
cin>>x;

while(true)
{


   while(cin.fail())
    {
        cin.clear();
        cin.ignore(1000,'\n');
        cout<<"You entered an invalid number"<<endl;
        getch();
        cout<<"=================================="<<endl;
        cout<<"Enter a new value: ";
        cin>>x;
    }
primefunc(x);
cout<<"Please enter a number:";
cin>>x;
}

return 0;
}


void primefunc(int number)
{
    int count=0;
    if(number==1)
    {
        cout<<"1 is not prime number."<<endl;
        cout<<"=================================="<<endl;
    }
else
    {

for(int i=2;i<10;i++)
    {
    if(number%i==0&&number!=i)
        {
            count=count+1;
        }

    }
if(count>=1)
    {
        cout<<number<<" is not a prime number.";


    }
    else
    {
        cout<<number<<" is a prime number.";
    }
    cout<<endl;
    cout<<"=================================="<<endl;

    }
}
