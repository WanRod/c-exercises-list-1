#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

void exercise1()
{
    double x, y, z, average;

    printf("***** Exercise 1 - Calculate the average of 3 numbers *****\n\n");

    printf("Enter the first number: ");
    scanf("%lf", &x);

    printf("\nEnter the second number: ");
    scanf("%lf", &y);

    printf("\nEnter the third number: ");
    scanf("%lf", &z);

    average = (x + y + z) / 3;

    printf("\n\nThe average of 3 numbers entered is: %lf", average);
}

void exercise2()
{
    const double pi = 3.141592;
    double radius, area;

    printf("***** Exercise 2 - Calculate the area of the circle *****\n\n");

    printf("Enter the value of the radius: ");
    scanf("%lf", &radius);

    area = pi * pow(radius, 2);

    printf("\n\nThe area of the circle is: %lf", area);
}

void exercise3()
{
    double tileWidth, tileHeight, tileArea, wallWidth, wallHeight, wallArea, quantity;

    printf("***** Exercise 3 - Number of tiles needed to cover the wall *****\n\n");

    printf("Enter the tile width: ");
    scanf("%lf", &tileWidth);

    printf("\nEnter the tile height: ");
    scanf("%lf", &tileHeight);

    printf("\nEnter the wall width: ");
    scanf("%lf", &wallWidth);

    printf("\nEnter the wall height: ");
    scanf("%lf", &wallHeight);

    tileArea = tileWidth * tileHeight;

    wallArea = wallWidth * wallHeight;

    quantity = wallArea / tileArea;

    printf("\n\nOn this wall it is possible to place %d entire tiles", (int)quantity);
}

void exercise4()
{
    char haveMoney, havePermission;

    printf("***** Exercise 4 - Find out if the student can leave *****\n\n");

    printf("Does the student have money for the trip (y/n): ");
    fflush(stdin);
    scanf("%c", &haveMoney);

    printf("\nDoes the student have parental permission to travel (y/n): ");
    fflush(stdin);
    scanf("%c", &havePermission);

    if (haveMoney != 'y' && haveMoney != 'Y' && haveMoney != 'n' && haveMoney != 'N')
    {
        printf("\n\nInvalid entry for the first question.");
    }
    else if (havePermission != 'y' && havePermission != 'Y' && havePermission != 'n' && havePermission != 'N')
    {
        printf("\n\nInvalid entry for the second question.");
    }
    else
    {
        if ((haveMoney == 'y' || haveMoney == 'Y') && (havePermission == 'y' || havePermission == 'Y'))
        {
            printf("\n\nThe student can travel!");
        }
        else
        {
            printf("\n\nThe student cannot travel.");
        }
    }
}

void exercise5()
{
    char gender, haveHealthProblem;

    printf("***** Exercise 5 - Military enlistment *****\n\n");

    printf("What is your gender (m/f): ");
    fflush(stdin);
    scanf("%c", &gender);

    printf("Do you have a health problem (y/n): ");
    fflush(stdin);
    scanf("%c", &haveHealthProblem);

    if (gender != 'm' && gender != 'M' && gender != 'f' && gender != 'F')
    {
        printf("\n\nInvalid entry for the first question.");
    }
    else if (haveHealthProblem != 'y' && haveHealthProblem != 'Y' && haveHealthProblem != 'n' && haveHealthProblem != 'N')
    {
        printf("\n\nInvalid entry for the second question.");
    }
    else
    {
        if ((gender == 'm' || gender == 'M') && (haveHealthProblem == 'n' || haveHealthProblem == 'N'))
        {
            printf("\n\nYou can enlist.");
        }
        else
        {
            printf("\n\nYou cannot enlist.");
        }
    }
}

void exercise6()
{
    double number;

    printf("***** Exercise 6 - Number is between 100 and 200 *****\n\n");

    printf("Enter the number: ");
    scanf("%lf", &number);

    if (number >= 100 && number <= 200)
    {
        printf("\n\nThe entered number is between 100 and 200");
    }
    else
    {
        printf("\n\nThe entered number is not between 100 and 200");
    }
}

