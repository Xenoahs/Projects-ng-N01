#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void lesson4diagrambox()
{
	gotoxy(110,6);cout<<"____________________________________________________________________________________";
	gotoxy(110,30);cout<<"____________________________________________________________________________________";
}
void lesson4diagram1()
{
	gotoxy(85,2);cout<<"LESSON 4: CONVERTION OF VARIABLES";
	gotoxy(1,4);char asd[1000] = {"In this lesson you will learn the ff:"}; for(int x= 0; x < strlen(asd);x++)
	{cout << asd[x]; Sleep(50);}
	cin.get();
	
	gotoxy(3,5);char asd1[1000] = {"STRUCTURE OF C++"}; for(int x= 0; x < strlen(asd1);x++)
	{cout << asd1[x]; Sleep(50);}
	cin.get();
	gotoxy(3,6);char asd2[1000] = {"Variables used in C++ program"}; for(int x= 0; x < strlen(asd2);x++)
	{cout << asd2[x]; Sleep(50);}
	cin.get();
	gotoxy(3,7);char asd3[1000] = {"Data-Types used in C++ program"}; for(int x= 0; x < strlen(asd3);x++)
	{cout << asd3[x]; Sleep(50);}
	cin.get();
	gotoxy(3,8);char asd4[1000] = {"How to declare variables in C++ program"}; for(int x= 0; x < strlen(asd4);x++)
	{cout << asd4[x]; Sleep(50);}
	cin.get();
	gotoxy(3,9);char asd5[1000] = {"Operators used in C++ program"}; for(int x= 0; x < strlen(asd5);x++)
	{cout << asd5[x]; Sleep(50);}
	cin.get();
	gotoxy(90,50);char asd6[1000] = {"(press the enter key to continue)"}; for(int x= 0; x < strlen(asd6);x++)
	{cout << asd6[x]; Sleep(50);}

	system("CLS");
}

void lesson4diagram2()
{
	
	gotoxy(85,2);cout<<"LESSON 4: CONVERTION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson4diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(141,8);cout<<"Sample code:";
	gotoxy(120,10);cout<<"Pre-processor directive ->	#include <iostream>.";
	gotoxy(152,12);cout<<"using namespace std;";
	gotoxy(136,14);cout<<"Comment ->";
	gotoxy(152,14);cout<<"//This is my first program in C++";
	gotoxy(130,16);cout<<"main function ->";
	gotoxy(152,16);cout<<"int main ()";
	gotoxy(123,18);cout<<"Start of the program ->";
	gotoxy(152,18);cout<<"{";
	gotoxy(127,20);cout<<"Output statement ->";
	gotoxy(154,20);cout<<"cout<<\"HelloWorld\"";
	gotoxy(137,22);cout<<"Return ->";
	gotoxy(154,22);cout<<"return 0";
	gotoxy(125,24);cout<<"End of the program ->";
	gotoxy(152,24);cout<<"}";
	cin.get();
}
void lesson4diagram3()
{
	gotoxy(85,2);cout<<"LESSON 4: CONVERTION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson4diagrambox();
	gotoxy(85,2);cout<<"LESSON 4: CONVERTION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson4diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(120,10);cout<<"A variable is also known as user-defined identifier, It is a data storage";
	gotoxy(120,12);cout<<"location that has a value, which can change during program execution.";
	gotoxy(120,14);cout<<"By using a variable's name in your program, you are, in effect reffering";
	gotoxy(120,16);cout<<"to the data stored there.";


	cin.get();
	system("CLS");
}

