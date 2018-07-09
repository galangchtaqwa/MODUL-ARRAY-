#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int delete_from_queue(int []);
int insert_in_queue(int [], int);
void display(int [], int, int);

const int SIZE = 50;

int queue[SIZE];
int front=-1;
int rear=-1;

int main()
{
	system ("cls");
	int item, check;
	char ch='y';

	while(ch=='y' || ch=='Y')
	{
		cout<<"Masukan item : ";
		cin>>item;
		check = insert_in_queue(queue, item);
		if(check == -1)
		{
			cout<<"\nPress a key to exit\n";
			getch();
			exit(1);
		}
		cout<<"Item berhasil dimasukan!!\n";
		cout<<"\nUrutan dari depan ke belakang:\n";
		display(queue, front, rear);
		cout<<"\nApakah anda ingin memasukkan item lagi ? (y/n).. ";
		cin>>ch;
	}

	system ("cls");
	cout<<"Element dihapus \n";
	ch='y';
	while(ch=='y' || ch=='Y')
	{
		check = delete_from_queue(queue);
		if(check == -1)
		{
			cout<<"\nPress a key to exit\n";
			getch();
			exit(2);
		}
		else
		{
			cout<<"\nElement yang terhapus adalah: "<<check<<"\n";
			cout<<"Urutan dari depan ke belakang:\n";
			display(queue, front, rear);
		}
		cout<<"\n Mau menghapus lagii ? (y/n)... ";
		cin>>ch;
	}

	getch();
}

int insert_in_queue(int queue[], int elem)
{
	if(rear == SIZE-1)
	{
		return -1;
	}
	else if(rear == -1)
	{
		front = rear = 0;
		queue[rear] = elem;
	}
	else
	{
		rear++;
		queue[rear] = elem;
	}
	return 0;
}

int delete_from_queue(int queue[])
{
	int retn;
	if(front == -1)
	{
		return -1;
	}
	else
	{
		retn = queue[front];
		if(front == rear)
		{
			front = rear = -1;
		}
		else
		{
			front++;
		}
	}
	return retn;
}

void display(int queue[], int front, int rear)
{
	if(front == -1)
	{
		return;
	}
	for(int i=front; i<rear; i++)
	{
		cout<<queue[i]<<" <- ";
	}
	cout<<queue[rear]<<"\n";
}
