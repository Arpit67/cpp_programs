#include<iostream>
using namespace std;


int main()
{
    cout<<" Here you can get 2 to 10 table" <<endl;
    cout<<" Enter the number whoose table you want to get :"  ;
  int x;
   // int x= value between 2 -5
    cin>>x;



if (x==2)
{


cout<<" Here the table of 2 => " <<endl;


        for(int b=1; b<=10; b++ )
         {


            cout<< "2 X "<<b<<"=";
            cout<<2*b <<endl ;
            }
   }

    else if (x==3)
{
cout<<" Here the table of 3 => " <<endl;
     for(int b=1 ;b<=10;b++)
    {
            cout<< "3 X "<<b<<"=";
            cout<<3*b <<endl;
    }
}


     else if(x==4)
{
    cout<<" Here the table of 4 => " <<endl;
    for(int b=1;b<=10;b++)
    {
            cout<< "4 X "<<b<<"=";
            cout<<4*b<<endl;
    }

}

if(x==5)
{
   cout<<" Here the table of 5 => " <<endl;
   for(int b=1;b<=10;b++)

    {
            cout<< "5 X "<<b<<"=";
            cout<<5*b<<endl;
    }
}

if(x==6)
{
   cout<<" Here the table of 6 => " <<endl;
   for(int b=1;b<=10;b++)

    {
            cout<< "6 X "<<b<<"=";
            cout<<6*b<<endl;
    }
}


if(x==7)
{
   cout<<" Here the table of 7 => " <<endl;
   for(int b=1;b<=10;b++)

    {
            cout<< "7 X "<<b<<"=";
            cout<<7*b<<endl;
    }
}


if(x==8)
{
   cout<<" Here the table of 8 => " <<endl;
   for(int b=1;b<=10;b++)

    {
            cout<< "8 X "<<b<<"=";
            cout<<8*b<<endl;
    }
}


if(x==9)
{
   cout<<" Here the table of 9 => " <<endl;
   for(int b=1;b<=10;b++)

    {
            cout<< "9 X "<<b<<"=";
            cout<<9*b<<endl;
    }
}



if(x==10)
{
   cout<<" Here the table of 10 => " <<endl;
   for(int b=1;b<=10;b++)

    {
            cout<< "10 X "<<b<<"=";
            cout<<10*b<<endl;
    }
}







if ((x>10)||(x<2))
{
   cout<<"Please enter number between 2 to 10 only."<<endl;



}



return 0;
}

