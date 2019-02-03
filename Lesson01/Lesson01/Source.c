#include <stdio.h>
#include <math.h>

double BMICalculator(double weight, double height)
{
	return weight / ( height * height );
}

int main(int argc, const char * argv[])
{
	printf("Student: Timchenko Mikhail\nAlgorithms and data structures. Basic course.\nHomework #1\n\n");

	//Задача №1 - калькулятор индекса массы тела
	printf("01. BMI Calculator.\n\n");
	float weight, height, bmi;
	printf("Input your weight:");
	scanf("%f", &weight);
	printf("Input your height:");
	scanf("%f", &height);

	bmi = BMICalculator(weight, height);
	printf("Yor BMI is: %.2f", bmi);

	//Задача №2 - найти максимум из 4 чисел
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

	//Задача №3 - обмен значениями
	printf("\n\n03. Replacing values.\n\n");
	int b1, b2, c;
	printf("%s", "Enter b1 (integer):");
	scanf("%d", &b1);

	printf("%s", "Enter b2 (integer):");
	scanf("%d", &b2);

	c = b1;
	b1 = b2;
	b2 = c;

	printf("Replacing values using the third variable:\n");
	printf("b1 = %i\n", b1);
	printf("b2 = %i\n", b2);

	b1 = b1 + b2;
	b2 = b1 - b2;
	b1 = b1 - b2;

	printf("Replacing values without using the third variable:\n");
	printf("b1 = %i\n", b1);
	printf("b2 = %i\n", b2);


	getch();
	return 0;
}