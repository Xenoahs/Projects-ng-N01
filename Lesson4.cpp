#include <iostream>
#include <windows.h>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

void canvas();
void gotoxy(short x, short y);
void earlBox();
void maximizeWindow();
void quizTime();

char str[100];

int main()
{
	maximizeWindow();
	/*char intro[100] = {"Module 4 - Basic Input and Output"};
	
	canvas();
	
	gotoxy(68, 10); 
	for(int x = 0; x < strlen(intro); x++)
	{
		cout << intro[x];
		Sleep(100);
		
	}
	
	gotoxy(50, 14); cout << "Objectives: ";
	gotoxy(50, 17); cout << "\t 1.) Utilize Basic Input and Output Programs in creating C++ programs."; cin.get();
	gotoxy(50, 19); cout << "\t 2.) Apply Different Formatting Techniques in the Output of a C++ Program."; cin.get();
	gotoxy(50, 21); cout << "\t 3.) Use Different Mathematical Library Functions in Solving Problems."; cin.get();
	
	system("cls");
	
	canvas();
	earlBox();
	
	gotoxy(7, 14); cout << "In C++, input and output (I/O) operators are used to take input and ";
	gotoxy(7, 16); cout << "display output."; cin.get();
	gotoxy(7, 18); cout << "The operator used for taking the input is called the extraction "; gotoxy(100, 18); cout << "cin >> "; cin.get();
	gotoxy(7, 20); cout << "While the operator used for displaying the output is known as the ";
	gotoxy(7, 22); cout << "insertion "; gotoxy(100, 22); cout << "cout <<"; cin.get();
	
	gotoxy(7, 24); cout << "The commands cout or cin wouldn't work without the header iostream"; 
	gotoxy(7,26); cout << "iostream = Input/Output Stream"; gotoxy(100, 26); cout << "#include <iostream>"; cin.get();
	
	system("cls");
	
	canvas();
	earlBox();
	
	gotoxy(10, 19); cout << "Insertion Operators are commonly known as the output operator."; gotoxy(100, 19); cout << " << "; cin.get();
	gotoxy(10, 21); cout << "The C++ stream object defined to access the display is cout."; gotoxy(100, 21); cout << " cout "; cin.get();
	gotoxy(10, 23); cout << "For output operations, cout is used together with the " ; 
	gotoxy(10, 25); cout << "insertion operator.";  gotoxy(100, 25); cout << " cout <<"; cin.get();
	
	system("cls");
	
	canvas();
	earlBox();
	
	gotoxy(35, 20); cout << "Examples: "; cin.get();
	
	gotoxy(94, 19); cout << "cout << \"We will pass!\" << endl << endl;"; cin.get(); 
	gotoxy(94, 21); cout << "cout << \"201911464\" << endl << endl;"; cin.get();
	gotoxy(94, 23); cout << "cout << \"Z\" << endl << endl;"; cin.get();
	
	
	gotoxy(50, 39); cout << "We will pass!"; cin.get();
	gotoxy(50, 41); cout << "201911464"; cin.get();
	gotoxy(50, 43); cout << "Z"; cin.get();
	
	system("cls");
	
	canvas();
	earlBox();
	
	gotoxy(7, 14); cout << "Multiple insertion operations may be chained in a single statement"; cin.get();
	gotoxy(35, 20); cout << "Examples: "; cin.get();
	
	gotoxy(94, 19); cout << "cout << \"This is a \" << \"tutorial for \" << \"you\" << endl << endl;"; cin.get();
	gotoxy(94, 21); cout << "cout << \"This is a \" << \"tutorial for \" << \"all\" << endl << endl;"; cin.get();
	
	gotoxy(50, 39); cout << "This is a tutorial for you"; cin.get();
	gotoxy(50, 41); cout << "This is a tutorial for all"; cin.get();
	
	canvas();
	earlBox();
	
	gotoxy(7, 14); cout << "Chaining insertions is especially useful to mix literals and ";
	gotoxy(7, 16); cout << "variables in a single statement."; cin.get();
	gotoxy(35, 20); cout << "Examples: "; cin.get();
	
	gotoxy(94, 18); cout << "int x = 39;"; cin.get();
	gotoxy(94, 20); cout << "int zipcode = 2030;"; cin.get();
	gotoxy(94, 22); cout << "cout << \"My name is Earl, \" << \"I am age \" << x << \"and my ";
	gotoxy(94, 24); cout << "zipcode is \" << zipcode;"; cin.get();
	
	gotoxy(50, 41); cout << "My name is Earl, I am age 39 and my zipcode is 2030"; cin.get(); 
	
	system("cls");
	
	canvas();
	earlBox();
	
	gotoxy(10, 14); cout << "cout DOES NOT automatically add line breaks at the end."; cin.get();
	gotoxy(35, 20); cout << "Examples: "; cin.get();
	
	gotoxy(94,19); cout << "cout << \"This is a sentence.\";"; cin.get();
	gotoxy(94, 21); cout << "cout << \"This is another sentence\";"; cin.get();
	
	gotoxy (50, 43); cout << "This is a sentence.This is another sentence."; cin.get();
	
	system("cls");
	
	canvas();
	earlBox();
	
	gotoxy(8, 14); cout << "To insert a line break, a new-line character shall be inserted."; cin.get();
	gotoxy(8, 16); cout << "In C++, a new-line character is \\n"; cin.get();
	gotoxy(35, 20); cout << "Examples: "; cin.get();
	
	gotoxy(94, 19); cout << "cout << \"First Sentence.\\n\";"; cin.get();
	gotoxy(94, 21); cout << "cout << \"2nd Sentence\\n3rd Sentence\";"; cin.get();
	
	gotoxy(50, 40); cout << "First Sentence."; cin.get();
	gotoxy(50, 41); cout << "2nd Sentence"; cin.get();
	gotoxy(50, 42); cout << "3rd Sentence"; cin.get();
	
	system("cls");
	
	canvas();
	earlBox();
	
	gotoxy(10, 19); cout << "Extraction Operators are commonly known as the input operator."; gotoxy(100, 19); cout << " >> "; cin.get();
	gotoxy(10, 21); cout << "The C++ stream object defined to access the input is cin."; gotoxy(100, 21); cout << " cin "; cin.get();
	gotoxy(10, 23); cout << "For input operations, cout is used together with the " ; 
	gotoxy(10, 25); cout << "extraction operator.";  gotoxy(100, 25); cout << " cin >>"; cin.get();

	system("cls");
	
	canvas();
	earlBox();
	
	gotoxy(35, 20); cout << "Examples: "; cin.get();
	
	gotoxy(94, 19); cout << "int age;"; cin.get();
	gotoxy(94, 21); cout << "cin >> age;"; cin.get();
	
	gotoxy(14, 25); cout << "The first statement declares a variable."; cin.get();
	gotoxy(14, 27); cout << "The second one waits for an input from the user."; cin.get();
	
	system("cls");

	canvas();
	earlBox();
	
	gotoxy(35, 20); cout << "Examples: "; cin.get();
	
	gotoxy(94, 18); cout << "int age;"; cin.get();
	gotoxy(94, 20); cout << "Enter your age: ;"; cin.get();
	gotoxy(94, 22); cout << "cin >> age;"; cin.get();
	gotoxy(94, 24); cout << "cout << \"Your age is: \" << age;"; cin.get();
	
	int age;
	gotoxy(50, 40); cout << "Enter your age: ";
	gotoxy(66, 40); cin >> age;
	gotoxy(50, 42); cout << "Your age is: " << age;


	canvas();
	earlBox();
	
	gotoxy(20, 14); cout << "pow() = Raise to power."; cin.get();
	gotoxy(20, 16); cout << "sqrt() = Compute square root."; cin.get();
	gotoxy(20, 18); cout << "These functions are under the <math.h> header."; cin.get();
	
	gotoxy(115, 14); cout << "pow(base, exponent)"; cin.get();
	gotoxy(115, 16); cout << "sqrt(variable)"; cin.get();
	gotoxy(115, 18); cout << "#include <iostream>";
	gotoxy(115, 19); cout << "#include <math.h>;
	
	canvas();
	earlBox();

	gotoxy(35, 20); cout << "Examples: "; cin.get();
	
	gotoxy(94, 15); cout << "int a, p;"; cin.get();
	gotoxy(94, 16); cout << "float sq;"; cin.get();
	gotoxy(94, 18); cout << "cout << \"Input a number: \";"; cin.get();
	gotoxy(94, 20); cout << "cin >> a;"; cin.get();
	gotoxy(94, 21); cout << "p = pow(a, 2)"; cin.get();
	gotoxy(94, 22); cout << "sq = sqrt(a)"; cin.get();
	gotoxy(94, 25); cout << "cout << a << \" raised to 2 is \" << p << endl << endl;"; cin.get();
	gotoxy(94, 26); cout << "cout << \\n\"The square root of \" << a << \" is \" << sq << endl << endl;"; cin.get();
	
	int a, p;
	float sq;
	
	gotoxy(50, 40); cout << "Input a number: ";
	gotoxy(66, 40); cin >> a;
	
	p = pow(a, 2);
	sq = sqrt(a);
	
	gotoxy(50, 42); cout << a << " raised to 2 is " << p;
	gotoxy(50, 44); cout << "The square root of " << a << " is " << sq;


	canvas();
	earlBox();
	
	gotoxy(15, 14); cout << "floor() = Round down value."; gotoxy(115, 14); cout << "floor(variable)"; cin.get();
	gotoxy(15, 16); cout << "ceil() = Round up value."; gotoxy(115, 16); cout << "ceil(variable)"; cin.get();
	gotoxy(15, 18); cout << "These functions are under the <math.h> header."; gotoxy(115, 18); cout << "#include <iostream>"; gotoxy(115, 19); cout << "#include <math.h>"; cin.get();
	
	canvas();
	earlBox();

	gotoxy(35, 20); cout << "Examples: "; cin.get();
	
	gotoxy(94, 19); cout << "float x = 2.3;"; cin.get();
	gotoxy(94, 21); cout << "cout << \"Floor is: \" << floor(x) << endl << endl;"; cin.get();
	gotoxy(94, 23); cout << "cout << \"Ceiling is: \" << ceil(x) << endl << endl;"; cin.get();
	
	float x = 2.3;
	
	gotoxy(50, 40); cout << "Floor is: " << floor(x); cin.get();
	gotoxy(50, 42); cout << "Ceiling is: " << ceil(x); cin.get();

	
	canvas();
	earlBox();
	
	gotoxy(15, 14); cout << "trunc() = Rounds removes digits after decimal point."; gotoxy(120, 14); cout << "trunc(variable)"; cin.get();
	gotoxy(15, 16); cout << "round() = Rounds given number to the closest integer."; gotoxy(120, 16); cout << "round(variable)"; cin.get();
	gotoxy(15, 18); cout << "These functions are under the <math.h> header."; gotoxy(120, 18); cout << "#include <iostream>"; gotoxy(120, 19); cout << "#include <math.h>"; cin.get();
	
	canvas();
	earlBox();

	gotoxy(35, 20); cout << "Examples: "; cin.get();
	
	gotoxy(94, 18); cout << "double x = 1.411, y = 1.500, z = 1.611;"; cin.get();
	gotoxy(94, 20); cout << "cout << trunc(x) << endl;"; cin.get();
	gotoxy(94, 22); cout << "cout << trunc(y) << endl;"; cin.get();
	gotoxy(94, 24); cout << "cout << trunc(z) << endl;"; cin.get();
	
	double x = 1.411, y = 1.500, z = 1.611;
	
	gotoxy(50, 40); cout << trunc(x); cin.get();
	gotoxy(50, 42); cout << trunc(y); cin.get();
	gotoxy(50, 44); cout << trunc(z); cin.get();
	
	canvas();
	earlBox();

	gotoxy(35, 20); cout << "Examples: "; cin.get();
	
	gotoxy(94, 18); cout << "double x = 1.411, y = 1.500, z = 1.611;"; cin.get();
	gotoxy(94, 20); cout << "cout << round(x) << endl;"; cin.get();
	gotoxy(94, 22); cout << "cout << round(y) << endl;"; cin.get();
	gotoxy(94, 24); cout << "cout << round(z) << endl;"; cin.get();
	
	gotoxy(50, 40); cout << round(x); cin.get();
	gotoxy(50, 42); cout << round(y); cin.get();
	gotoxy(50, 44); cout << round(z); cin.get();


	canvas();
	earlBox();
	
	gotoxy(10, 14); cout << "setprecision() = Rounds removes digits after decimal point."; gotoxy(118, 14); cout << "setprecision(value)"; cin.get();
	gotoxy(10, 16); cout << "setprecision when used with fixed provides precision to decimal";
	gotoxy(10, 18); cout << "points."; gotoxy(118, 18); cout << "cout << fixed << setprecision(0);"; cin.get();
	gotoxy(15, 20); cout << "This function is under the <iomanip> header."; gotoxy(118, 20); cout << "#include <iostream>"; gotoxy(118, 21); cout << "#include <iomanip>"; cin.get();
	
	canvas();
	earlBox();

	gotoxy(35, 20); cout << "Examples: "; cin.get();
	
	gotoxy(94, 16); cout << "double pi = 3.14159, npi = -3.14159;"; cin.get();
	gotoxy(94, 18); cout << "cout << fixed << setprecision(0) << pi << endl << endl;"; cin.get();
	gotoxy(94, 19); cout << "cout << fixed << setprecision(1) << pi << endl << endl;"; cin.get();
	gotoxy(94, 20); cout << "cout << fixed << setprecision(2) << pi << endl << endl;"; cin.get();
	gotoxy(94, 21); cout << "cout << fixed << setprecision(3) << pi << endl << endl;"; cin.get();
	gotoxy(94, 22); cout << "cout << fixed << setprecision(4) << pi << endl << endl;"; cin.get();
	gotoxy(94, 23); cout << "cout << fixed << setprecision(5) << pi << endl << endl;"; cin.get();
	gotoxy(94, 24); cout << "cout << fixed << setprecision(6) << pi << endl << endl;"; cin.get();
	
	double pi = 3.14159;
	gotoxy(50, 35); cout << fixed << setprecision(0) << pi;
	gotoxy(50, 37); cout << fixed << setprecision(1) << pi;
	gotoxy(50, 39); cout << fixed << setprecision(2) << pi;
	gotoxy(50, 41); cout << fixed << setprecision(3) << pi;
	gotoxy(50, 43); cout << fixed << setprecision(4) << pi;
	gotoxy(50, 45); cout << fixed << setprecision(5) << pi;
	gotoxy(50, 47); cout << fixed << setprecision(6) << pi;
*/
	quizTime();
}


