#include <stdio.h>
#include <stdbool.h>
#include <math.h>      


void main(int argc, char* argv[])
{
	bool z = true;
	while (z == true) {


		printf("What do you want to caluclate?\n ");
		printf("1. Add\n");
		printf("2. Subtract\n");
		printf("3. Divide\n");
		printf("4. Multiply\n");
		printf("5. Raise Power\n");
		printf("6. Harmonic Mean\n");
		printf("0. Nothing\n");
		int input;

		scanf_s("%d", &input);
		if (input == 0)
			z = false;
		else if (input == 1)
		{
			bool y = true;
			double num1;
			double num2;

			while (y == true) {
				printf("What number do you want to add?");
				scanf_s("%lf", &num1);
				printf("And?");
				scanf_s("%lf", &num2);
				y = false;

			}
			double sum = num1 + num2;
			printf("Result: %.4f \n", sum);

		}
		else if (input == 2)
		{
			bool y = true;
			double num1;
			double num2;

			while (y == true) {
				printf("What number do you want to subtract?");
				scanf_s("%lf", &num1);
				printf("And?");
				scanf_s("%lf", &num2);
				y = false;

			}
			double sum = num1 - num2;
			printf("Result: %.3f \n", sum);

		}
		else if (input == 3)
		{
			bool y = true;
			double num1;
			double num2;

			while (y == true) {
				printf("What number do you want to divide?");
				scanf_s("%lf", &num1);
				printf("And?");
				scanf_s("%lf", &num2);
				y = false;

			}
			double sum = num1 / num2;
			printf("Result: %.6f \n", sum);

		}
		else if (input == 4)
		{
			bool y = true;
			double num1;
			double num2;

			while (y == true) {
				printf("What number do you want to multiply?");
				scanf_s("%lf", &num1);
				printf("And?");
				scanf_s("%lf", &num2);
				y = false;

			}
			double sum = num1 * num2;
			printf("Result: %.3f \n", sum);

		}
		else if (input == 5)
		{
			bool y = true;
			double num1;
			double num2;

			while (y == true) {
				printf("What number do you want to raise power?");
				scanf_s("%lf", &num1);
				printf("And?");
				scanf_s("%lf", &num2);
				y = false;

			}
			double sum = pow(num1, num2);
			printf("Result: %.3f \n", sum);

		}
		else if (input == 6)
		{
			bool y = true;
			double num1;
			double num2;

			while (y == true) {
				printf("What number do you want to harmonic mean?");
				scanf_s("%lf", &num1);
				printf("And?");
				scanf_s("%lf", &num2);
				y = false;

			}
			double sum = (2 * num1 * num2) / (num1 + num2);
			printf("Result: %.3f \n", sum);

		}
	}
}