void lesson4diagram4()
{

	gotoxy(85,2);cout<<"LESSON 4: CONVERTION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson4diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(120,10);cout<<"Variables can be given any name up to 31characters in length which is,";
	gotoxy(120,12);cout<<"composed of any of the following characters:";
	gotoxy(120,14);cout<<"Characters a to z and A to z";
	gotoxy(120,16);cout<<"(NOTE: upper case and lower case are distinct";
	gotoxy(120,18);cout<<"The first character must be a letter.";
	gotoxy(120,20);cout<<"Only letters, digits or underscores may follow the initial letter.";
	gotoxy(120,22);cout<<"Blank spaces and special characters are not allowed.";
	
	cin.get();
		

}
void lesson4diagram5()
{
	gotoxy(85,2);cout<<"LESSON 4: CONVERTION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson4diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(120,10);cout<<"All variables use DATA-TYPE during declaration to restrict the type of";
	gotoxy(120,12);cout<<"data to be stored. Therefore, we can say that data types are used to";
	gotoxy(120,14);cout<<"tell the variables type of data it can store.";
	gotoxy(120,18);cout<<"(Whenever a variable is defined in C++, the compiler allocates some memory";
	gotoxy(120,20);cout<<"for that variable based on the data-type with which it is declared";
	gotoxy(120,22);cout<<"Every data type requires different amount of memory.";
	
	
	cin.get();
}
void lesson4diagram6()

{
	system("CLS");

	gotoxy(110,6);cout<<"____________________________________________________________________________________";
	gotoxy(110,42);cout<<"____________________________________________________________________________________";

	gotoxy(85,2);cout<<"LESSON 4: CONVERTION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(140,8);cout<<"C++ DATA TYPES";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(120,10);cout<<"Type";
	gotoxy(135,10);cout<<"Approximate size in bills";
	gotoxy(168,10);cout<<"Minimal Range.";
	gotoxy(120,12);cout<<"char";
	gotoxy(145,12);cout<<"8";
	gotoxy(168,12);cout<<"-127 to 127";
	gotoxy(120,14);cout<<"unsigned char";
	gotoxy(145,14);cout<<"8";
	gotoxy(168,14);cout<<"0 to 255";
	gotoxy(120,16);cout<<"signed char";
	gotoxy(145,16);cout<<"8";
	gotoxy(168,16);cout<<"-127 to 127";
	gotoxy(120,18);cout<<"int";
	gotoxy(145,18);cout<<"16";
	gotoxy(168,18);cout<<"-23,767 to 32,767";
	gotoxy(120,20);cout<<"unsigned int";
	gotoxy(145,20);cout<<"16";
	gotoxy(168,20);cout<<"0 to 65,535";		
	gotoxy(120,22);cout<<"signed int";
	gotoxy(145,22);cout<<"16";
	gotoxy(168,22);cout<<"Same as int";	
	gotoxy(120,24);cout<<"Short int";
	gotoxy(145,24);cout<<"16";
	gotoxy(168,24);cout<<"Same as int";
	gotoxy(120,26);cout<<"unsigned short int";
	gotoxy(145,26);cout<<"16";
	gotoxy(168,26);cout<<"0 to 65,535";	
	gotoxy(120,28);cout<<"signed short int";
	gotoxy(145,28);cout<<"16";
	gotoxy(168,28);cout<<"Same as short int";
	gotoxy(120,30);cout<<"long int";
	gotoxy(145,30);cout<<"32";
	gotoxy(168,30);cout<<"-2,147,483,647 to 2,147,483,647";	
	gotoxy(120,32);cout<<"signed long int";
	gotoxy(145,32);cout<<"32";
	gotoxy(168,32);cout<<"same as long int";		
	gotoxy(120,34);cout<<"unsigned long int";
	gotoxy(145,34);cout<<"32";
	gotoxy(168,34);cout<<"0 to 4,294,967,265";
	gotoxy(120,36);cout<<"float";
	gotoxy(145,36);cout<<"32";
	gotoxy(168,36);cout<<"Six digits of precision";	
	gotoxy(120,38);cout<<"double";
	gotoxy(145,38);cout<<"64";
	gotoxy(168,38);cout<<"Ten digits of precision";	
	gotoxy(120,40);cout<<"long double";
	gotoxy(145,40);cout<<"80";
	gotoxy(168,40);cout<<"Ten digits of precision";							
						
	cin.get();
}