void quizTime()
{
	canvas();
	
	int correct = 0, wrong = 0, total = 0;
	string answer;
	
	gotoxy(48, 11); cout << "For your quiz, kindly fill in the following:";
	
	gotoxy(48, 13); cout << " ====================================================================== ";
	gotoxy(48, 14); cout << "|                                                                      |";
	gotoxy(48, 15); cout << "|                                                                      |";
	gotoxy(48, 16); cout << "|                                                                      |";
	gotoxy(48, 17); cout << "|                                                                      |";
	gotoxy(48, 18); cout << "|                                                                      |";
	gotoxy(48, 19); cout << "|                                                                      |";
	gotoxy(48, 20); cout << "|                                                                      |";
	gotoxy(48, 21); cout << "|                                                                      |";
	gotoxy(48, 22); cout << "|                                                                      |";
	gotoxy(48, 23); cout << "|                                                                      |";
	gotoxy(48, 24); cout << "|                                                                      |";
	gotoxy(48, 25); cout << "|                                                                      |";
	gotoxy(48, 26); cout << "|                                                                      |";
	gotoxy(48, 27); cout << "|                                                                      |";
	gotoxy(48, 28); cout << "|                                                                      |";
	gotoxy(48, 29); cout << "|                                                                      |";
	gotoxy(48, 30); cout << "|                                                                      |";
	gotoxy(48, 31); cout << "|                                                                      |";
	gotoxy(48, 32); cout << "|                                                                      |";
	gotoxy(48, 33); cout << "|                                                                      |";
	gotoxy(48, 34); cout << "|                                                                      |";
	gotoxy(48, 35); cout << "|                                                                      |";
	gotoxy(48, 36); cout << "|                                                                      |";
	gotoxy(48, 37); cout << "|                                                                      |";
	gotoxy(48, 38); cout << "|                                                                      |";
	gotoxy(48, 39); cout << "|                                                                      |";
	gotoxy(48, 40); cout << " ====================================================================== ";
	
	gotoxy(50, 15); cout << "#include <            >";
	gotoxy(50, 16); cout << "#include <            >";
	gotoxy(50, 17); cout << "#include <            >";
		
	gotoxy(50, 19); cout << "int x, y";
	gotoxy(50, 21); cout << "cout __ \"Hello World!\" << endl << endl;";
	
	gotoxy(50, 23); cout << "cout __ \"Enter a number: \";";
	gotoxy(50, 24); cout << "cin __ x;" << "\t\t\/\/ The user entered 10";
	gotoxy(50, 25); cout << "cout __ \"Enter another number: \";";
	gotoxy(50, 26); cout << "cin __ y;" << "\t\t\/\/ The user entered 15";
	
	gotoxy(50, 28); cout << "___(x,2);" << "\t\t\/\/ \"Powers\" up the number.";
	gotoxy(50, 29); cout << "____(y);" << "\t\t\/\/ Opposite of the previous line.";
	
	gotoxy(62, 15); cin >> answer;
		if(answer == "iomanip" || answer == "iostream" || answer == "math.h")
			correct++;
		else
			wrong++;
	gotoxy(62, 16); cin >> answer;
		if(answer == "iomanip" || answer == "iostream" || answer == "math.h")
			correct++;
		else
			wrong++;
	gotoxy(62, 17); cin >> answer;
		if(answer == "iomanip" || answer == "iostream" || answer == "math.h")
			correct++;
		else
			wrong++;
	gotoxy(55, 21); cin >> answer;
		if(answer == "<<")
			correct++;
		else
			wrong++;
	gotoxy(55, 23); cin >> answer;
		if(answer == "<<")
			correct++;
		else
			wrong++;
	gotoxy(54, 24); cin >> answer;
		if(answer == ">>")
			correct++;
		else
			wrong++;
	gotoxy(55, 25); cin >> answer;
		if(answer == "<<")
			correct++;
		else
			wrong++;
	gotoxy(54, 26); cin >> answer;
		if(answer == ">>")
			correct++;
		else
			wrong++;
	gotoxy(50, 28); cin >> answer;
		if(answer == "pow")
			correct++;
		else
			wrong++;
	gotoxy(50, 29); cin >> answer;
		if(answer == "sqrt")
			correct++;
		else
			wrong++;
	
	total = correct + wrong;
	
	gotoxy(50, 31); cout << "Congratulations! You finished the quiz!";
	gotoxy(50, 33); cout << "You had a final score of " << correct << " out of " << total;
		
	
	
}

