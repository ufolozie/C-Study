#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
	// 2.1
	double celsius;
	cout << "Enter a degree in Celsius: ";
	cin >> celsius;

	double fahrenheit = (9.0 / 5) * celsius + 32;
	cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit" << endl << endl;

	// 2.2
	double radius;
	double length;
	cout << "Enter the radius and length of cylinder: ";
	cin >> radius >> length;

	const double PI = 3.14159;
	double area = radius * radius * PI;
	double volume = area * length;
	cout << "The area is " << area << endl;
	cout << "The volume is " << volume << endl << endl;

	// 2.3
	double feet;
	cout << "Enter a value for feet: ";
	cin >> feet;

	double meter = feet * 0.305;
	cout << feet << " feet is " << meter << " meters" << endl << endl;

	// 2.4
	double pound;
	cout << "Enter a number in pounds: ";
	cin >> pound;

	double kilogram = pound * 0.454;
	cout << pound << " pounds is " << kilogram << " kilograms" << endl << endl;

	// *2.5
	double subtotal;
	double gratuityRate;
	cout << "Enter the subtotal and a gratuity rate: ";
	cin >> subtotal >> gratuityRate;

	double gratuity = subtotal * (gratuityRate / 100.0);
	double total = subtotal + gratuity;

	cout << "The gratuity is $" << gratuity << " and total is $" << total << endl << endl;

	// **2.6
	int number;
	cout << "Enter a number between 0 and 1000: ";
	cin >> number;

	int digit1 = number / 1000;
	int remainingnumber1 = number % 1000;
	int digit2 = remainingnumber1 / 100;
	int remainingnumber2 = remainingnumber1 % 100;
	int digit3 = remainingnumber2 / 10;
	int remainingnumber3 = remainingnumber2 % 10;
	int digit4 = remainingnumber3 / 1;

	int a = number / 1000;
	int b = (number % 1000) / 100;
	int c = ((number % 1000) % 100) / 10;
	int d = (((number % 1000) % 100) % 10) / 1;

	cout << digit1 + digit2 + digit3 + digit4 << endl;
	cout << a + b + c + d << endl << endl;

	// *2.7
	cout << "Enter the number of minutes: ";
	int number;
	cin >> number;

	int year = number / (60 * 24 * 365);
	int day = (number % (60 * 24 * 365)) / (60 * 24);

	cout << number << " minutes is approximately " << year << " years and " << day << " days" << endl << endl;

	// *2.8
	int totalSeconds = time(0);

	cout << "Enter the time zone offset to GMT: "; // time zone offset = 시차. 우리나라 표준 시간대인 KST는 GMT보다 9시간 빠르므로 콘솔창에 9를 입력하면 현재 시각이 나옴
	int timeZone;
	cin >> timeZone;
	totalSeconds += timeZone * 60 * 60;

	int currentSecond = totalSeconds % 60;
	int totalMinutes = totalSeconds / 60;
	int currentMinute = totalMinutes % 60;
	int totalHours = totalMinutes / 60;
	int currentHour = totalHours % 24;

	cout << "Current time is " << currentHour << ":"
		<< currentMinute << ":" << currentSecond << endl << endl;

	// 2.9
	cout << "Enter v0, v1, and t: ";
	double v0, v1, t;
	cin >> v0 >> v1 >> t;

	double a = (v1 - v0) / t;
	cout << "The average acceleration is " << a << endl << endl;

	// 2.10
	cout << "Enter the amount of water in kilograms: ";
	double mass;
	cin >> mass;
	cout << "Enter the initial temperature: ";
	double initialTemp;
	cin >> initialTemp;
	cout << "Enter the final temperature: ";
	double finalTemp;
	cin >> finalTemp;

	double energy = mass * (finalTemp - initialTemp) * 4184;
	cout << "The energy needed is " << energy << endl << endl;

	// 2.11
	int currentPopulation = 312032486;
	double birth = (1 / 7.0) * 60 * 60 * 24 * 365;
	double death = (1 / 13.0) * 60 * 60 * 24 * 365;
	double emigration = (1 / 45.0) * 60 * 60 * 24 * 365;
	double variation = birth - death + emigration;

	int year;
	cout << "Enter the number of years: ";
	cin >> year;

	int i = 0;
	double futurePopulation = currentPopulation;
	while (i < year)
	{
		futurePopulation = currentPopulation + variation;
		currentPopulation = futurePopulation;
		i++;
	}

	cout << "The population in " << year << " years is " << static_cast<int>(futurePopulation) << endl;

	// 2.12
	cout << "Enter speed and acceleration: ";
	double velocity, acceleration;
	cin >> velocity >> acceleration;

	double length = pow(velocity, 2) / (2 * acceleration);
	cout << "The minimum runway length for this airplane is " << length << endl << endl;

	// **2.13
	double monthlySavingAmount;
	cout << "Enter the monthly saving amount: ";
	cin >> monthlySavingAmount;

	double annualInterestRate = 5;
	double monthlyInterestRate = (annualInterestRate / 100.0) / 12;
	double firstMonth = monthlySavingAmount + monthlySavingAmount * monthlyInterestRate;
	double secondMonth = (monthlySavingAmount + firstMonth) * (1 + monthlyInterestRate);
	double thirdMonth = (monthlySavingAmount + secondMonth) * (1 + monthlyInterestRate);
	double forthMonth = (monthlySavingAmount + thirdMonth) * (1 + monthlyInterestRate);
	double fifthMonth = (monthlySavingAmount + forthMonth) * (1 + monthlyInterestRate);
	double sixthMonth = (monthlySavingAmount + fifthMonth) * (1 + monthlyInterestRate);

	cout << "After the sixth month, the account value is $" << sixthMonth << endl << endl;

	// *2.14
	cout << "Enter weight in pounds: ";
	double pound;
	cin >> pound;

	cout << "Enter height in inches: ";
	double inches;
	cin >> inches;

	double weight = pound * 0.45359237; // weight in kg, 1 pound = 0.45359237kg
	double height = inches * 0.0254; // height in m, 1 inch = 0.0254m

	double bmi = weight / (height * height);

	cout << "BMI is " << fixed << setprecision(4) << bmi << endl;
	
	// 2.15
	cout << "Enter x1 and y1: ";
	double x1, y1;
	cin >> x1 >> y1;

	cout << "Enter x2 and y2: ";
	double x2, y2;
	cin >> x2 >> y2;

	double distance = pow(((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)), 0.5);

	cout << "The distance between the two points is " << distance << endl;

	// 2.16
	cout << "Enter the side: ";
	double side;
	cin >> side;

	double area = (3 * pow(3, 0.5)) / 2 * (side * side);

	cout << "The area of the hexagon is " << area << endl;

	// *2.17


	return 0;
}