#include <iostream>

using namespace std;
#include<iostream>



class complex {

private:

	double real, img;

public:

	complex(double r, double i) { real = r; img = i; }

	friend complex addition(complex a, complex b);

	friend complex subtruction(complex a, complex b);

	friend complex multiplication(complex a, complex b);

	friend complex division(complex a, complex b);

	void print();

};



complex addition(complex a, complex b)



{

	double r = a.real + b.real;

	double i = a.img + b.img;

	return complex(r, i);

}

complex subtruction(complex a, complex b)



{

	double r = a.real - b.real;

	double i = a.img - b.img;

	return complex(r, i);

}



complex multiplication(complex a, complex b)



{

	double r = (a.real) * (b.real)-(a.img) *(b.img);

	double i = (a.img * b.real) +(a.real * b.img) ;

	return complex(r, i);

}



/*complex division(complex a, complex b)

{

	double r = (a.real * a.img)+(b.real * b.img)/;

	double i = (a.img) / (b.img);

	return complex(r, i);

}*/



void complex::print()

{

	cout << real << "+" << img << "i\n";
}



int main(){

	complex  num3(0,0);

	double real, imag;



 cout << "Enter a and b where a and b are the first real numbers." << std::endl;

 cin >> real;

  cin >> imag;
complex num1(real, imag);
num1.print();

cout << "Enter a and b where a and b are the first real numbers." << std::endl;

 cin >> real;

  cin >> imag;
complex num2(real, imag);
num2.print();
 
 
 







//Cout << �Enter a and b where a and b are the  complex numbers � << endl;

//Cin >> a,img, b.img;

//Cout << �d = �;





/*c.real = a.real + b.real;

c.img = a.img + b.img;

c.real = a.real  b.real;

c.img = a.img + b.img;

if (c.img >= 0)

cout << "Sum of two complex numbers = " << c.real << " + " << c.img << "i";

else

cout << "Sum of two complex numbers = " << c.real << " " << c.img << "i";*/



return 0;



}