void lesson4diagram8()
{
	gotoxy(85,2);cout<<"LESSON 4: CONVERTION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson4diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(7,12);cout<<"4.How to Declare Variables?";
	gotoxy(120,10);cout<<"Syntax:";
	gotoxy(122,12);cout<<"datatype  variable_name;";
	gotoxy(122,14);cout<<"datatype  var1, var2, varn;";
	gotoxy(120,16);cout<<"(Examples:";
	gotoxy(122,18);cout<<"int value;";
	gotoxy(122,20);cout<<"char letter ; (letter variable can only store single character input)";
	gotoxy(122,22);cout<<"float num;";
	gotoxy(122,24);cout<<"int a, size, x;";
	gotoxy(122,26);cout<<"double interest, profit;";
	gotoxy(122,28);cout<<"char name[20] (name variable can store up to  20 character input)";
	
	

	cin.get();
}
void lesson4diagram9()
{
	gotoxy(85,2);cout<<"LESSON 4: CONVERTION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson4diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(7,12);cout<<"4.How to Declare Variables?";
	gotoxy(7,14);cout<<"5.C++ Operators";
	gotoxy(110,10);cout<<"Operators are the symbols that tell the compiler to perform specific mathematical manipulations";
	gotoxy(112,12);cout<<"Types of Operators";
	gotoxy(114,14);cout<<"Assignment Operators";
	gotoxy(114,16);cout<<"Arithmetic Operators";
	gotoxy(114,18);cout<<"Compound Operators";
	gotoxy(114,20);cout<<"Relational Operators)";
	gotoxy(114,22);cout<<"Logical Operators;";
	
	cin.get();
}
void lesson4diagram10()
{
	gotoxy(85,2);cout<<"LESSON 4: CONVERTION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson4diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(7,12);cout<<"4.How to Declare Variables?";
	gotoxy(7,14);cout<<"5.C++ Operators";
	gotoxy(9,14);cout<<"a. Assignment Operators";
	gotoxy(140,10);cout<<"ASSIGNMENT OPERATOR";
	gotoxy(112,12);cout<<"In C++, assignment operator is a single equal sign (=) which means that the value";
	gotoxy(114,14);cout<<"on the right side of the assignment expression after the equal sign is assigned";
	gotoxy(114,16);cout<<"to the variable on the left.";
	gotoxy(114,18);cout<<"EXAMPLE:";
	gotoxy(118,20);cout<<"sum= x+y";

	
	cin.get();
}

void lesson4diagram11()
{
		system("CLS");

	gotoxy(110,6);cout<<"____________________________________________________________________________________";
	gotoxy(110,34);cout<<"____________________________________________________________________________________";
	gotoxy(85,2);cout<<"LESSON 4: CONVERTION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(7,12);cout<<"4.How to Declare Variables?";
	gotoxy(7,14);cout<<"5.C++ Operators";
	gotoxy(9,14);cout<<"a. Assignment Operators";
	gotoxy(9,14);cout<<"b. Arithetic Operators";
	gotoxy(140,10);cout<<"ARITHMETIC OPERATORS";
	gotoxy(112,12);cout<<"Operator precedence specifies the order of operations in expressions that contain";
	gotoxy(112,14);cout<<"more than  one operator.";
	gotoxy(112,16);cout<<"Operator associativity specifies whether, in an expression that contains multiple operators";
	gotoxy(112,18);cout<<"with the same precedure, an operand is grouped with the one on its left or the one on its right.";
	gotoxy(140,20);cout<<"ORDER OF PRECEDENCE";
	gotoxy(138,22);cout<<"Left to Right Evaluation";
	gotoxy(145,24);cout<<"()";
	gotoxy(143,26);cout<<"++, --";
	gotoxy(143,28);cout<<"*,/,%";
	gotoxy(144,30);cout<<"+,-";	
	gotoxy(144,32);cout<<". =";
	
	cin.get();
}

