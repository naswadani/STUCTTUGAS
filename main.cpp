#include <iostream>
#define maxsize 10

using namespace std;

struct Paket{
    int top;
    char jenis_brg[30];
    char kota[20];
    int berat;
    void push(int x);
    void pop(int x);
    void display(int x);
    void Size();
    bool isfull();
    bool isempty();
};
struct Paket kirim[100];
bool Paket::isfull(){
    if(top == maxsize){
        return true;
    }
    else{
        return false;
    }
}
bool Paket::isempty(){
    if(top == 0){
        return true;
    }
    else{
        return false;
    }
}
void Paket::display(int x){
    if(isempty()){
        cout << "Stack is Empty" << endl;
        return;
    }
    else{
        for(int i = 1; i<x;i++){
            cout << "data ke-"<<i<<" "<<kirim[i].jenis_brg<<" "<<kirim[i].berat<<" "<<kirim[i].kota<<endl;
        cout << endl;
        }
    }

}

void Paket::push(int x){
    if(isfull()){
        cout << "Stack is full"<<endl;
        return;
    }
    else{
        cout <<"masukkan jenis barang\t: ";cin>>kirim[x].jenis_brg;
        cout <<"masukkan berat barang\t: ";cin>>kirim[x].berat;
        cout <<"masukkan kota tujuan\t: ";cin>>kirim[x].kota;
        top++;
    }
}
void Paket::pop(int x){
    if(isempty())
    {
        cout<<"nothing in list"<<endl;
        return;
    }
    else{
        cout<<"Data Terakhir yang anda Hapus Adalah :"<<endl;
        cout<<kirim[x].jenis_brg<<" ";
        cout<<kirim[x].berat<<" Kg ";
        cout<<kirim[x].kota<<endl<<endl;
    }
}
void Paket::Size(){
    cout << "size of Stack is " << top<<endl;
}

int main()
{
    Paket s;
    int ch,element=1,result;
    while(1)
    {
        cout<<"*--------------------------------------------------------------------*"<<endl;
        cout<<"1.PUSH  2.POP  3.DISPLAY  4.ISFULL  5.ISEMPTY  6.SIZE  7.EXIT "<<endl;
        cout<<"*--------------------------------------------------------------------*"<<endl;
    cin>>ch;
    if(ch==1)
    {
        s.push(element);
        element++;
    }
    else if(ch==2)
    {
        s.pop(element-1);
        element--;
    }
    else if(ch==3)
    {
        s.display(element);
    }
    else if(ch==4)
    {
        if(s.isfull())
            cout<<"STACK IS FULL"<<endl;
        else
            cout<<"STACK IS NOT FULL"<<endl<<"YOU CAN PUSH"<<endl;
    }
    else if(ch==5)
    {
        if(s.isempty())
            cout<<"STACK IS EMPTY"<<endl;
        else
            cout<<"STACK IS NOT EMPTY"<<endl<<"YOU CAN POP"<<endl;
    }
    else if(ch==6)
    {
        s.Size();
    }
    else
    return 0;
    }
    return 0;
}
