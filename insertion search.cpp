#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
	
	int clrscr();
	int size, arr[50], i, j, temp;
	cout<<"Masukkan ukuran Array : ";
	cin>>size;
	cout<<"Masukkan array element : \n";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Insertion Search \n";
	for(i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	cout<<"Array setelah diurutkan : \n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
}
