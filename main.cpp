#include<iostream>
#include"ComNum.h"
using namespace std;
int main(){
	Complex C,C1,C2(3,7);
	C1.Display();
	cout<<"1. Second complex number. "<<endl;
	C2.Display();
	cout<<"2. Adds two complex numbers and returns the result."<<endl;
	C.Add(C1,C2);
	cout<<"3. Subtract two complex numbers and returns the result."<<endl;
	C.Sub(C1,C2);
	cout<<"4. Divide two complex numbers and returns the result."<<endl;
	C.Div(C1,C2);
	cout<<"5. Multiply two complex numbers and returns the result."<<endl;
	C.Mul(C1,C2);
	
	C.Display();
	C.Magnitude();
	return 0;
}
