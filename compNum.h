class Complex{
	int imaginary;
	int real;
	public:
		Complex(){
			imaginary=2;
			real=3;
		}
		Complex(int n,int i){
			imaginary=i;
			real=n;
		}
		void Display();
		void Add(Complex c1, Complex c2);
		void Sub(Complex c1, Complex c2);
		void Mul(Complex c1, Complex c2);
		void Div(Complex c1, Complex c2);
		void Magnitude();
};
