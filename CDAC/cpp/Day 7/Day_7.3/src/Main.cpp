#include<iostream>
using namespace std;
class Complex
{
private:
	int real;
	int imag;
public:
	Complex( void )
	{
		cout<<"Complex( void )"<<endl;
		this->real = 0;
		this->imag = 0;
	}
	Complex( int real, int imag )
	{
		cout<<"Complex( int real, int imag )"<<endl;
		this->real = real;
		this->imag = imag;
	}
	Complex( const Complex &other )
	{
		cout<<"Complex( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
	}
	//const Complex &other = c1
	//Complex *const this = &c2;
	Complex& operator=( const Complex &other )
	{
		cout<<"void operator=( const Complex &other )"<<endl;
		this->real = other.real;
		this->imag = other.imag;
		return *this;
	}
	friend istream& operator>>( istream &cin, Complex &other );
	friend ostream& operator<<( ostream &cout, const Complex &other );
};
istream& operator>>( istream &cin, Complex &other )
{
	cout<<"Enter real number	:	";
	cin>>other.real;
	cout<<"Enter imag number	:	";
	cin>>other.imag;
	return cin;
}
ostream& operator<<( ostream &cout, const Complex &other )
{
	cout<<"Real Number	:	"<<other.real<<endl;
	cout<<"Imag Number	:	"<<other.imag<<endl;
	return cout;
}
int main( void )
{
	Complex c1(10,20);
	Complex c2;
	Complex c3;
	c3 = c2 = c1;
	cout<<c3<<endl;
	return 0;
}

int main1( void )
{
	Complex c1(10,20);	//Here on c1, ...
	Complex c2;	//Here on c2, ...
	c2 = c1;	//c2.operator=( c1 );
	cout<<c2<<endl;
	return 0;
}
