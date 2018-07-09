#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;
main()
{
int queue[5];
int depan=0;
int belakang=0;
int pilihan, data, i, pilhps, jml;

do
{
menu:
cout<<"\t PROGRAM ARRAY OF QUEUE "<<endl;
cout<<"\t MENU "<<endl;
cout<<"\t 1. Masukan Data "<<endl;
cout<<"\t 2. Keluarkan / Hapus Data"<<endl;
cout<<"\t 3. Lihat Data Antrian "<<endl;
cout<<"\t 4. Exit Program "<<endl;
cout<<"\t Pilih Menu [1/2/3/4]: ";
cin>>pilihan;
switch (pilihan)
{
case 1: //enqueue
//apakah queue belum penuh?
if (belakang <= 4 )
{
cout<<"\t Data Masuk = ";
cin>>data;
queue[belakang] = data;
belakang++;
//system("cls");
if (belakang == 0)
depan = 0;
}
else
cout<<"\t Queue penuh! \n";
getch(); system("cls"); goto menu;
break;

case 2: //dequeue
hapus:
system("cls");
cout<<"\t MENU HAPUS "<<endl;
cout<<"\t 1. FIFO "<<endl;
cout<<"\t 2. LIFO"<<endl;
cout<<"\t 3. Kembali ke Menu Awal "<<endl;
cout<<"\t Pilih Menu [1/2/3] ";
cin>>pilhps;
if (pilhps==1)
{
//fifo
//apakah queue belum kosong?
if (depan < belakang)
{
cout<<"\t Data keluar = "<<queue[depan];
depan++;
}
else
cout<<"\t Queue kosong!\n";
getch(); system("cls"); goto hapus;
}
else if (pilhps==2)
{
//lifo
//apakah queue belum kosong?
if (depan < belakang)
{
cout<<"\t Data keluar = "<<queue[belakang];
belakang--;
}
else
cout<<"\t Queue kosong!\n";

getch(); system("cls"); goto hapus;
}
else
{
system("cls");
goto menu;
}
getch(); system("cls");
break;
case 3:
jml=0;
cout<<endl;
if(depan==belakang)
cout<<"\t Queue Kosong!";
else
{
cout<<"\t Tampilan Data QUEUE Yang Sudah Dimasukan "<<endl;
for(i=depan; i<belakang; i++)
{
cout<<"\t DATA ANTRIAN QUEUE "<<" "<<queue[i]<<endl;
jml=jml+queue[i];
}
cout<<"\n";
cout<<"\t Total Antrian\t\t= "<<belakang<<endl;
cout<<"\t Jumlah nilai Antrian\t= "<<jml;
}
getch(); system("cls"); goto menu;
break;
case 4:
cout<<endl<<endl;

cout<<"\t TERIMAKASIH TELAH MENGGUNAKAN PROGRAM KAMI \n\n";
cout<<"\t Dwi Cahya Nurohim\t20170801204\n";
cout<<"\t Trisna Nugraha\t\t20170801209\n";
cout<<"\t Galang Chairul Taqwa\t20170801253\n";
}
}
while (pilihan != 4);
getch();
}
