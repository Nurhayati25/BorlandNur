#include <stdio.h>
#include <conio.h>                                    
#include <iostream.h>

main()
{
	cout<<"OPRATOR RELASI C++\n";
   float a,b,c,d,e,f,x,y;


   cout<<"Masukan Nilai X = ";
   cin>>x;
   cout<<"Masukan Nilai Y = ";
   cin>>y;

   a= x < y;
   b= x > y;
   c= x != y;
   d= x <= y;
   e= x >= y;
   f= x == y;

   cout<<endl;
   cout<<"Apakah "<<x<<" < "<<y<<" ? "<<a<<endl;
   cout<<"Apakah "<<x<<" > "<<y<<" ? "<<b<<endl;
   cout<<"Apakah "<<x<<" != "<<y<<" ? "<<c<<endl;
   cout<<"Apakah "<<x<<" <= "<<y<<" ? "<<d<<endl;
   cout<<"Apakah "<<x<<" >= "<<y<<" ? "<<e<<endl;
   cout<<"Apakah "<<x<<" == "<<y<<" ? "<<f<<endl;
getch();
}


