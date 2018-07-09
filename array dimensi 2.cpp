#include <iostream>
#include <conio.h>
using namespace std;
main(){
int Ar1, Ar2;
cout<<"Masukan Dimensi pertama Array : "; cin>>Ar1;
cout<<"Masukan Dimensi Kedua Array : "; cin>>Ar2;
int A[Ar1][Ar2];
cout<<endl;
for (int b=0;b<Ar1;b++){
    for(int c=0;c<Ar2;c++){
        cout<<"Masukan Nilai Array A["<<b<<"]["<<c<<"] = "; cin>>A[b][c];
    }
}
cout<<"\nIni hasil Nilai Array A :\n\n";
for (int b=0;b<Ar1;b++){
    for(int c=0;c<Ar2;c++){
        cout<<"A["<<b<<"]["<<c<<"] = "<<A[b][c]<<endl;
    }
}
getch();
}
