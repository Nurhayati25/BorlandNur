#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>

main()
{
	char kode[5],pesawat[10];
   int kelas,harga,jumlah,total;

   printf("Masukan kode pesawat [MPT/GRD/BTV] : ");gets(kode);
   cout<<"kelas Pesawat :\n";
   cout<<"     1.Executive\n";
   cout<<"     2.Bisnis\n";
   cout<<"     3.Ekonomi\n";
   cout<<"Pilih kelas [1/2/3]: ";cin>>kelas;

   if(strcmp(kode,"MPT")==0)
   {
   	strcpy(pesawat,"MERPATI");
   if(kelas==1)
   harga=1500000;

   else if(kelas==2)
   harga=900000;

   else if(kelas==3)
   harga=500000;


   }

   else if(strcmp(kode,"GRD")==0)
   {
           strcpy(pesawat,"GARUDA");
   if(kelas=1)
   harga=1200000;

   else if(kelas=2)
   harga=800000;

   else if(kelas=3)
   harga=400000;
   }
   else if(strcmp(kode,"BTV")==0)
   {
           strcpy(pesawat,"BATAVIA");
   if(kelas=1)
   harga=1000000;

   else if(kelas=2)
   harga=700000;

   else if(kelas=3)
   harga=300000;
   }


cout<<"\nNama Pesawat : "<<pesawat;
cout<<"\nHarga Tiket  : "<<harga;
cout<<"\nJumlah Tiket : ";cin>>jumlah;

total=harga*jumlah;

cout<<"Total Biaya    :Rp"<<total;
cout<<endl;
cout<<"                            CONTOH ADMIN HD   ";


getch();
}