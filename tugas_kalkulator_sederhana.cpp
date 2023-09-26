#include<iostream>
using namespace std;
int main(){
     float a,b,hasil;
     char aritmatika;

     cout<<"selamat datang di kalkulator sderhana" <<endl;
     cout<<"masukkan nilai pertama";
     cin>>a;
     cout<<"pilih operator +,-,*,/:";
     cin>>aritmatika;
     cout<<"masukkan nilai kedua";
     cin>>b;
     cout<<"hasil perhitungan:";
     cout<<a<<aritmatika<<b;
     if (aritmatika =='+'){
        hasil=a+b;
        cout<<"=" <<hasil<<endl;
     }
     else if (aritmatika=='-'){
        hasil=a-b;
        cout<<"="<<hasil<<endl;
     }
     else if(aritmatika=='*'){
        hasil=a*b;
        cout<<"="<<hasil<<endl;
     }
     else if(aritmatika=='/'){
        hasil=a/b;
        cout<<"="<<hasil<<endl;
     }



}