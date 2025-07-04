#include <iostream>
using namespace std;

int main()
{
	// *3.1
	double a, b, c;
	cout << "Enter a, b, c: ";
	cin >> a >> b >> c;

	double r1 = (-b + pow(b * b - 4 * a * c, 0.5)) / (2 * a);
	double r2 = (-b - pow(b * b - 4 * a * c, 0.5)) / (2 * a);

	if (pow(b * b - 4 * a * c, 0.5) > 0)
		cout << "The roots are " << r1 << " and " << r2 << endl << endl;
	else if (pow(b * b - 4 * a * c, 0.5) == 0)
		cout << r1 << endl << endl;
	else
		cout << "The equation has no real roots." << endl << endl;

	// 3.2
	int int1, int2;
	cout << "Enter two integers: ";
	cin >> int1 >> int2;

	if (int1 % int2 != 0) // (!(int1 % int2 == 0))으로도 쓸 수 있다
		cout << int1 << " is not divisible by " << int2 << endl << endl;
	else
		cout << int1 << " is divisible by " << int2 << endl << endl;

	// *3.3
	// a, b, c 재정의로 컴파일러 오류 뜸 => e, f만 선언
	double d, e, f; 
	cout << "Enter a, b, c, d, e, f: ";
	cin >> a >> b >> c >> d >> e >> f;

	double x = (e * d - b * f) / (a * d - b * c);
	double y = (a * f - e * c) / (a * d - b * c);

	if ((a * d - b * c) == 0)
		cout << "The equation had no solution." << endl << endl;
	else
		cout << "x is " << x << " and y is " << y << endl << endl; 

	// **3.4
	double fahrenheit;
	cout << "Enter a degree in Fahrenheit: ";
	cin >> fahrenheit;

	if (fahrenheit < 30)
		cout << "too cold" << endl << endl;
	else if (fahrenheit > 100)
		cout << "too hot" << endl << endl;
	else
		cout << "just right" << endl << endl;

	// *3.5
	int today, futureday;
	cout << "Enter today's day: ";
	cin >> today;
	cout << "Enter the number of days elapsed since today: ";
	cin >> futureday;

	switch (today)
	{
	    case 0: cout << "Today is Sunday and the future day is ";
			switch (futureday % 7)
			{
			case 0: cout << "Sunday" << endl << endl; break;
			case 1: cout << "Monday" << endl << endl; break;
			case 2: cout << "Tuesday" << endl << endl; break;
			case 3: cout << "Wednesday" << endl << endl; break;
			case 4: cout << "Thursday" << endl << endl; break;
			case 5: cout << "Friday" << endl << endl; break;
			case 6: cout << "Saturday" << endl << endl; break;
			}
			break;
		case 1: cout << "Today is Monday and the future day is ";
			switch (futureday % 7)
			{
			case 0: cout << "Monday" << endl << endl; break;
			case 1: cout << "Tuesday" << endl << endl; break;
			case 2: cout << "Wednesday" << endl << endl; break;
			case 3: cout << "Thursday" << endl << endl; break;
			case 4: cout << "Friday" << endl << endl; break;
			case 5: cout << "Saturday" << endl << endl; break;
			case 6: cout << "Sunday" << endl << endl; break;
			}
			break;
		case 2: cout << "Today is Tuesday and the future day is ";
			switch (futureday % 7)
			{
			case 0: cout << "Tuesday" << endl << endl; break;
			case 1: cout << "Wednesday" << endl << endl; break;
			case 2: cout << "Thursday" << endl << endl; break;
			case 3: cout << "Friday" << endl << endl; break;
			case 4: cout << "Saturday" << endl << endl; break;
			case 5: cout << "Sunday" << endl << endl; break;
			case 6: cout << "Monday" << endl << endl; break;
			}
			break;
		case 3: cout << "Today is Wednesday and the future day is ";
			switch (futureday % 7)
			{
			case 0: cout << "Wednesday" << endl << endl; break;
			case 1: cout << "Thursday" << endl << endl; break;
			case 2: cout << "Friday" << endl << endl; break;
			case 3: cout << "Saturday" << endl << endl; break;
			case 4: cout << "Sunday" << endl << endl; break;
			case 5: cout << "Monday" << endl << endl; break;
			case 6: cout << "Tuesday" << endl << endl; break;
			}
			break;
		case 4: cout << "Today is Thursday and the future day is ";
			switch (futureday % 7)
			{
			case 0: cout << "Thursday" << endl << endl; break;
			case 1: cout << "Friday" << endl << endl; break;
			case 2: cout << "Saturday" << endl << endl; break;
			case 3: cout << "Sunday" << endl << endl; break;
			case 4: cout << "Monday" << endl << endl; break;
			case 5: cout << "Tuesday" << endl << endl; break;
			case 6: cout << "Wednesday" << endl << endl; break;
			}
			break;
		case 5: cout << "Today is Friday and the future day is ";
			switch (futureday % 7)
			{
			case 0: cout << "Friday" << endl << endl; break;
			case 1: cout << "Saturday" << endl << endl; break;
			case 2: cout << "Sunday" << endl << endl; break;
			case 3: cout << "Monday" << endl << endl; break;
			case 4: cout << "Tuesday" << endl << endl; break;
			case 5: cout << "Wednesday" << endl << endl; break;
			case 6: cout << "Thursday" << endl << endl; break;
			}
			break;
		case 6: cout << "Today is Saturday and the future day is ";
			switch (futureday % 7)
			{
			case 0: cout << "Saturday" << endl << endl; break;
			case 1: cout << "Sunday" << endl << endl; break;
			case 2: cout << "Monday" << endl << endl; break;
			case 3: cout << "Tuesday" << endl << endl; break;
			case 4: cout << "Wednesday" << endl << endl; break;
			case 5: cout << "Thursday" << endl << endl; break;
			case 6: cout << "Friday" << endl << endl; break;
			}
			break;
	}

	// *3.6
	cout << "Enter wieght in pounds: ";
	double weight;
	cin >> weight;

	int feet, inches;
	cout << "Enter feet: ";
	cin >> feet; // 1 feet == 12 inches
	cout << "Enter inches: ";
	cin >> inches;

	const double KILOGRAMS_PER_POUND = 0.45359237;
	const double METERS_PER_INCH = 0.0254;

	double weightInKilograms = weight * KILOGRAMS_PER_POUND;
	double heightInMeters = (feet * 12 + inches) * METERS_PER_INCH;
	double bmi = weightInKilograms / (heightInMeters * heightInMeters);

	cout << "BMI is " << bmi << endl;
	if (bmi < 18.5)
		cout << "Underweight" << endl << endl;
	else if (bmi < 25)
		cout << "Normal" << endl << endl;
	else if (bmi < 30)
		cout << "Overweight" << endl << endl;
	else
		cout << "Obese" << endl << endl;

	// *3.7
	int p, q, r;
	cout << "Enter three integers: ";
	cin >> p >> q >> r;

	if (p > q) // 가운데 있는 p를 기준으로 식을 나누었음
		if (q >= r) // 작은 수 q와 남은 r을 비교
			cout << p << " " << q << " " << r << endl << endl;
		else // (q < r)
			if (p >= r)
				cout << p << " " << r << " " << q << endl << endl;
			else // (p < r)
				cout << r << " " << p << " " << q << endl << endl;
	else // (p <= q)
		if (p >= r)
			cout << q << " " << p << " " << r << endl << endl;
		else // (p < r)
			if (q >= r)
				cout << q << " " << r << " " << q << endl << endl;
			else // (q < r)
				cout << r << " " << q << " " << p << endl << endl;

	// *3.8
	double amount;
	cout << "Enter an amount in double, for exmaple 11.56: ";
	cin >> amount;

	int remainingAmount = static_cast<int>(amount * 100);
    
	cout << "Your amount " << amount << " consist of " << endl;

	int numberOfOneDollars = remainingAmount / 100;
	remainingAmount = remainingAmount % 100;
	if (numberOfOneDollars > 1)
		cout << "    " << numberOfOneDollars << " dollars" << endl;
	else if (numberOfOneDollars == 1)
		cout << "    " << numberOfOneDollars << " dollar" << endl;
	
	int numberOfQuarters = remainingAmount / 25;
	remainingAmount = remainingAmount % 25;
	if (numberOfQuarters > 1)
		cout << "    " << numberOfQuarters << " quarters" << endl;
	else if (numberOfQuarters == 1)
		cout << "    " << numberOfQuarters << " quarter" << endl;

    int numberOfDimes = remainingAmount / 10;
	remainingAmount = remainingAmount % 10;
	if (numberOfDimes > 1)
		cout << "    " << numberOfDimes << " dimes" << endl;
	else if (numberOfDimes == 1)
		cout << "    " << numberOfDimes << " dime" << endl;

	int numberOfNickles = remainingAmount / 5;
	remainingAmount = remainingAmount % 5;
	if (numberOfNickles > 1)
		cout << "    " << numberOfNickles << " nickles" << endl;
	else if (numberOfNickles == 1)
		cout << "    " << numberOfNickles << " nickle" << endl;

	int numberOfPennies = remainingAmount;
	if (numberOfPennies > 1)
		cout << "    " << numberOfPennies << " pennies" << endl;
	else if (numberOfPennies == 1)
		cout << "    " << numberOfPennies << " pennie" << endl;

	return 0;
}