void lesson4diagram12()
{
		system("CLS");

	gotoxy(110,6);cout<<"____________________________________________________________________________________";
	gotoxy(110,34);cout<<"____________________________________________________________________________________";
	gotoxy(85,2);cout<<"LESSON 4: CONVERTION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(7,12);cout<<"4.How to Declare Variables?";
	gotoxy(7,14);cout<<"5.C++ Operators";
	gotoxy(9,14);cout<<"a. Assignment Operators";
	gotoxy(9,14);cout<<"b. Arithetic Operators";
	gotoxy(9,14);cout<<"c. Compound Operators";
	gotoxy(140,10);cout<<"COMPOUND OPERATORS";
	gotoxy(112,12);cout<<"Below are the compound operators";
	gotoxy(112,14);cout<<"+=, -=, *=, /=, %=";
	gotoxy(112,16);cout<<"Examples";
	gotoxy(112,18);cout<<"x += y;";
	gotoxy(114,20);cout<<"^";
	gotoxy(112,22);cout<<"compound operator";
	gotoxy(140,16);cout<<"expression";
	gotoxy(148,16);cout<<"equivalent to...";
	gotoxy(143,28);cout<<"|";
	gotoxy(143,30);cout<<"|";
	gotoxy(143,32);cout<<"|";
		
	gotoxy(140,30);cout<<"y += x;";
	gotoxy(140,32);cout<<"x -= 5;";
	gotoxy(140,34);cout<<"x /= y;";	
	gotoxy(145,28);cout<<"y = y + x;";
	gotoxy(145,30);cout<<"x = x - 5;";	
	gotoxy(145,32);cout<<"x = x / y;";	
	
	
	cin.get();
}
void lesson4()
{
	gotoxy(85,2);cout<<"LESSON 4:"; Sleep(1000); gotoxy(95,2);cout<<"C";Sleep(100);cout<<"O";Sleep(100);cout<<"N";Sleep(100);cout<<"G";
	Sleep(100);cout<<"R";Sleep(100);cout<<"A";Sleep(100);cout<<"T";Sleep(100);cout<<"U";Sleep(100);cout<<"L";Sleep(100);cout<<"A";
	Sleep(100);cout<<"T";Sleep(100);cout<<"I";Sleep(100);cout<<"O";Sleep(100);cout<<"N";Sleep(100);cout<<"S";Sleep(100);cout<<"!";
	Sleep(100);cout<<" ";Sleep(100);cout<<"Y";Sleep(100);cout<<"O";Sleep(100);cout<<"U";Sleep(100);cout<<" ";Sleep(100);cout<<"H";Sleep(100);cout<<"A";
	Sleep(100);cout<<"V";Sleep(100);cout<<"E";Sleep(100);cout<<" ";Sleep(100);cout<<"S";Sleep(100);cout<<"U";Sleep(100);cout<<"R";
	Sleep(100);cout<<"V";Sleep(100);cout<<"I";Sleep(100);cout<<"V";Sleep(100);cout<<"E";Sleep(100);cout<<"D";Sleep(100);cout<<" ";
	Sleep(100);cout<<"U";Sleep(100);cout<<"P";Sleep(100);cout<<" ";Sleep(100);cout<<"T";Sleep(100);cout<<"O";Sleep(100);cout<<" ";
	Sleep(100);cout<<"T";Sleep(100);cout<<"H";Sleep(100);cout<<"I";Sleep(100);cout<<"S";Sleep(100);cout<<" ";Sleep(100);cout<<"L";
	Sleep(100);cout<<"E";Sleep(100);cout<<"S";Sleep(100);cout<<"S";Sleep(100);cout<<"O";Sleep(100);cout<<"N.";
	gotoxy(90,50);cout<<"(press the enter key to continue)";
	cin.get();
	system("CLS");

		lesson4diagram2();
		system("CLS");
		lesson4diagram3();
		system("CLS");
		lesson4diagram4();
		system("CLS");
		lesson4diagram5();
		system("CLS");
		lesson4diagram6();
		system("CLS");
		lesson4diagram8();
		system("CLS");
		lesson4diagram9();
		system("CLS");
		lesson4diagram10();
		system("CLS");
		lesson4diagram11();
		system("CLS");
		
	
}

int main(){
	lesson4();
}


