#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
int nilai,tugas;
char *ket,*grade;

printf("Masukan Sebuah Nilai: ");scanf("%d",&nilai);
printf("Masukan Nilai Tugas: "); scanf("%d",&tugas);

if(nilai>90)
	{
	ket="Lulus";
   grade="A";
   }
else if(nilai>80)
	{
   ket="Lulus";
   grade="B";
   }

else if(nilai>70)
	{
   ket="Lulus";
   grade="C";
   }

else if(nilai<=65)
	{
   ket="Gagal";
   grade="D";
   }

else
   {
   ket="Gagal";
   grade="D";
   }

cout<<"keterangan : "<<ket<<endl;
cout<<"grade : "<<grade<<endl;


getch();
}