void exercise7()
{
    int age;

    printf("***** Exercise 7 - Majority *****\n\n");

    printf("Enter your age in years: ");
    scanf("%d", &age);

    if (age < 0)
    {
        printf("\n\nInvalid entered.");
    }
    else if (age >= 18)
    {
        printf("\n\nYou are of legal age.");
    }
    else
    {
        printf("\n\nYou are not of legal age.");
    }
}

void exercise8()
{
    double x, y, z;

    printf("***** Exercise 8 - Entry of 3 numbers *****\n\n");

    printf("Enter the first number: ");
    scanf("%lf", &x);

    printf("\nEnter the second number: ");
    scanf("%lf", &y);

    printf("\nEnter the third number: ");
    scanf("%lf", &z);

    if (x == y && x == z)
    {
        printf("\n\nThe three values are equal.");
    }
    else if (x == y || x == z || y == z)
    {
        printf("\n\nThere are two equal values and one different value.");
    }
    else
    {
        printf("\n\nThe three values are diferents.");
    }
}

void exercise9()
{
    double loanValue, salary, installmentsValue;
    int installments;

    printf("***** Exercise 9 - Bank loan *****\n\n");

    printf("Enter the loan value: ");
    scanf("%lf", &loanValue);

    printf("\nEnter your salary: ");
    scanf("%lf", &salary);

    printf("\nEnter the number of installments: ");
    scanf("%d", &installments);

    installmentsValue = loanValue / installments;

    if (installmentsValue <= (salary * 0.3))
    {
        printf("\n\nLoan approved!");
    }
    else
    {
        printf("\n\nLoan disapproved!");
    }
}

void exercise10()
{
    double grade1, grade2, grade3, grade4, recoveryGrade, average;

    printf("***** Exercise 10 - Read 4 notes from a student *****\n\n");

    printf("Enter the first grade: ");
    scanf("%lf", &grade1);

    printf("\nEnter the second grade: ");
    scanf("%lf", &grade2);

    printf("\nEnter the third grade: ");
    scanf("%lf", &grade3);

    printf("\nEnter the fourth grade: ");
    scanf("%lf", &grade4);

    average = (grade1 + grade2 + grade3 + grade4) / 4;

    if (average >= 7)
    {
        printf("\n\nThe average is %.2lf points, you are approved!", average);
    }
    else {
        printf("\nThe average is below 7, enter the recovery assessment grade: ");
        scanf("%lf", &recoveryGrade);

        average = (grade1 + grade2 + grade3 + grade4 + recoveryGrade) / 5;

        if (average >= 7)
        {
            printf("\n\nThe final average is %.2lf points, you are approved!", average);
        }
        else
        {
            printf("\n\nThe final average is %.2lf points, you not are approved.", average);
        }
    }
}