void maximizeWindow()
{
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_SHOWMAXIMIZED);
}

void canvas()
{
	gotoxy(50, 0); cout << "**********"; gotoxy(62, 0); cout << "**********"; gotoxy(74, 0); cout << "***    ***"; gotoxy(85, 0); cout << " ***  *** "; gotoxy(96, 0); cout << "**********"; gotoxy(108, 0); cout << "**********";			
	gotoxy(50, 1); cout << "**********"; gotoxy(62, 1); cout << "**********"; gotoxy(74, 1); cout << "***    ***"; gotoxy(85, 1); cout << " ***  *** "; gotoxy(96, 1); cout << "**********"; gotoxy(108, 1); cout << "**********";	
	gotoxy(50, 2); cout << "*****";		 gotoxy(62, 2); cout << "****  ****"; gotoxy(74, 2); cout << "****   ***"; gotoxy(85, 2); cout << " ***  *** "; gotoxy(96, 2); cout << "****  ****"; gotoxy(108, 2); cout << "*****     ";	
	gotoxy(50, 3); cout << "*****";		 gotoxy(62, 3); cout << "**********"; gotoxy(74, 3); cout << "***** ****"; gotoxy(85, 3); cout << " ***  *** "; gotoxy(96, 3); cout << "**********"; gotoxy(108, 3); cout << "**********";	
	gotoxy(50, 4); cout << "*****";		 gotoxy(62, 4); cout << "**********"; gotoxy(74, 4); cout << "**** *****"; gotoxy(85, 4); cout << " ***  *** "; gotoxy(96, 4); cout << "**********"; gotoxy(108, 4); cout << "**********";	
	gotoxy(50, 5); cout << "**********"; gotoxy(62, 5); cout << "****  ****"; gotoxy(74, 5); cout << "***   ****"; gotoxy(85, 5); cout << "  **  **  "; gotoxy(96, 5); cout << "****  ****"; gotoxy(108, 5); cout << "     *****";	
	gotoxy(50, 6); cout << "**********"; gotoxy(62, 6); cout << "****  ****"; gotoxy(74, 6); cout << "***    ***"; gotoxy(85, 6); cout << "    **    "; gotoxy(96, 6); cout << "****  ****"; gotoxy(108, 6); cout << "**********";
	
}

