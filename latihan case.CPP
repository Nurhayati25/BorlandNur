#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
char kode,lagi;
atas:
clrscr();
cout<<"INPUT KODE BARANG [A..C]:";
kode=getch();
cout<<'\n';
switch(kode)
			{
         case'A':
	     case'a':
         cout<<"Alat Olah Raga";
        break;

        case'B':
         case'b':
         	   cout<<"Alat Elektronik";
         break;

        case'C':
        case'c':
        		cout<<"Alat Masak";
        break;

        default:
        			cout<<"Anda Salah Memasukkan Kode";
        }
        cout<<'\n';
        cout<<"\nIngin Pilih Lagi[Y/T]:";
        lagi=getch();
        if(lagi=='Y'||lagi=='y')
        				goto atas;
        getch();
        }