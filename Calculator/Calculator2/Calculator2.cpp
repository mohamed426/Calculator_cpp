#include<bits/stdc++.h>
using namespace std;

int fact(int n);
int fib(int f);

bool saveout();

#define mul(x,y) (x * y)
#define sum(x,y) (x + y)
#define sub(x,y) (x - y)
#define div(x,y) (x / y)

fstream out;

int main()
{
	system("color 0A");
	string choise, c;
	char esc;
	double x, y, z, a;
	do
	{
		cout << "Please choose the number of operation you want :- " << endl;
		for (int i = 0; i < 40; i++)
		{
			cout << ".";
		}
		cout << endl;
		cout << "1- Addtion" << endl;
		cout << "2- subtraction" << endl;
		cout << "3- Multiplication" << endl;
		cout << "4- Division" << endl;
		cout << "5- The area and perimeter of the rectangle" << endl;
		cout << "6- The area and perimeter of the square" << endl;
		cout << "7- The area and perimeter of the circle" << endl;
		cout << "8- The area of the triangle" << endl;
		cout << "9- The perimeter of the triangle " << endl;
		cout << "a- The logical operators" << endl;
		cout << "b- Total electrical resistance" << endl;
		cout << "c- Total Capacitor Capacity" << endl;
		cout << "d- Temperature" << endl;
		cout << "e- Modulus" << endl;
		cout << "f- Factorial of number" << endl;
		cout << "g- Fibionatshi of number" << endl;
		for (size_t i = 0; i < 40; i++)
		{
			cout << ".";
		}
		cout << endl;
		getline(cin, choise);
		if (choise == "1")
		{
			cout << "you select addtion" << endl;
			cout << "please enter the value of 1st number" << endl;
			cin >> x;
			cout << "please enter the value of 2nd number" << endl;
			cin >> y;
			cout << "the addtion = " << sum(x, y);
			cout << endl;
			if (saveout())
			{
				out << "the addtion = " << sum(x, y);
				out << endl;
				out.close();
			}
		}
		else if (choise == "2")
		{
			cout << "you select subtraction" << endl;
			cout << "please enter the value of 1st number" << endl;
			cin >> x;
			cout << "please enter the value of 2nd number" << endl;
			cin >> y;
			cout << "the subtraction = " << sub(x, y);
			cout << endl;
			if (saveout())
			{
				out << "the subtraction = " << sub(x, y);
				out << endl;
				out.close();
			}
		}
		else if (choise == "3")
		{
			cout << "you select multiplication" << endl;
			cout << "please enter the value of 1st number" << endl;
			cin >> x;
			cout << "please enter the value of 2nd number" << endl;
			cin >> y;
			cout << "the Multiplication = " << mul(x, y);
			cout << endl;
			if (saveout())
			{
				out << "the Multiplication = " << mul(x, y);
				out << endl;
				out.close();
			}
		}
		else if (choise == "4")
		{
			cout << "you select division " << endl;
			cout << "please enter the value of 1st number" << endl;
			cin >> x;
			cout << "please enter the value of 2nd number" << endl;
			cin >> y;
			cout << "the Division = " << div(x, y);
			cout << endl;
			if (saveout())
			{
				out << "the Division = " << div(x, y);
				out << endl;
				out.close();
			}
		}
		else if (choise == "5")
		{
			cout << "you select the area and perimeter of the rectangle " << endl;
			cout << "please enter length of rectangle" << endl;
			cin >> x;
			cout << "please enter Width of the rectangle" << endl;
			cin >> y;
			cout << "Rectangle area = " << mul(x, y);
			cout << endl;
			cout << "Perimeter of rectangle = " << 2 * sum(x, y);
			cout << endl;
			if (saveout())
			{
				out << "Rectangle area = " << mul(x, y);
				out << endl;
				out << "Perimeter of rectangle = " << 2 * sum(x, y);
				out << endl;
				out.close();
			}
		}
		else if (choise == "6")
		{
			cout << "you select the area and perimeter of the square" << endl;
			cout << "please enter square side length" << endl;
			cin >> x;
			cout << " Square area = " << pow(x, 2) << endl;
			cout << "Perimeter of the square = " << mul(x, 4);
			cout << endl;
			if (saveout())
			{
				out << " Square area = " << pow(x, 2) << endl;
				out << "Perimeter of the square = " << mul(x, 4);
				out << endl;
				out.close();
			}
		}
		else if (choise == "7")
		{
			cout << "you select the area and perimeter of the circle" << endl;
			cout << "please enter radius of the circle" << endl;
			cin >> x;
			cout << " Circle area = " << ((3.14) * pow(x, 2)) << endl;
			cout << "Perimeter of the circle = " << (2 * (3.14) * x) << endl;
			if (saveout())
			{
				out << " Circle area = " << ((3.14) * pow(x, 2)) << endl;
				out << "Perimeter of the circle = " << (2 * (3.14) * x) << endl;
				out.close();
			}
		}
		else if (choise == "8")
		{
			cout << "you select the area of the triangle" << endl;
			cout << "please enter triangle's base" << endl;
			cin >> x;
			cout << "please enter height of triangle" << endl;
			cin >> y;
			cout << "triangle area = " << (0.5 * x) * y << endl;
			if (saveout())
			{
				out << "triangle area = " << (0.5 * x) * y << endl;
				out.close();
			}
		}
		else if (choise == "9")
		{
			cout << "you select the perimeter of the triangle" << endl;
			cout << "Please enter the value of three sides of the triangle" << endl;
			cout << "Enter 1st Number" << endl;
			cin >> x;
			cout << "Enter 2nd Number" << endl;
			cin >> y;
			cout << "Enter 3rd Number" << endl;
			cin >> z;
			cout << "the perimeter of the triangle = " << x + y + z << endl;
			if (saveout())
			{
				out << "the perimeter of the triangle = " << x + y + z << endl;
				out.close();
			}
		}
		else if (choise == "a")
		{
			cout << "you select the logical operators" << endl;
			cout << "please choose what gate you want :-" << endl;
			for (size_t i = 0; i < 20; i++)
			{
				cout << ".";
			}
			cout << endl;
			cout << "1-and\n2-or\n3-not\n4-xor\n5-nand\n6-xnor\n7-nor" << endl;
			for (size_t i = 0; i < 20; i++)
			{
				cout << ".";
			}
			cout << endl;;
			getline(cin, c);
			if (c == "1")
			{
				cout << "you select And" << endl;
				cout << "please enter the value of 1st number" << endl;
				cin >> x;
				cout << "please enter the value of 2nd number" << endl;
				cin >> y;
				cout << "the result = " << (x && y) << endl;
				if (saveout())
				{
					out << "the result = " << (x && y) << endl;
					out.close();
				}
			}

			else if (c == "2")
			{
				cout << "you select Or" << endl;
				cout << "please enter the value of 1st number" << endl;
				cin >> x;
				cout << "please enter the value of 2nd number" << endl;
				cin >> y;
				cout << "the result = " << (x || y) << endl;
				if (saveout())
				{
					out << "the result = " << (x || y) << endl;
					out.close();
				}
			}
			else if (c == "3")
			{
				cout << "you select Not" << endl;
				cout << "please enter the value of number" << endl;
				cin >> x;
				cout << "the result = " << (!x) << endl;
				if (saveout())
				{
					out << "the result = " << (!x) << endl;
					out.close();
				}
			}
			else if (c == "4")
			{
				cout << "you select Xor" << endl;
				cout << "please enter the value of number" << endl;
				cin >> x;
				cout << "please enter the value of 2nd number" << endl;
				cin >> y;
				cout << "the result = " << ((x && !y) || (!x && y)) << endl;
				if (saveout())
				{
					out << "the result = " << ((x && !y) || (!x && y)) << endl;
					out.close();
				}
			}
			else if (c == "5")
			{
				cout << "you select Nand" << endl;
				cout << "please enter the value of number" << endl;
				cin >> x;
				cout << "please enter the value of 2nd number" << endl;
				cin >> y;
				cout << "the result = "<<!(x && y) << endl;
				if (saveout())
				{
					out << "the result = " << !(x && y) << endl;
					out.close();
				}
			}
			else if (c == "6")
			{
				cout << "you select Xnor" << endl;
				cout << "please enter the value of number" << endl;
				cin >> x;
				cout << "please enter the value of 2nd number" << endl;
				cin >> y;
				cout << "the result = "<< !((x && !y) || (!x && y)) << endl;
				if (saveout())
				{
					out << "the result = " << !((x && !y) || (!x && y)) << endl;
					out.close();
				}
			}
			else if (c == "7")
			{
				cout << "you select nor" << endl;
				cout << "please enter the value of number" << endl;
				cin >> x;
				cout << "please enter the value of 2nd number" << endl;
				cin >> y;
				cout << "the result = "<<!(x||y) << endl;
				if (saveout())
				{
					out << "the result = " << !(x || y) << endl;
					out.close();
				}
			}
			else
			{
				cout << "wrong number" << endl;
			}
		}
		else if (choise == "b")
		{
			cout << "you select total electrical resistance" << endl;
			cout << "Please choose the number of operation you want :-" << endl;
			for (size_t i = 0; i < 30; i++)
			{
				cout << ".";
			}
			cout << endl;
			cout << "1-Series" << endl;
			cout << "2-Parallel" << endl;
			for (size_t i = 0; i < 30; i++)
			{
				cout << ".";
			}
			cout << endl;
			getline(cin, c);
			if (c == "1")
			{
				cout << "you select series" << endl;
				cout << "Please enter the value of resistances " << endl;
				cout << "Enter 1st Number" << endl;
				cin >> x;
				cout << "Enter 2nd Number" << endl;
				cin >> y;
				cout << "Enter 3rd Number" << endl;
				cin >> z;
				cout << "The result = " << x + y + z << " ohm" << endl;
				if (saveout())
				{
					out << "The result = " << x + y + z << " ohm" << endl;
					out.close();
				}
			}
			else if (c == "2")
			{
				cout << "you select parallel" << endl;
				cout << "Please enter the value of resistances " << endl;
				cout << "Enter 1st Number" << endl;
				cin >> x;
				cout << "Enter 2nd Number" << endl;
				cin >> y;
				cout << "Enter 3rd Number" << endl;
				cin >> z;
				a = (1 / x) + (1 / y) + (1 / z);
				cout << "The result = " << 1 / a << " ohm" << endl;
				if (saveout())
				{
					out << "The result = " << 1 / a << " ohm" << endl;
					out.close();
				}
			}
			else
			{
				cout << "wrong number" << endl;
			}
		}
		else if (choise == "c")
		{
			cout << "you select total capacitor capacity" << endl;
			cout << "Please choose the number of operation you want :-" << endl;
			for (size_t i = 0; i < 30; i++)
			{
				cout << ".";
			}
			cout << endl;
			cout << "1-Series" << endl;
			cout << "2-Parallel" << endl;
			for (size_t i = 0; i < 30; i++)
			{
				cout << ".";
			}
			cout << endl;
			getline(cin, c);
			if (c == "1")
			{
				cout << "you select series" << endl;
				cout << "Please enter the value of capacitances " << endl;
				cout << "Enter 1st Number" << endl;
				cin >> x;
				cout << "Enter 2nd Number" << endl;
				cin >> y;
				cout << "Enter 3rd Number" << endl;
				cin >> z;
				a = (1 / x) + (1 / y) + (1 / z);
				cout << "The result = " << 1 / a << " farad" << endl;
				if (saveout())
				{
					out << "The result = " << 1 / a << " farad" << endl;
					out.close();
				}
			}
			else if (c == "2")
			{
				cout << "you select parallel" << endl;
				cout << "Please enter the value of capacitances " << endl;
				cout << "Enter 1st Number" << endl;
				cin >> x;
				cout << "Enter 2nd Number" << endl;
				cin >> y;
				cout << "Enter 3rd Number" << endl;
				cin >> z;
				cout << "The result = " << x + y + z << " farad" << endl;
				if (saveout())
				{
					out << "The result = " << x + y + z << " farad" << endl;
					out.close();
				}
			}
			else
			{
				cout << "wrong number" << endl;
			}
		}
		else if (choise == "d")
		{
			cout << "you select temperature" << endl;
			cout << "please choose temperature type:-" << endl;
			for (size_t i = 0; i < 15; i++)
			{
				cout << ".";
			}
			cout << endl;
			cout << "1- C --> F" << endl;
			cout << "2- F --> C" << endl;
			for (size_t i = 0; i < 15; i++)
			{
				cout << ".";
			}
			cout << endl;
			getline(cin, c);
			if (c == "1")
			{
				cout << "please enter the temperature" << endl;
				cin >> y;
				cout << "The result = " << ((1.8 * y) + 32) << " F" << endl;
				if (saveout())
				{
					out << "The result = " << ((1.8 * y) + 32) << " F" << endl;
					out.close();
				}
			}
			else if (c == "2")
			{
				cout << "please enter the temperature" << endl;
				cin >> y;
				cout << "The result = " << ((y - 32) / 1.8) << " C" << endl;
				if (saveout())
				{
					out << "The result = " << ((y - 32) / 1.8) << " C" << endl;
					out.close();
				}	
			}
			else
			{
				cout << "wrong number" << endl;
			}
		}
		else if (choise == "e")
		{
			cout << "you select modulus" << endl;
			cout << "please enter the value of 1st number " << endl;
			cin >> x;
			cout << "please enter the value of 2nd number " << endl;
			cin >> y;
			cout << "Modulus = " << fmod(x, y) << endl;
			if (saveout())
			{
				out << "Modulus = " << fmod(x, y) << endl;
				out.close();
			}
		}
		else if (choise == "f")
		{
			cout << "you select factorial of number" << endl;
			int n;
			cout << "Enter a positive integer: ";
			cin >> n;
			cout << "Factorial of !" << n << " = " << fact(n) << endl;
			if (saveout())
			{
				out << "Factorial of !" << n << " = " << fact(n) << endl;
				out.close();
			}
		}
		else if (choise == "g")
		{
			cout << "you select fibionatshi" << endl;
			int f;
			cout << "please enter a number" << endl;
			cin >> f;
			cout << "fibionatshi of number = " << fib(f) << endl;
			if (saveout())
			{
				out << "fibionatshi of number = " << fib(f) << endl;
				out.close();
			}
		}
		else
		{
			cout << "WRONG NUMBER" << endl;
			cout << endl;
		}
		cout << "To exit press ESC , to continue press any key  " << endl;
	} while ((esc = _getch()) != 27);
	return 0;
}

int fact(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n * fact(n - 1);
}
int fib(int f)
{
	if (f == 0 || f == 1)
		return f;
	else
		return fib(f - 1) + fib(f - 2);
}
bool saveout()
{
	char save;
	cout << "Do You Want To save The Final Output As File ? (y/ n)" << endl;
	cin >> save;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	if (save == 'y' || save == 'Y')
	{
		out.open("Final output.txt", ios::app);
		cout << "FILE SAVED" << endl;
		cout << endl;
		return true;
	}
	else if (save == 'n' || save == 'N')
	{
		cout << "FILE UNSAVED" << endl;
		cout << endl;
		return false;
	}
	cout << "Invalid input. Please enter 'y' or 'n'." << endl;
	return saveout();
}