
#include <iostream>
using namespace std;

double NetPay(double grossPay, double taxFreeAllowance, double rateOfTax);

double NetPay(double grossPay, double taxFreeAllowance, double rateOfTax) {


	double NetPay = (grossPay - taxFreeAllowance) * (1 - rateOfTax / 100.0);
	return NetPay;
}


int main()
{
	double grossPay;
	double taxFreeAllowance;
	double rateOfTax;

	cout << "Enter you total annual gross pay: ";
		cin >> grossPay;

	cout << "Enter your tax free allowance: ";
		cin >> taxFreeAllowance;


	cout << "Enter your rate of tax: ";
		cin >> rateOfTax;

		

	cout << "your gross pay is " << NetPay(grossPay, taxFreeAllowance,rateOfTax);

	return 0;
}
