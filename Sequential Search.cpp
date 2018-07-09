#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int arr1[5];
int req;
int location=-5;
cout<<"Masukkan Angka : \n";
for(int i=0; i<5; i++)
{
cin>>arr1[i];
}
cout<<endl;
cout<<"Masukkan angka yang akan diari :";
cin>>req;
cout<<endl;
for(int w=0;w<5;w++)
{
if(arr1[w] == req)
location=w;
}
if(location !=-5)
{
cout<<"Angka ditemukan di urutan ke- "<<location+1;
cout<<endl;
}
else
cout<<"Angka tidak ditemukan ";
getch();
}