void earlBox()
{
	gotoxy(5, 13); cout << " ====================================================================== ";
	gotoxy(5, 14); cout << "|                                                                      |";
	gotoxy(5, 15); cout << "|                                                                      |";
	gotoxy(5, 16); cout << "|                                                                      |";
	gotoxy(5, 17); cout << "|                                                                      |";
	gotoxy(5, 18); cout << "|                                                                      |";
	gotoxy(5, 19); cout << "|                                                                      |";
	gotoxy(5, 20); cout << "|                                                                      |";
	gotoxy(5, 21); cout << "|                                                                      |";
	gotoxy(5, 22); cout << "|                                                                      |";
	gotoxy(5, 23); cout << "|                                                                      |";
	gotoxy(5, 24); cout << "|                                                                      |";
	gotoxy(5, 25); cout << "|                                                                      |";
	gotoxy(5, 26); cout << "|                                                                      |";
	gotoxy(5, 27); cout << "|                                                                      |";
	gotoxy(5, 28); cout << "|                                                                      |";
	gotoxy(5, 29); cout << "|                                                                      |";
	gotoxy(5, 30); cout << " ====================================================================== ";
	
	gotoxy(91, 13); cout << " ====================================================================== ";
	gotoxy(91, 14); cout << "|                                                                      |";
	gotoxy(91, 15); cout << "|                                                                      |";
	gotoxy(91, 16); cout << "|                                                                      |";
	gotoxy(91, 17); cout << "|                                                                      |";
	gotoxy(91, 18); cout << "|                                                                      |";
	gotoxy(91, 19); cout << "|                                                                      |";
	gotoxy(91, 20); cout << "|                                                                      |";
	gotoxy(91, 21); cout << "|                                                                      |";
	gotoxy(91, 22); cout << "|                                                                      |";
	gotoxy(91, 23); cout << "|                                                                      |";
	gotoxy(91, 24); cout << "|                                                                      |";
	gotoxy(91, 25); cout << "|                                                                      |";
	gotoxy(91, 26); cout << "|                                                                      |";
	gotoxy(91, 27); cout << "|                                                                      |";
	gotoxy(91, 28); cout << "|                                                                      |";
	gotoxy(91, 29); cout << "|                                                                      |";
	gotoxy(91, 30); cout << " ====================================================================== ";

	gotoxy(47, 33); cout << " ====================================================================== ";
	gotoxy(47, 34); cout << "|                                                                      |";
	gotoxy(47, 35); cout << "|                                                                      |";
	gotoxy(47, 36); cout << "|                                                                      |";
	gotoxy(47, 37); cout << "|                                                                      |";
	gotoxy(47, 38); cout << "|                                                                      |";
	gotoxy(47, 39); cout << "|                                                                      |";
	gotoxy(47, 40); cout << "|                                                                      |";
	gotoxy(47, 41); cout << "|                                                                      |";
	gotoxy(47, 42); cout << "|                                                                      |";
	gotoxy(47, 43); cout << "|                                                                      |";
	gotoxy(47, 44); cout << "|                                                                      |";
	gotoxy(47, 45); cout << "|                                                                      |";
	gotoxy(47, 46); cout << "|                                                                      |";
	gotoxy(47, 47); cout << "|                                                                      |";
	gotoxy(47, 48); cout << "|                                                                      |";
	gotoxy(47, 49); cout << "|                                                                      |";
	gotoxy(47, 50); cout << " ====================================================================== ";
	

}

void gotoxy(short x, short y)
{

	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	
}
