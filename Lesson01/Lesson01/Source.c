#include <stdio.h>
#include <math.h>

float BMICalculator(float weight, float height)
{
	return weight / ( height * height );
}

double Discriminant(double a, double b, double c) 
{
	//D = b^2 - 4ac
	return b * b - 4 * a * c;
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

	//Задача №4 - Написать программу нахождения корней заданного квадратного уравнения.
	printf("\n\n04. Quadratic equation.\n\n");
	double _a, _b, _c, _discriminant, _x;
	//ax2 + bx + c = 0
	printf("%s", "ax2 + bx + c = 0\n");
	printf("%s", "Enter a:");
	scanf("%lf", &_a);
	printf("%s", "Enter b:");
	scanf("%lf", &_b);
	printf("%s", "Enter c:");
	scanf("%lf", &_c);
	_discriminant = Discriminant(_a, _b, _c);
	printf("Discriminant = %lf\n", _discriminant);
	if (_discriminant < 0) {
		printf("D < 0. This equation has no real roots.");
	}
	else if (_discriminant == 0 ) {
		_x = -(_b / 2 * _a);
		printf("x = %lf", _x);
	}
	else {
		_x = (-1 * _b - sqrt(_discriminant)) / (2 * _a);
		printf("x1 = %lf\n", _x);
		_x = (-1 * _b + sqrt(_discriminant)) / (2 * _a);
		printf("x2 = %lf\n", _x);
	}

	getch();
	return 0;
}