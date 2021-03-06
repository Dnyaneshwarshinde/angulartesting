#include <iostream>
using namespace std;
//using namespace NComplex; //error
namespace NComplex
{
	class Complex
	{
		private:
			//variable or data members or fields
			int real;
			int imag;

		public:
			// member function or methods
			//1.1 input
			//void AcceptInputFromConsole(className * const this)
			//void AcceptInputFromConsole(Complex * const this)
			// c1.AcceptInputFromConsole(); // this=&c1;
			void AcceptInputFromConsole()
			{
				cout<<"Enter Real :: ";
				cin>>this->real;
				cout<<"Enter Imag :: ";
				cin>>this->imag;
			}
			//1.2 output
			//void PrintOutputConsole(Complex * const this)
			void PrintOutputConsole()
			{
				cout<<"this->real ="<<this->real<<"\t["<<&this->real<<" ] "<<endl;
				cout<<"this->imag ="<<this->imag<<"\t["<<&this->imag<<" ] "<<endl;
			}
			// 2. setter methods or mutators
			// modify state of object
			//void SetReal(Complex * const this,int real)
			void SetReal(int real)
			{   // data member=localvaribale
 				this->real=real;
			}
			//void SetImag(Complex * const this,int imag)
			void SetImag(int imag)
			{
				this->imag= imag;
			}

			//3. getter methods - Inspectors
			// dont modify the state of the object
			//int GetReal(Complex * const this)
			int GetReal()
			{
				return this->real;
			}
			//int GetImag(Complex * const this )
			int GetImag()
			{
				return this->imag;
			}

			// 4.1  paramterless ctor or no argument ctor
			//Complex(Complex * const this)
			Complex()
			{
				this->real=11;
				this->imag=22;
				cout<<"inside parameterless ctor of Complex class"<<endl;
			}
			//4.2 parameterized ctor with one argument
			//Complex (Compelx * const this, int value)
			Complex (int value)
			{
				this->real=value;
				this->imag=value;
				cout<<"inside parameterized ctor (one argument) "<<endl;
			}
			//4.3 parameterized ctor with 2 arguments
			//Complex (Compelx * const this, int real, int imag)
			Complex (int real, int imag)
			{
				this->real=real;
				this->imag=imag;
				cout<<"inside parameterized ctor (two argruments)"<<endl;
			}


	};// end of complex class
}//end of namespace NComplex
using namespace NComplex;

int main()
{
	Complex c1; //parameterless ctor
	//NComplex::Complex c1;
	cout<<"c1 :: "<<endl;
	c1.PrintOutputConsole();
	cout<<"============================"<<endl;

	//Complex c2(100); // one argument ctor(parameterized ctor)
	int value;
	cout<<"enter value :: ";
	cin>>value;

	Complex c2(value);
	cout<<"c2 :: "<<endl;
	c2.PrintOutputConsole();
	cout<<"============================"<<endl;

	int real, imag;
	cout<<"Enter Real :: ";
	cin>>real;

	cout<<"Enter Imag :: ";
	cin>>imag;

	Complex c3(real, imag); // parameterid ctor 2 arguments
	//Complex c3(111,222);// parameterized ctor 2 arguments
	cout<<"c3 :: "<<endl;
	c3.PrintOutputConsole();
	cout<<"============================"<<endl;
	return 0;
}
