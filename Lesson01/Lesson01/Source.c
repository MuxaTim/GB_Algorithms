#include <stdio.h>
#include <math.h>

double BMICalculator(double weight, double height)
{
	return weight / ( height * height );
}

int main(int argc, const char * argv[])
{
	double weight;
	double height;
	double bmi;
	printf("Input your weight:");
	scanf("%lf", &weight);
	printf("Input your height:");
	scanf("%lf", &height);

	bmi = BMICalculator(weight, height);
	printf("Yor BMI is: %.2lf", bmi);

	getch();
	return 0;
}