void exercise11()
{
    const int numbersQuantity = 3;
    double numbers[numbersQuantity];

    printf("***** Exercise 11 - 3 numbers in ascending order *****\n\n");

    printf("Enter the first number: ");
    scanf("%lf", &numbers[0]);

    printf("\nEnter the second number: ");
    scanf("%lf", &numbers[1]);

    printf("\nEnter the third number: ");
    scanf("%lf", &numbers[2]);

    int i, j;

    for (i = 0; i < numbersQuantity; i++)
    {
        for (j = i + 1; j < numbersQuantity; j++)
        {
            if (numbers[i] > numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    printf("\n\nThe numbers in ascending order are: ");
    for (i = 0; i < numbersQuantity; i++)
    {
        printf("%.2lf ", numbers[i]);
    }
}

void exercise12()
{
    const int sequenceNumbers = 20;
    int sequence[sequenceNumbers], i;

    printf("***** Exercise 12 - First 20 numbers of the Fibonacci sequence *****\n");

    sequence[0] = 1;
    sequence[1] = 1;

    for (i = 2; i < sequenceNumbers; i++)
    {
        sequence[i] = sequence[i - 1] + sequence[i - 2];
    }

    for (i = 0; i < sequenceNumbers; i++)
    {
        printf("\nNumber %d -> %d", i + 1, sequence[i]);
    }
}

void exercise13()
{
    int initialNumber, finalNumber, i;

    printf("***** Exercise 13 - Numbers between a initial number and final number *****\n\n");

    printf("Enter the initial number: ");
    scanf("%d", &initialNumber);

    printf("\nEnter the final number: ");
    scanf("%d", &finalNumber);

    if (initialNumber == finalNumber)
    {
        printf("\n\nThere are no numbers between, as the two numbers entered are the same.");
    }
    else if (initialNumber < finalNumber)
    {
        for (i = initialNumber; i <= finalNumber; i++)
        {
            printf("\nNumber %d", i);
        }
    }
    else if (initialNumber > finalNumber)
    {
        for (i = initialNumber; i >= finalNumber; i--)
        {
            printf("\nNumber %d", i);
        }
    }
}

void exercise14()
{
    int number, i;

    printf("***** Exercise 14 - Multiplication table of an entered number *****\n\n");

    printf("Enter the number: ");
    scanf("%d", &number);

    printf("\nMultiplication table of %d:", number);
    for (i = 0; i < 10; i++)
    {
        printf("\n%d x %d = %d", number, i + 1, number * (i + 1));
    }
}

void exercise15()
{
    int i;

    printf("***** Exercise 15 - Odd numbers between 100 and 200 *****\n");

    printf("\nOdd numbers:");
    for (i = 100; i <= 200; i++)
    {
        if (i % 2 != 0)
        {
            printf("\n%d", i);
        }
    }
}

void exercise16()
{
    const int studentsQuantity = 10;
    int i;
    double firstGrade[studentsQuantity], secondGrade[studentsQuantity];

    printf("***** Exercise 16 - Average grade for each student *****\n");

    for (i = 0; i < studentsQuantity; i++)
    {
        printf("\nEnter the first grade of the student %d: ", i + 1);
        scanf("%lf", &firstGrade[i]);

        printf("Enter the second grade of the student %d: ", i + 1);
        scanf("%lf", &secondGrade[i]);
    }

    for (i = 0; i < studentsQuantity; i++)
    {
        printf("\nThe average grades of the student %d is %.2lf points.", i + 1, (firstGrade[i] + secondGrade[i]) / 2);
    }
}

void exercise17()
{
    int totalValue = 0;
    int receiptValue, i;

    printf("***** Exercise 17 - Sum of 10 integers *****\n\n");

    for (i = 0; i < 10; i++)
    {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &receiptValue);

        totalValue += receiptValue;
    }

    printf("\n\nThe sum of the numbers entered is: %d", totalValue);
}

void exercise18()
{
    int totalValue = 0;
    int receivedValue;

    printf("***** Exercise 18 - Sum of integers up to the received value of 0 *****\n\n");

    do
    {
        printf("Enter the value: ");
        scanf("%d", &receivedValue);

        totalValue += receivedValue;
    } while (receivedValue != 0);

    printf("\n\nThe total value is %d.", totalValue);
}

void exercise19()
{
    int totalValue = 0;
    int receiptValue, evenNumbersCount = 0;
    double average = 0.0;

    printf("***** Exercise 19 - Average of even numbers *****\n\n");

    do
    {
        printf("Enter the even value: ");
        scanf("%d", &receiptValue);

        if (receiptValue % 2 == 0 && receiptValue != 0)
        {
            totalValue += receiptValue;
            evenNumbersCount++;
        }

    } while (receiptValue != 0);

    if (evenNumbersCount != 0)
    {
        average = totalValue / evenNumbersCount;
        printf("\n\nThe average of the even numbers entered is %.2lf.", average);
    }
    else
    {
        printf("\n\nNo even value was entered.");
    }
}

void exercise20()
{
    int minValue, maxValue, receivedValue, numbersCount = 0;

    printf("***** Exercise 20 - Find the smallest and largest value entered *****\n\n");

    printf("Enter a value: ");
    scanf("%d", &receivedValue);

    while (receivedValue != 0)
    {
        if (numbersCount == 0)
        {
            minValue = maxValue = receivedValue;
        }
        else
        {
            if (receivedValue < minValue)
            {
                minValue = receivedValue;
            }
            if (receivedValue > maxValue)
            {
                maxValue = receivedValue;
            }
        }

        printf("Enter a value: ");
        scanf("%d", &receivedValue);

        numbersCount++;
    }

    if (numbersCount != 0)
    {
        printf("\n\nThe minimum value entered is: %d\nThe maximum value entered is: %d\n", minValue, maxValue);
    }
    else
    {
        printf("\n\nNo value was entered.\n");
    }
}

void exercise21()
{
    char gender;

    printf("***** Exercise 21 - Person's gender *****\n\n");

    printf("What is your gender (m/f): ");
    fflush(stdin);
    scanf("%c", &gender);

    if (gender != 'm' && gender != 'M' && gender != 'f' && gender != 'F')
    {
        printf("\n\nInvalid entry.");
    }
    else if (gender == 'm' || gender == 'M')
    {
        printf("\n\nYou are a male!");
    }
    else
    {
        printf("\n\nYou are a female!");
    }
}

void exercise22()
{
    double value1, value2;
    int stop = 0;

    printf("***** Exercise 22 - Value between 1 and 100 *****");

    do
    {
        printf("\n\nEnter the first value: ");
        scanf("%lf", &value1);

        printf("\nEnter the second value: ");
        scanf("%lf", &value2);

        if ((value1 >= 1 && value1 <= 100) || (value2 >= 1 && value2 <= 100))
        {
            stop = 1;
        }
        else
        {
            printf("\n\nAt least one of the values must be in the range 1 to 100, so try again.\n");
        }

    } while (stop == 0);

    printf("\n\nOne of the numbers entered is between 1 and 100, so the sum of the two values entered is: %lf", value1 + value2);
}

void exercise23()
{
    long int number, factorial = 1, i;

    printf("***** Exercise 23 - Factorial of a number *****\n\n");

    printf("Enter the number: ");
    scanf("%ld", &number);

    for (i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    printf("\n\nThe factorial value of %ld is %ld", number, factorial);
}

void exercise24()
{
    int players, i;
    double height, totalHeight;

    printf("***** Exercise 24 - Average height of a volleyball team *****\n\n");

    printf("Enter the number of players: ");
    scanf("%d", &players);

    for (i = 0; i < players; i++)
    {
        printf("\nEnter the height of the player %d: ", i + 1);
        scanf("%lf", &height);

        totalHeight += height;
    }

    printf("\n\nThe average height of volleyball team players is: %lf", totalHeight / players);
}

struct Candidate
{
    char name[90];
    double score;
};

void exercise25()
{
    const int participants = 16;
    struct Candidate candidates[participants];
    double highestScore = candidates[0].score;
    int i, highestScoreIndex;
    bool tie;

    printf("***** Exercise 25 - Miss contest with %d participants *****", participants);

    for (i = 0; i < participants; i++)
    {
        printf("\n\nEnter the name of the candidate %d: ", i + 1);
        scanf("%s", candidates[i].name);

        printf("Enter the score of the candidate %d: ", i + 1);
        scanf("%lf", &candidates[i].score);
    }

    for (i = 0; i < participants; i++)
    {
        if (candidates[i].score > highestScore)
        {
            highestScore = candidates[i].score;
            highestScoreIndex = i;
        }
        else if (candidates[i].score == highestScore)
        {
            tie = true;
        }
    }

    if (tie == false)
    {
        printf("\n\nThe winner is %s with %lf points.", candidates[highestScoreIndex].name, candidates[highestScoreIndex].score);
    }
    else
    {
        printf("\n\nThere was a draw in the contest.");
    }
}

void exercise26()
{
    int number, i;
    int isPrime = 1;

    printf("***** Exercise 26 - Check whether a number is prime or not *****\n\n");

    printf("Enter the number: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("\n\n%d is not a prime number.", number);
    }
    else
    {
        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("\n\n%d is a prime number.", number);
        }
        else
        {
            printf("\n\n%d is not a prime number.", number);
        }
    }
}

void exercise27()
{
    double base, exponent, result;

    printf("***** Exercise 27 - Result of a potentiation *****\n\n");

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("\nEnter the exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);

    printf("\n\nThe result is: %lf", result);
}

void exercise28()
{
    int sum = 0, i, j;

    printf("***** Exercise 28 - Sum of prime numbers between 1 to 100 *****\n\n");

    for (i = 2; i <= 100; i++)
    {
        int isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            sum += i;
        }
    }

    printf("The sum of the prime numbers between 1 and 100 is: %d", sum);
}

int main()
{
    int choice;
    char continueExercise, comeBackToMenu;

    setlocale(LC_ALL, "");

    do
    {
        system("cls");

        printf("******** Exercises list ********\n\n");

        printf("Select a exercise (1 - 28): ");
        scanf("%d", &choice);

        system("cls");

        switch (choice)
        {
            case 1:
                do
                {
                    system("cls");

                    exercise1();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 2:
                do
                {
                    system("cls");

                    exercise2();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }

                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 3:
                do
                {
                    system("cls");

                    exercise3();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 4:
                do
                {
                    system("cls");

                    exercise4();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 5:
                    system("cls");

                    exercise5();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                break;

            case 6:
                do
                {
                    system("cls");

                    exercise6();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 7:
                do
                {
                    system("cls");

                    exercise7();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 8:
                do
                {
                    system("cls");

                    exercise8();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 9:
                do
                {
                    system("cls");

                    exercise9();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 10:
                do
                {
                    system("cls");

                    exercise10();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 11:
                do
                {
                    system("cls");

                    exercise11();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 12:
                do
                {
                    system("cls");

                    exercise12();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 13:
                do
                {
                    system("cls");

                    exercise13();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 14:
                do
                {
                    system("cls");

                    exercise14();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 15:
                do
                {
                    system("cls");

                    exercise15();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 16:
                do
                {
                    system("cls");

                    exercise16();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 17:
                do
                {
                    system("cls");

                    exercise17();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 18:
                do
                {
                    system("cls");

                    exercise18();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 19:
                do
                {
                    system("cls");

                    exercise19();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 20:
                do
                {
                    system("cls");

                    exercise20();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 21:
                do
                {
                    system("cls");

                    exercise21();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 22:
                do
                {
                    system("cls");

                    exercise22();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 23:
                do
                {
                    system("cls");

                    exercise23();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 24:
                do
                {
                    system("cls");

                    exercise24();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 25:
                do
                {
                    system("cls");

                    exercise25();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 26:
                do
                {
                    system("cls");

                    exercise26();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 27:
                do
                {
                    system("cls");

                    exercise27();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            case 28:
                do
                {
                    system("cls");

                    exercise28();
                    
                    printf("\n\n\nDo you wanna repeat the exercise (y/n):");
                    fflush(stdin);
                    scanf("%c", &continueExercise);

                    if (continueExercise == 'n' || continueExercise == 'N')
                    {
                        break;
                    }

                    while (continueExercise != 'y' && continueExercise != 'n' && continueExercise != 'Y' && continueExercise != 'N')
                    {
                        printf("\n\nInvalid input. Please enter 'y' or 'n': ");
                        fflush(stdin);
                        scanf("%c", &continueExercise);
                    }
                    
                } while (continueExercise == 'y' || continueExercise == 'Y');

                break;

            default:
                printf("Invalid exercise choice.\n");
                break;
        }

        printf("\n\nDo you want to go back to the start menu (y/n): ");
        fflush(stdin);
        scanf("%c", &comeBackToMenu);

        if (comeBackToMenu == 'n' || comeBackToMenu == 'Y')
        {
            system("exit");
        }

        while (comeBackToMenu != 'y' && comeBackToMenu != 'n' && comeBackToMenu != 'Y' && comeBackToMenu != 'N')
        {
            printf("\n\nInvalid input. Please enter 'y' or 'n': ");
            fflush(stdin);
            scanf("%c", &comeBackToMenu);
        }

    } while (comeBackToMenu == 'y' || comeBackToMenu == 'Y');

    return 0;
}