#include <iostream>
#include <string>

using namespace std;

int main (){
	string nama;
	string nim;
	
	cout<<"Masukan Data Berikut : "<<endl<<endl;
	cout<<"Nama    : ";
	getline (cin, nama); 
	  
	 
	cout<<"NIM     : ";
	getline (cin, nim); 
	 
	
	cout<<"Nama    : "<<nama<<endl;
	cout<<"NIM     : "<<nim<<endl;

    

}

void nama(string name){
    cout<<name;
    return 0;
}

void NIM(int a){
    cout<<a;
    return 0;
}
