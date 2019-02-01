#include <stdio.h>
#include <math.h>

double BMICalculator(double weight, double height)
{
	return weight / ( height * height );
}

int main(int argc, const char * argv[])
{
	printf("Student: Timchenko Mikhail\nAlgorithms and data structures. Basic course.\nHomework #1\n\n");

	printf("01. BMI Calculator.\n\n");
	double weight;
	double height;
	double bmi;
	printf("Input your weight:");
	scanf("%lf", &weight);
	printf("Input your height:");
	scanf("%lf", &height);

	bmi = BMICalculator(weight, height);
	printf("Yor BMI is: %.2lf", bmi);

	printf("\n\n02. Maximum.\n\n");
	double a, max;
	int counter = 0;
	max = 0;

	while (counter <= 3)
	{
		printf("%s", "Enter a:");
		scanf("%lf", &a);
		if (max < a)
		{
			max = a;
		}
		counter++;
	}
	printf("Maximum: %lf", max);

	getch();
	return 0;
}