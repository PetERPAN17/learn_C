#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const double SECTION1_HIGH =  12000000.0;
	const double SECTION2_HIGH =  46000000.0;
	const double SECTION3_HIGH =  88000000.0;
	const double SECTION4_HIGH = 150000000.0;
	const double SECTION5_HIGH = 300000000.0;
	const double SECTION6_HIGH = 500000000.0;

	const double SECTION1_RATE = ( 6.0 / 100);
	const double SECTION2_RATE = (15.0 / 100);
	const double SECTION3_RATE = (24.0 / 100);
	const double SECTION4_RATE = (35.0 / 100);
	const double SECTION5_RATE = (38.0 / 100);
	const double SECTION6_RATE = (40.0 / 100);
	const double SECTION7_RATE = (42.0 / 100);

	const float BASIC_DEDUCTION = 1500000.0;

	double income = 0.0, incomeForTaxCalculation = 0.0, remainingIncome = 0.0, baseTax = 0.0, AddTax = 0.0;

	printf("Input your income : ");
	scanf("%lf", &income);

	printf("Income %lf\n", income);

	incomeForTaxCalculation = income - BASIC_DEDUCTION;

	printf("The income for tax calculation : %lf\n", incomeForTaxCalculation);

	if (incomeForTaxCalculation <= SECTION1_HIGH) {
		baseTax = incomeForTaxCalculation * SECTION1_RATE;
	}
	else {
		remainingIncome = incomeForTaxCalculation - SECTION1_HIGH;
		baseTax = SECTION1_HIGH * SECTION1_RATE;
	}

	printf("Tax : %lf\n", baseTax);
	printf("The remaining income : %lf\n", remainingIncome);

	if (incomeForTaxCalculation > SECTION1_HIGH && incomeForTaxCalculation <= SECTION2_HIGH) {
		AddTax = remainingIncome * SECTION2_RATE;
	}
	else if (incomeForTaxCalculation > SECTION2_HIGH && incomeForTaxCalculation <= SECTION3_HIGH) {
		AddTax = remainingIncome * SECTION3_RATE;
	}
	else if (incomeForTaxCalculation > SECTION3_HIGH && incomeForTaxCalculation <= SECTION4_HIGH) {
		AddTax = remainingIncome * SECTION4_RATE;
	}
	else if (incomeForTaxCalculation > SECTION4_HIGH && incomeForTaxCalculation <= SECTION5_HIGH) {
		AddTax = remainingIncome * SECTION5_RATE;
	}
	else if (incomeForTaxCalculation > SECTION5_HIGH && incomeForTaxCalculation <= SECTION6_HIGH) {
		AddTax = remainingIncome * SECTION6_RATE;
	}
	else if (incomeForTaxCalculation > SECTION6_HIGH) {
		AddTax = remainingIncome * SECTION7_RATE;
	}

	printf("Add tax : %lf\n", AddTax);

	printf("Must pay %lf to tax.", baseTax + AddTax);

	return 0;
}