#include<iostream>
#include<cmath>
#include"ComNum.h"
using namespace std;
void Complex::Display(){
	cout<<"Real and Imaginary: "<<endl;
	cout<<"a+bi: "<<real<<" + "<<imaginary<<"i"<<endl;
}
void Complex::Add(Complex c1, Complex c2){
	real=c1.real+c2.real;
	imaginary=c1.imaginary+c2.imaginary;
	Display();
}
void Complex::Sub(Complex c1, Complex c2){
	real=c1.real-c2.real;
	imaginary=c1.imaginary-c2.imaginary;
	Display();
}
void Complex::Mul(Complex c1, Complex c2){
	real=c1.real*c2.real;
	imaginary=c1.imaginary*c2.imaginary;
	Display();
}

void Complex::Div(Complex c1, Complex c2){
	real=c1.real/c2.real;
	imaginary=c1.imaginary/c2.imaginary;
	Display();
}
void Complex::Magnitude(){
	int z=sqrt((real)*real+(imaginary)*imaginary);
	cout<<"magnitude of complex num is: "<<z<<endl;
}


