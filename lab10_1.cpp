#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<cmath>
using namespace std;

int main(){
	double RPY,PPY,NB,T;
	int i=1;
	cout << "Enter initial loan: ";
	cin>>NB;
	cout << "Enter interest rate per year (%): ";
	cin>>RPY;
	cout << "Enter amount you can pay per year: ";
	cin>>PPY;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	
do {
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i++; 
	cout << setw(13) << left << NB;
	cout << setw(13) << left << (NB*RPY)/100;
	cout << setw(13) << left << NB+(NB*RPY)/100;
	T=NB+(NB*RPY)/100;
	if(PPY>T){
		PPY=T;
	}
	cout << setw(13) << left << PPY;
	NB=(NB+(NB*RPY)/100)-PPY;
	if(T-PPY<0){
		PPY=T;
	}
	cout << setw(13) << left << NB;
	cout << "\n";
	}while(NB>0);
}
