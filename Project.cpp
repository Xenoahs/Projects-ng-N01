#include <iostream>
#include <windows.h>
#include <math.h>
#include <iomanip>

void gotoxy(short x, short y);

void maximizeWindow();

//Initialization for First Part
void canvas();
void canvasWithInfo();
void tablecontents();

//Initialization for Lesson 1 (Functions and Variables)

int lesson1quizpoints;
char L1N1,L1N2,L1N3;

void lesson1diagrambox();
void lesson1diagram1();
void lesson1diagram2();
void lesson1diagram3();
void lesson1diagram4();
void lesson1diagram567();
void lesson1diagram8();
void lesson1diagram9();
void lesson1end();
void lesson1quiznumber3();
void lesson1quiznumber2();
void lesson1quiznumber1();
void lesson1();

//Initialization for Lesson 2 (Functions and Variables)

void lesson2();
void lesson2warning();
void lesson2question();
void lesson2lesson1diagram2();
void lesson2continuation1();
void lesson2diagrambox();
void lesson2continuation2();
void lesson2trivia();
void lesson2continuation3();
void lesson2continuation4();
void lesson2continuation5();
void lesson2continuational6();
void lesson2continuation7();
void lesson2continuation8();
void lesson2continuation9();
void lesson2continuation10();
void lesson2continuation11();
void ending();
void lesson2quiz();
void lesson2quiz2();
void lesson2quiz3();

//Initialization for Lesson 3 (Functions and Variables)

void lesson3();
void lesson3diagram1();
void lesson3diagram2();
void lesson3diagram3();
void lesson3diagram4();
void lesson3diagram5();
void lesson3diagram6();
void lesson3diagram8();
void lesson3diagram9();
void lesson3diagram10();
void lesson3diagram11();
void lesson3diagram12();		

//Initialization for Lesson 4 (Functions and Variables)

void earlBox();
void lesson4();
void quizTime();

//Initialization for Lesson 5 (Functions and Variables)

void lesson5intro();
void lesson5_2ndpart();
void lesson5_3rdpart();
void lesson5_4thpart();
void lesson5_6thpart();
void lesson5_7thpart();
void lesson5quiz();

using namespace std;

char name[30];
char section[20];
int id;
int x;

int main()
{
	maximizeWindow();

	canvas();
	gotoxy (65, 10); cout << "Enter Name:"; gotoxy(77, 10); cin.getline(name, 30);
	gotoxy (65, 11); cout << "Enter StudentID:"; gotoxy(82, 11); cin >> id;
	cin.ignore();
	gotoxy (65, 12); cout << "Enter Section:"; gotoxy(80, 12); cin.getline(section, 20);
	Sleep(1500);
	system("cls");
	
	canvas();
	gotoxy(70,10); cout << "Welcome! " << name;
	gotoxy(70,11); cout << "From Section " << section;
	gotoxy(70,12); cout << "Student ID: " << id;
	
	for(x = 0; x < 3; x++)
	{
	system("color 0A"); gotoxy(10, 40); cout << " |  \b\b\b ";
	Sleep(200);			gotoxy(10, 39); cout << " |  \b\b\b ";
	system("color 0B"); gotoxy(10, 38); cout << " |  \b\b\b ";
	Sleep(200);			gotoxy(10, 37); cout << " |  \b\b\b ";
	system("color 0C");	gotoxy(10, 36); cout << " |  \b\b\b ";
	Sleep(200);			gotoxy(10, 35); cout << " |  \b\b\b ";
	system("color 0D"); gotoxy(10, 34); cout << " |  \b\b\b ";
	Sleep(200);			gotoxy(10, 33); cout << " |  \b\b\b ";
	system("color 0E"); gotoxy(10, 32); cout << " |  \b\b\b ";
	Sleep(200);			gotoxy(10, 31); cout << " |  \b\b\b ";
	system("color 0F"); gotoxy(10, 30); cout << " |  \b\b\b ";
	Sleep(200);			gotoxy(10, 29); cout << " |  \b\b\b ";
	}
	
	Sleep(3000);
	system("cls");
	
	canvas();
	gotoxy(51, 11); cout << "You have enrolled into an online course called Computer Programming 1.";
	gotoxy(56, 12); cout << "It is a course that is mainly dealing with the basics of C++";
	gotoxy(65, 13); cout << "This course comes with the following modules: ";
	
	tablecontents();

	cin.get();
	system("cls");
	lesson1();
	system("cls");
	lesson2();
	system("cls");
	lesson3();
	system("cls");
	lesson4();
	system("cls");
	lesson5intro();
	system("cls");

	gotoxy(70, 10); cout << "Your free trial has ended."; cin.get();
	gotoxy(63, 11); cout << "To access more, please input a 4.0 grade"; cin.get();
	gotoxy(65, 12); cout << "Thank you for your understanding."; cin.get();
}


// Functions for the first part
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

void canvasWithInfo()
{
	gotoxy(50, 0); cout << "**********"; gotoxy(62, 0); cout << "**********"; gotoxy(74, 0); cout << "***    ***"; gotoxy(85, 0); cout << " ***  *** "; gotoxy(96, 0); cout << "**********"; gotoxy(108, 0); cout << "**********";			
	gotoxy(50, 1); cout << "**********"; gotoxy(62, 1); cout << "**********"; gotoxy(74, 1); cout << "***    ***"; gotoxy(85, 1); cout << " ***  *** "; gotoxy(96, 1); cout << "**********"; gotoxy(108, 1); cout << "**********";	
	gotoxy(50, 2); cout << "*****";		 gotoxy(62, 2); cout << "****  ****"; gotoxy(74, 2); cout << "****   ***"; gotoxy(85, 2); cout << " ***  *** "; gotoxy(96, 2); cout << "****  ****"; gotoxy(108, 2); cout << "*****     ";	
	gotoxy(50, 3); cout << "*****";		 gotoxy(62, 3); cout << "**********"; gotoxy(74, 3); cout << "***** ****"; gotoxy(85, 3); cout << " ***  *** "; gotoxy(96, 3); cout << "**********"; gotoxy(108, 3); cout << "**********";	
	gotoxy(50, 4); cout << "*****";		 gotoxy(62, 4); cout << "**********"; gotoxy(74, 4); cout << "**** *****"; gotoxy(85, 4); cout << " ***  *** "; gotoxy(96, 4); cout << "**********"; gotoxy(108, 4); cout << "**********";	
	gotoxy(50, 5); cout << "**********"; gotoxy(62, 5); cout << "****  ****"; gotoxy(74, 5); cout << "***   ****"; gotoxy(85, 5); cout << "  **  **  "; gotoxy(96, 5); cout << "****  ****"; gotoxy(108, 5); cout << "     *****";	
	gotoxy(50, 6); cout << "**********"; gotoxy(62, 6); cout << "****  ****"; gotoxy(74, 6); cout << "***    ***"; gotoxy(85, 6); cout << "    **    "; gotoxy(96, 6); cout << "****  ****"; gotoxy(108, 6); cout << "**********";
	
	gotoxy(0, 0); cout << " ========================== ";
	gotoxy(0, 1); cout << "|                          | ";
	gotoxy(0, 2); cout << "|                          | ";
	gotoxy(0, 3); cout << "|                          | ";
	gotoxy(0, 4); cout << " ========================== ";
	
	
	gotoxy(1, 1); cout << "User: " << name;
	gotoxy(1, 2); cout << "Student ID: " << id;
	gotoxy(1, 3); cout << "Section: " << section;
}

void tablecontents()
{

	gotoxy(35,18);cout << "***    ***";  gotoxy(47,18);cout << "**********";  gotoxy(59,18);cout << "**********";  gotoxy(71,18);cout << "**********";  gotoxy(83,18);cout << "**********";  gotoxy(95,18);cout << "***********";  gotoxy(108,18);cout << "****   ****";    gotoxy(121,18);cout << "**********";
	gotoxy(35,19);cout << "****  ****";  gotoxy(47,19);cout << "**********";  gotoxy(59,19);cout << "**********";  gotoxy(71,19);cout << "**********";  gotoxy(83,19);cout << "**********";  gotoxy(95,19);cout << "****   ****";  gotoxy(108,19);cout << "****   ****";    gotoxy(121,19);cout << "***   ****";
	gotoxy(35,20);cout << "**********";  gotoxy(47,20);cout << "****  ****";  gotoxy(59,20);cout << "*****     ";  gotoxy(71,20);cout << "    **    ";  gotoxy(83,20);cout << "**        ";  gotoxy(95,20);cout << "****   *** ";  gotoxy(108,20);cout << "***** *****";    gotoxy(121,20);cout << "   *******";
	gotoxy(35,21);cout << "*** ** ***";  gotoxy(47,21);cout << "**********";  gotoxy(59,21);cout << "**********";  gotoxy(71,21);cout << "    **    ";  gotoxy(83,21);cout << "******    ";  gotoxy(95,21);cout << "****  ***  ";  gotoxy(108,21);cout << " **** **** ";    gotoxy(121,21);cout << "   *****  ";
	gotoxy(35,22);cout << "*** ** ***";  gotoxy(47,22);cout << "**********";  gotoxy(59,22);cout << "**********";  gotoxy(71,22);cout << "    **    ";  gotoxy(83,22);cout << "**        ";  gotoxy(95,22);cout << "**** **    ";  gotoxy(108,22);cout << "   ** **   ";    gotoxy(121,22);cout << "      ****";
	gotoxy(35,23);cout << "*** ** ***";  gotoxy(47,23);cout << "****  ****";  gotoxy(59,23);cout << "     *****";  gotoxy(71,23);cout << "    **	";  gotoxy(83,23);cout << "**********";  gotoxy(95,23);cout << "**** ****  ";  gotoxy(108,23);cout << "    ***    ";    gotoxy(121,23);cout << "***   ****";
	gotoxy(35,24);cout << "*** ** ***";  gotoxy(47,24);cout << "****  ****";  gotoxy(59,24);cout << "**********";  gotoxy(71,24);cout << "    **    ";  gotoxy(83,24);cout << "**********";  gotoxy(95,24);cout << "**** ******";  gotoxy(108,24);cout << "    ***    ";    gotoxy(121,24);cout << "**********";
	
	gotoxy(50,27);cout<<"  ____________________________________________________________";
	gotoxy(51,28);cout<<"| Chapter 1 - Introduction to Programming                     |";
	gotoxy(52,29);cout<<"|                                                             |";
	gotoxy(53,30);cout<<"| Chapter 2 - Program Logic Design and Formulation            |";
	gotoxy(54,31);cout<<"|                                                             |";
	gotoxy(55,32);cout<<"| Chapter 3 - Introduction to C++ Programming                 |";
	gotoxy(56,33);cout<<"|                                                             |";
	gotoxy(57,34);cout<<"| Chapter 4 - Basic Input/Output System                       |";
	gotoxy(58,35);cout<<"|                                                             |";
	gotoxy(59,36);cout<<"| Chapter 5 - Program Control: Conditional Control Structures |";
	gotoxy(60,37);cout<<"|                                                             |";
	gotoxy(61,38);cout<<"| Chapter 6 - Program Control: Repetition Control Structures  |";
	gotoxy(62,39);cout<<"|_____________________________________________________________|";
}


//Functions for Lesson 1

void lesson1()
{
 	gotoxy(65,2);cout<<"LESSON 1:"; Sleep(1000); gotoxy(75,2);cout<<"I";Sleep(100);cout<<"N";Sleep(100);cout<<"T";Sleep(100);cout<<"R";
	Sleep(100);cout<<"O";Sleep(100);cout<<"D";Sleep(100);cout<<"U";Sleep(100);cout<<"C";Sleep(100);cout<<"T";Sleep(100);cout<<"I";
	Sleep(100);cout<<"O";Sleep(100);cout<<"N";Sleep(100);cout<<" ";Sleep(100);cout<<"T";Sleep(100);cout<<"O";Sleep(100);cout<<" ";
	Sleep(100);cout<<"P";Sleep(100);cout<<"R";Sleep(100);cout<<"O";Sleep(100);cout<<"G";Sleep(100);cout<<"R";Sleep(100);cout<<"A";
	Sleep(100);cout<<"M";Sleep(100);cout<<"M";Sleep(100);cout<<"I";Sleep(100);cout<<"N";Sleep(100);cout<<"G";
	gotoxy(90,50);cout<<"(press the enter key to continue)";
		gotoxy(5,4);cout<<"TERMINOLOGY:";cin.get(); lesson1diagrambox(); lesson1diagram1();
		gotoxy(7,6);cout<<"1. Programming Language";
		gotoxy(8,7);cout<<"-a type of written language that instructs computers and form software."; cin.get(); 
		system("CLS");
		lesson1diagram2();
		system("CLS");
		lesson1diagram3();
		system("CLS");
		lesson1diagram4();
		system("CLS");
		lesson1diagram567();
		system("CLS");
		lesson1diagram8();
		system("CLS");
		lesson1diagram9();
		system("CLS");
		lesson1quiznumber1();
		lesson1end();
}

void lesson1diagrambox()
{
	gotoxy(90,6); cout<<"____________________________________________________________________________";
	gotoxy(90,30); cout<<"___________________________________________________________________________";
}
void lesson1diagram1()
{
	gotoxy(112,8); cout <<"--What a programming language looks like--";
	gotoxy(115,10); cout <<"if (finals==pass){";
	gotoxy(116,11); cout <<"cout<<'nice'; }";
	gotoxy(115,12); cout <<"else{ cry; }";
}
void lesson1diagram2()
{

	gotoxy(65,2);cout<<"LESSON 1: INTRODUCTION TO PROGRAMMING";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson1diagrambox();
	gotoxy(7,6);cout<<"1. Programming Language";
	gotoxy(8,7);cout<<"-a type of written language that instructs computers and form software."; 
	gotoxy(7,9);cout<<"2. Syntax";
	gotoxy(8,10);cout<<"-refers to the grammar of a programming language. Each language has its";
	gotoxy(9,11);cout<<"own set rules and structure.";
	gotoxy(118,8);cout<<"Sample code:";
	gotoxy(95,10);cout<<"cout<<What's up?";
	gotoxy(90,13);cout<<"The sample code above won't work, since 'What's up' is not enclosed";
	gotoxy(90,14);cout<<"in quotations, the program thinks 'What's up' is a command, and not text.";
	gotoxy(90,16);cout<<"This is what is known as a 'Syntax Error'.";
	gotoxy(95,18);cout<<"Corrected code:";
	gotoxy(95,20);cout<<"cout<<''What's up?'' ";
	gotoxy(95,23);cout<<"Output: What's up?";
	cin.get();
}
void lesson1diagram3()
{
	gotoxy(65,2);cout<<"LESSON 1: INTRODUCTION TO PROGRAMMING";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson1diagrambox();
	gotoxy(7,6);cout<<"1. Programming Language";
	gotoxy(8,7);cout<<"-a type of written language that instructs computers and form software."; 	
	gotoxy(7,9);cout<<"2. Syntax";
	gotoxy(8,10);cout<<"-refers to the grammar of a programming language. Each language has its";
	gotoxy(9,11);cout<<"own set rules and structure.";
	gotoxy(7,13);cout<<"3. Low-Level Language";
	gotoxy(8,14);cout<<"-cryptic and not human-readable.";
	gotoxy(115,8);cout<<"Low-level Languages";
	gotoxy(95,10);cout<<"1. Binary Language";
	gotoxy(95,11);cout<<"2. Assembly Language";
	gotoxy(115,13);cout<<"Example of Assembly Language";
	gotoxy(95,15);cout<<".data";gotoxy(95,16);cout<<"val1 DWORD 10000h";gotoxy(95,17);cout<<"val2 DWORD 40000h";gotoxy(95,18);
	cout<<"val3 DWORD 20000h";gotoxy(95,19);cout<<"finalVal DWORD ?";gotoxy(95,20);cout<<".code";gotoxy(95,21);cout<<"main PROC";
	gotoxy(98,22);cout<<"mov eax,val1";gotoxy(98,23);cout<<"add eax,val2";gotoxy(98,24);cout<<"sub eax,val3"; 
	gotoxy(98,25);cout<<"mov finalVal,eax";gotoxy(98,26);cout<<"call DumpRegs";gotoxy(98,27);cout<<"exit";gotoxy(98,28);cout<<"main ENDP";
	cin.get();
}
void lesson1diagram4()
{
	gotoxy(65,2);cout<<"LESSON 1: INTRODUCTION TO PROGRAMMING";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson1diagrambox();
	gotoxy(7,6);cout<<"1. Programming Language";
	gotoxy(8,7);cout<<"-a type of written language that instructs computers and form software."; 
	gotoxy(7,9);cout<<"2. Syntax";
	gotoxy(8,10);cout<<"-refers to the grammar of a programming language. Each language has its";
	gotoxy(9,11);cout<<"own set rules and structure.";
	gotoxy(7,13);cout<<"3. Low-Level Language";
	gotoxy(8,14);cout<<"-cryptic and not human-readable.";
	gotoxy(7,16);cout<<"4. High-Level Language";
	gotoxy(8,17);cout<<"-resembles english and presents english-like instructions.";
	gotoxy(115,8);cout<<"Examples of High-Level Languages";
	gotoxy(95,10);cout<<"1. C";
	gotoxy(95,11);cout<<"2. Java";
	gotoxy(95,12);cout<<"3. Python";
	gotoxy(115,14);cout<<"Example of High-Level Language code";
	gotoxy(95,16);cout<<"sale_price=1.66";
	gotoxy(95,17);cout<<"if (sale_price>2){";
	gotoxy(95,18);cout<<"discount=0.1 }";
	gotoxy(95,19);cout<<"else {";
	gotoxy(98,20);cout<<"discount=0.05 }"; 
	cin.get();
}
void lesson1diagram567()
{
	gotoxy(65,2);cout<<"LESSON 1: INTRODUCTION TO PROGRAMMING";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson1diagrambox();
	gotoxy(7,6);cout<<"1. Programming Language";
	gotoxy(8,7);cout<<"-a type of written language that instructs computers and form software."; 
	gotoxy(7,9);cout<<"2. Syntax";
	gotoxy(8,10);cout<<"-refers to the grammar of a programming language. Each language has its";
	gotoxy(9,11);cout<<"own set rules and structure.";
	gotoxy(7,13);cout<<"3. Low-Level Language";
	gotoxy(8,14);cout<<"-cryptic and not human-readable.";
	gotoxy(7,16);cout<<"4. High-Level Language";
	gotoxy(8,17);cout<<"-resembles english and presents english-like instructions.";
	gotoxy(7,19);cout<<"5. Assembler"; 
	gotoxy(8,20);cout<<"-translates a program written from an assembly language to a low-level language.";
	cin.get();
	gotoxy(7,22);cout<<"6. Interpreter";
	gotoxy(8,23);cout<<"-translates each statement or line one at a time.";
	cin.get();
	gotoxy(7,25);cout<<"7. Compiler";
	gotoxy(8,26);cout<<"-translates all statements at one time, and provides all error messages immediately.";cin.get();
	gotoxy(125,7);cout<<"Assembler";
	gotoxy(100,9);cout<<"[Assembly Code] ------------> Machine Language (Binary), 0s and 1s";
	gotoxy(125,12);cout<<"Interpreter";
	gotoxy(100,14);cout<<"1st ---------print(this); while doing (this)";
	gotoxy(100,15);cout<<"2nd ---------then do (this), if (that = true)";
	gotoxy(125,19);cout<<"Compiler";
	gotoxy(116,21);cout<<"int num1,int num2, int num3"; gotoxy(113,22);cout<<"/";
	gotoxy(113,23);cout<<"-- while (true) {"; gotoxy(100,23);cout<<"Simultaneous";
	gotoxy(113,24);cout<<"\\"; gotoxy(116,25);cout<<"do (this); }"; 
	cin.get();
}
void lesson1diagram8()
{
	gotoxy(65,2);cout<<"LESSON 1: INTRODUCTION TO PROGRAMMING";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson1diagrambox();
	gotoxy(7,6);cout<<"1. Programming Language";
	gotoxy(8,7);cout<<"-a type of written language that instructs computers and form software."; 
	gotoxy(7,9);cout<<"2. Syntax";
	gotoxy(8,10);cout<<"-refers to the grammar of a programming language. Each language has its";
	gotoxy(9,11);cout<<"own set rules and structure.";
	gotoxy(7,13);cout<<"3. Low-Level Language";
	gotoxy(8,14);cout<<"-cryptic and not human-readable.";
	gotoxy(7,16);cout<<"4. High-Level Language";
	gotoxy(8,17);cout<<"-resembles english and presents english-like instructions.";
	gotoxy(7,19);cout<<"5. Assembler"; 
	gotoxy(8,20);cout<<"-translates a program written from an assembly language to a low-level language.";
	gotoxy(7,22);cout<<"6. Interpreter";
	gotoxy(8,23);cout<<"-translates each statement or line one at a time.";
	gotoxy(7,25);cout<<"7. Compiler";
	gotoxy(8,26);cout<<"-translates all statements at one time, and provides all error messages immediately.";
	gotoxy(7,29);cout<<"8. Procedure-Oriented Programming";
	gotoxy(8,30);cout<<"-a method of programming in which the programmer structures the program in instructing it";
	gotoxy(9,31);cout<<"every step of the way, from start to finish.";
	gotoxy(115,8);cout<<"Procedure-Oriented Programming";
	gotoxy(100,10);cout<<"Sample Program concept: Rain checker"; 
	gotoxy(100,12);cout<<"1st step: Check what is current preticipation level-";
	gotoxy(100,13);cout<<"2nd step: If precipitation is high enough-";
	gotoxy(100,14);cout<<"3rd step: then output: It will rain"; 
	gotoxy(105,17);cout<<"Notice that the program is guided by certain";
	gotoxy(98,18);cout<<"algorithms or functions, and follows a top-down approach.";
	cin.get();
}
void lesson1diagram9()
{
	gotoxy(85,2);cout<<"LESSON 1: INTRODUCTION TO PROGRAMMING";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson1diagrambox();
	gotoxy(7,6);cout<<"1. Programming Language";
	gotoxy(8,7);cout<<"-a type of written language that instructs computers and form software."; 
	gotoxy(7,9);cout<<"2. Syntax";
	gotoxy(8,10);cout<<"-refers to the grammar of a programming language. Each language has its";
	gotoxy(9,11);cout<<"own set rules and structure.";
	gotoxy(7,13);cout<<"3. Low-Level Language";
	gotoxy(8,14);cout<<"-cryptic and not human-readable.";
	gotoxy(7,16);cout<<"4. High-Level Language";
	gotoxy(8,17);cout<<"-resembles english and presents english-like instructions.";
	gotoxy(7,19);cout<<"5. Assembler"; 
	gotoxy(8,20);cout<<"-translates a program written from an assembly language to a low-level language.";
	gotoxy(7,22);cout<<"6. Interpreter";
	gotoxy(8,23);cout<<"-translates each statement or line one at a time.";
	gotoxy(7,25);cout<<"7. Compiler";
	gotoxy(8,26);cout<<"-translates all statements at one time, and provides all error messages immediately.";
	gotoxy(7,29);cout<<"8. Procedure-Oriented Programming";
	gotoxy(8,30);cout<<"-a method of programming in which the programmer structures the program in instructing it";
	gotoxy(9,31);cout<<"every step of the way, from start to finish.";
	gotoxy(7,33);cout<<"9. Object-Oriented Programming";
	gotoxy(8,34);cout<<"-a method of programming in which the programmer structures the program utilizing objects";
	gotoxy(9,35);cout<<"and classes. This enables much needed readability and lessens repetition.";
	gotoxy(115,8);cout<<"Object-Oriented Programming";
	gotoxy(118,9);cout<<"Sample Object Concept: ";
	gotoxy(123,11);cout<<"---------";
	gotoxy(123,12);cout<<"| SHAPE |";
	gotoxy(123,13);cout<<"---------";
	gotoxy(123,14);cout<<"|draw() |";
	gotoxy(123,15);cout<<"|erase()|";
	gotoxy(123,16);cout<<"|move() |";
	gotoxy(123,17);cout<<"---------";
	gotoxy(123,18);cout<<"//     \\";
	gotoxy(116,19);cout<<"CIRCLE	TRIANGLE";
	gotoxy(116,20);cout<<"changeclr()   rotatetri()";
	gotoxy(112,25);cout<<"Note that '()' indicates a function";
	cin.get();
}
void lesson1end()
{
	system("CLS");
	gotoxy(55,10); 
	char L2str[100]={"YOU HAVE SUCCESFULLY COMPLETED THE FIRST LESSON, CONGRATULATIONS!"};
	
	for(int l1i=0; l1i<strlen(L2str); l1i++){
		cout<<L2str[l1i];
		Sleep(60);
	}
	cin.get();
	gotoxy(55,15);cout<<"You have reached the end of Lesson 1: Introduction to Programming!";
	gotoxy(65,20);cout<<"You have earned a score of "<<lesson1quizpoints<<" out of 3!";
}
void lesson1quiznumber3()
{
	gotoxy(10,28);cout<<"3. Which of the following languages is a High-level language?";
	gotoxy(13,29);cout<<"A. Assembly Language";
	gotoxy(13,30);cout<<"B. Java";
	gotoxy(13,31);cout<<"C. Machine Language";
	gotoxy(10,32);cout<<"Answer: "; gotoxy(20,32); cin>>L1N3;
	switch(L1N3){
		case 'B':
		case 'b':
			gotoxy(15,34);cout<<"Correct! The answer was Java.";
			++lesson1quizpoints;
			break;
		case 'C':
		case 'c':
		case 'A':
		case 'a':
			gotoxy(15,34);cout<<"Incorrect! The answer was Java.";
			break;
		}
	cin.get();
	cin.get();
}
	
void lesson1quiznumber2()
{
	gotoxy(10,18);cout<<"2. This translates the code one line at a time.";
	gotoxy(13,19);cout<<"A. Compiler";
	gotoxy(13,20);cout<<"B. Assembler";
	gotoxy(13,21);cout<<"C. Interpreter";
	gotoxy(10,22);cout<<"Answer: "; gotoxy(20,22); cin>>L1N2;
	switch(L1N2){
			case 'C':
			case 'c':
				gotoxy(15,24);cout<<"Correct! The answer was Interpreter.";
				++lesson1quizpoints;
				break;
			case 'B':
			case 'b':
			case 'A':
			case 'a':
				gotoxy(15,24);cout<<"Incorrect! The answer was Interpreter.";
				break;
		}
	lesson1quiznumber3();
}
void lesson1quiznumber1()
{
		gotoxy(65,2);cout<<"LESSON 1: INTRODUCTION TO PROGRAMMING";gotoxy(90,40);cout<<"(press the enter key to continue)";
		gotoxy(73,5);cout<<"TEST YOUR KNOWLEDGE"; cin.get();
		gotoxy(10,8);cout<<"1. A type of programming language that is cryptic and not human-readable.";
		gotoxy(13,9);cout<<"A. Low-level Language";
		gotoxy(13,10);cout<<"B. High-level Language";
		gotoxy(13,11);cout<<"C. Syntax"; gotoxy(10,12); cout<<"Answer: "; gotoxy(20,12);cin>>L1N1;
		switch(L1N1){
			case 'A':
			case 'a':
				gotoxy(15,14);cout<<"Correct! The answer was Low-Level Language.";
				++lesson1quizpoints;
				break;
			case 'B':
			case 'b':
			case 'C':
			case 'c':
				gotoxy(15,14);cout<<"Incorrect! The answer was Low-level Language.";
				break;
		}
		lesson1quiznumber2();
}

//Functions for Lesson 2

void lesson2()
{	
	gotoxy(66,2); char str[1000] = {" Lesson 2: Program Logic Design and Formulation"};
	 	for(int x= 0; x < strlen(str); x++)
	{
		cout << str[x];
		Sleep(50);
	}
	
	gotoxy(4,3); cout << " OBJECTIVES: ";
	gotoxy(4,4); char l2str[1000] = {" Upon completion of this module, you will be able to:\n - Write algorithmic solutions to problems \n - Apply the different program logic design tools in solving computing problems\n - Design, read, understand and construct program flowchart \n - Express algorithms using pseudocode and flowcharts"};
	 	for(int x= 0; x < strlen(l2str); x++)
	{
		cout << l2str[x];
		Sleep(50);
	}
	
	lesson2warning();

}
void lesson2warning()
	{	gotoxy(4,12); cout << " !WARNING!";
		gotoxy(4,13); char l2str[1000] = {" Before we begin, lesson 1 is a prerequisite before taking this program to prevent misleading knowledge."};
	 		for(int x= 0; x < strlen(l2str); x++)
		{
			cout << l2str[x];
			Sleep(50);
		}
		
		cin.get();
		lesson2lesson1diagram2();
	}
	
void lesson2lesson1diagram2()
{
	
	system("cls");
	
	gotoxy(85,2);cout<<"LESSON 1: INTRODUCTION TO PROGRAMMING";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	gotoxy(7,6);cout<<"1. Programming Language";
	gotoxy(8,7);cout<<"-a type of written language that instructs computers and form software."; 
	gotoxy(7,9);cout<<"2. Syntax";
	gotoxy(8,10);cout<<"-refers to the grammar of a programming language. Each language has its";
	gotoxy(9,11);cout<<"own set rules and structure.";
	gotoxy(99,8);cout<<"Sample code:";
	gotoxy(99,10);cout<<"cout<<What's up?";
	gotoxy(94,13);cout<<"The sample code above won't work, since 'What's up' is not enclosed";
	gotoxy(94,14);cout<<"in quotations, the program thinks 'What's up' is a command, and not text.";
	gotoxy(94,16);cout<<"This is what is known as a 'Syntax Error'.";
	gotoxy(109,18);cout<<"Corrected code:";
	gotoxy(99,20);cout<<"cout<<''What's up?'' ";
	gotoxy(99,23);cout<<"Output: What's up?";
	cin.get();
	
	lesson2continuation1();
}


void lesson2diagrambox()
{
	gotoxy(60,5); cout <<"____________________________________________________________________________________";
	gotoxy(60,30); cout <<"____________________________________________________________________________________";
}

void lesson2continuation1()
{
	system("cls");
	
	lesson2diagrambox();
		gotoxy(66,2); char l2str[1000] = {" Lesson 2: Program Logic Design and Formulation"};
	 	for(int x= 0; x < strlen(l2str); x++)
	{
		cout << l2str[x];
		Sleep(50);
	}
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); char l2string[1000] = {" 1. Algorithm "};
		for(int x= 0; x < strlen(l2string); x++)
	{
		cout << l2string[x];
		Sleep(50);
	}

	gotoxy(60,7); cout << " - Algorithm is a procedure or formula for solving a problem, based on ";
	gotoxy(60,8); cout << " conducting a sequence of specified actions. ";
	gotoxy(60,10); cout << " - Algorithm can be expressed using pseudocode or flowchart.";
	gotoxy(60,12); cout << " - Each instruction in the algorithm will describe an action that the computer needs to take.";
	cin.get();	
	
	lesson2continuation2();
}
void lesson2continuation2()
{
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Design and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		
		gotoxy(4,6); char l2strings[1000] = {" 2. Pseudocodes "};
		for(int x= 0; x < strlen(l2strings); x++)
	{
		cout << l2strings[x];
		Sleep(50);
	}
		cin.get();
		gotoxy(60,7); cout << " - Pseudocode is called false code because, it has no syntax like any of the programming language ";
		gotoxy(60,8); cout << "and thus can?t be compiled or interpreted by the computer.";
		gotoxy(60,10); cout << " - It is simply an implementation of an algorithm in the form of";
		gotoxy(60,11); cout << " annotations and informative text written in plain English.";
		gotoxy(60,13); cout << " - It is not standardized.";
		cin.get();
		
		lesson2trivia();
}
void lesson2trivia()
{
	system("cls");
	
	gotoxy(60,2); char str[1000] = {" TRIVIA!! "};
	{
	 	for (int x = 0; x < 5; x++)
		 
		 for(int x= 0; x < strlen(str); x++)
		{
		cout << str[x];
		Sleep(70);
		}
	}
		gotoxy(45,6); char stri[1000] = {" Did you know that there are two different tools used for creating new programs,"};
		 for(int x= 0; x < strlen(stri); x++)
		{
		cout << stri[x];
		Sleep(50);
		}
		 gotoxy(40,8); char string[1000] = {" especially in computer programming. An algorithm is a step-by-step analysis of the process, "};
	 	 for(int x= 0; x < strlen(string); x++)
		{
		cout << string[x];
		Sleep(50);
		}
		 gotoxy(47,10); char strings[1000] = {"while a flowchart explains the steps of a program in a graphical way. "};
	 	 for(int x= 0; x < strlen(strings); x++)
		{
		cout << strings[x];
		Sleep(50);
		}
		cin.get();
		
		lesson2continuation3();
}
void lesson2continuation3()
{
	system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Design and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Pseudocodes ";
		
		gotoxy(8,7); char l2strings[1000] = {" A. How to write Pseudocodes "};
		for(int x= 0; x < strlen(l2strings); x++)
	{
		cout << l2strings[x];
		Sleep(50);
	}
	cin.get();
		gotoxy(60,7); cout << " - In Pseudocode, keywords are used to indicate common inputoutput and processing operations."; 
		gotoxy(60,9); cout << " - They are written fully in uppercase. ";
		gotoxy(60,11); cout << " - It also use mathematical, relational and logical operators to express arithmetic and logical operations.";
		gotoxy(60,12); cout << "express arithmetic and logical operations.";
		gotoxy(60,14); cout << " - When writing pseudocode, we assume that the order of execution of the statements is from top to bottom.";
		gotoxy(60,16); cout << " - This changes when using control structures, functions and exception handling.";
		
		lesson2continuation4();
}
void lesson2continuation4()
{	
cin.get();
		system("cls");
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Design and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Pseudocodes ";
		gotoxy(8,7); cout << " A. How to write Pseudocodes";
		
		gotoxy(8,8); char l2strings[1000] = {" B. KEYWORDS "};
		for(int x= 0; x < strlen(l2strings); x++)
	{
		cout << l2strings[x];
		Sleep(50);
	}
		gotoxy(60,7); cout << " - COMPUTE, CALCULATE, DETERMINE: This is used to calculate the result of an expression."; 
		gotoxy(60,9); cout << " - SET, INIT: To initialize values ";
		gotoxy(60,11); cout << " - INCREMENT, BUMP: To increase the value of a variable";
		gotoxy(60,13); cout << " - DECREMENT: To reduce the value of a variable";
		
		lesson2continuation5();
}
void lesson2continuation5()
{
	cin.get();
		system("cls");
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Design and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Pseudocodes ";
		gotoxy(8,7); cout << " A. How to write Pseudocodes";
		gotoxy(8,8); cout << " B. KEYWORDS ";
		
		gotoxy(8,9); char l2strings[1000] = {" C. COMMON OPERATORS: "};
		for(int x= 0; x < strlen(l2strings); x++)
	{
		cout << l2strings[x];
		Sleep(50);
	}
		gotoxy(60,7); cout << " - Assignment: ? or :=";
		gotoxy(60,8); cout << " - Example: c - ? 2pr, c := 2pi r "; 
		gotoxy(60,10); cout << " - Arithmetic: +, -, ?, /, mod";
		gotoxy(60,11); cout << " - Example: a + b, x ? y, m x n, s / t, num mod 2";
		gotoxy(60,13); cout << " - Comparison (Relational): =, ?, <, >, =>, =<";
		gotoxy(60,14); cout << " - Example: a = b, x ? y, m > n, s < t, n1 = n";
		gotoxy(60,16); cout << " - Logical: and, or";
		gotoxy(60,17); cout << " - Example: m > n and s < t & m > n or s < t";
		
		lesson2continuational6();
}
void lesson2continuational6()
{
	cin.get();
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Design and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Pseudocodes ";
		gotoxy(8,7); cout << " A. How to write Pseudocodes";
		gotoxy(8,8); cout << " B. KEYWORDS ";
		gotoxy(8,9); cout << " C. COMMON OPERATORS";
		
		gotoxy(8,10); char l2strings[1000] = {" D. KEYWORDS in CONDITIONAL: "};
		for(int x= 0; x < strlen(l2strings); x++)
	{
		cout << l2strings[x];
		Sleep(50);
	}
	gotoxy(60,7); cout << " - During algorithm development, we need statements which evaluate";
	gotoxy(60,8); cout << " expressions and execute instructions depending on whether the";
	gotoxy(60,9); cout << " expression evaluated to True or False.";
	gotoxy(60,11); cout << " - Here are some common conditions used in Pseudocode: ";
	gotoxy(60,13); cout << " - IF - THEN - ENDIF ";
	gotoxy(60,15); cout << " - IF - ELSE IF - ENDIF ";
	gotoxy(60,17); cout << " - IF - ELSE IF - ELSE - ENDIF ";
	gotoxy(60,19); cout << " - CASE - OTHERS - ENDCASE ";	
	
	lesson2continuation7();				
}
void lesson2continuation7()
{
	cin.get();
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Design and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Pseudocodes ";
		gotoxy(8,7); cout << " A. How to write Pseudocodes";
		gotoxy(8,8); cout << " B. KEYWORDS ";
		gotoxy(8,9); cout << " C. COMMON OPERATORS";
		gotoxy(8,10); cout  << " D. KEYWORDS in CONDITION";
		
		gotoxy(8,11); char l2strings[1000] = {" E. EXAMPLES: "};
		for(int x= 0; x < strlen(l2strings); x++)
	{
		cout << l2strings[x];
		Sleep(50);
	}
		gotoxy(60,7); cout << "1. IF you are happy";
		gotoxy(64,8); cout << "THEN smile";
		gotoxy(60,9); cout << " ENDIF";
		gotoxy(60,11); cout << "2. IF you are happy THEN";
		gotoxy(64,12); cout << "smile";
		gotoxy(60,13); cout << "ELSE";
		gotoxy(64,14); cout << "frown";
		gotoxy(60,15); cout << "ENDIF";
		gotoxy(60,17); cout << "3.  IF you are happy THEN";
		gotoxy(64,18); cout << "smile";
		gotoxy(60,19); cout << "ELSE";
		gotoxy(64,20); cout << "frown";
		gotoxy(60,21); cout << "ELSE";
		gotoxy(60,22); cout << "keep the face plain";
		gotoxy(60,23); cout << "ENDIF";
		
		lesson2continuation8();
}
void lesson2continuation8()
{
		cin.get();
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Design and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Pseudocodes ";
		gotoxy(8,7); cout << " A. How to write Pseudocodes";
		gotoxy(8,8); cout << " B. KEYWORDS ";
		gotoxy(8,9); cout << " C. COMMON OPERATORS";
		gotoxy(8,10); cout  << " D. KEYWORDS in CONDITION";
		gotoxy(8,11); cout << " E. EXAPMLES";
		
		gotoxy(4,12); char l2strings[1000] = {" 3. FLOWCHARTS: "};
		for(int x= 0; x < strlen(l2strings); x++)
	{
		cout << l2strings[x];
		Sleep(50);
	}
		gotoxy(60,7); cout << " - Flowchart is a pictorial representation of an ordered, step-by-step solution to a problem.";
		gotoxy(60,9); cout << " - Program Flowchart - is a diagram that uses a set of standard graphic symbols to represent the sequence of ";
		gotoxy(60,10); cout << "coded instructions fed into a, enabling it to perform specified logical and arithmetical operations";
		
		lesson2continuation9();
	
}
void lesson2continuation9()
{
		cin.get();
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Design and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Pseudocodes ";
		gotoxy(8,7); cout << " A. How to write Pseudocodes";
		gotoxy(8,8); cout << " B. KEYWORDS ";
		gotoxy(8,9); cout << " C. COMMON OPERATORS";
		gotoxy(8,10); cout  << " D. KEYWORDS in CONDITION";
		gotoxy(8,11); cout << " E. EXAPMLES";
		gotoxy(4,12); cout << " 3. Flowcharts";
		
		gotoxy(8,13); char l2strings[1000] = {" A. FLOWCHART SYMBOLS: "};
		for(int x= 0; x < strlen(l2strings); x++)
	{
		cout << l2strings[x];
		Sleep(50);
	}
		gotoxy(60,7); cout << " - HEXAGON - Initialization";
		gotoxy(60,9); cout << " - DIAMOND - Decision";
		gotoxy(60,11); cout << " - OVAL - Beginning or End of a Program";
		gotoxy(60,13); cout << " - RECTANGLE - Process";
		gotoxy(60,15); cout << " - PARALLELOGRAM - Input/Output";
		gotoxy(60,17); cout << " - ARROWS - Flow Lines";
		gotoxy(60,19); cout << " - CIRCLE - On Page Connector";
		gotoxy(60,21); cout << " - PENTAGON - Off Page Connector";		
		
		lesson2continuation10();		
}
void lesson2continuation10()
{
		cin.get();
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Design and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Pseudocodes ";
		gotoxy(8,7); cout << " A. How to write Pseudocodes";
		gotoxy(8,8); cout << " B. KEYWORDS ";
		gotoxy(8,9); cout << " C. COMMON OPERATORS";
		gotoxy(8,10); cout  << " D. KEYWORDS in CONDITION";
		gotoxy(8,11); cout << " E. EXAPMLES";
		gotoxy(4,12); cout << " 3. Flowcharts";
		gotoxy(8,13); cout << " A. FLOWCHART SYMBOLS: ";
		
		gotoxy(8,14); char l2strings[1000] = {" B. FLOWCHART STRUCTURES: "};
		for(int x= 0; x < strlen(l2strings); x++)
	{
		cout << l2strings[x];
		Sleep(50);
	}
		gotoxy(60,7); cout << " - Flowcharts can be used to express different structures: ";
		gotoxy(60,8); cout << " - Sequence";
		gotoxy(60,9); cout << " - Selection / Conditional";
		gotoxy(60,10); cout << " - Loop";
		
		lesson2continuation11();
}
void lesson2continuation11()
{
		cin.get();
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Design and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Pseudocodes ";
		gotoxy(8,7); cout << " A. How to write Pseudocodes";
		gotoxy(8,8); cout << " B. KEYWORDS ";
		gotoxy(8,9); cout << " C. COMMON OPERATORS";
		gotoxy(8,10); cout  << " D. KEYWORDS in CONDITION";
		gotoxy(8,11); cout << " E. EXAPMLES";
		gotoxy(4,12); cout << " 3. Flowcharts";
		gotoxy(8,13); cout << " A. FLOWCHART SYMBOLS: ";
		gotoxy(8,14); cout << " B. FLOWCHART STRUCTURES";
		
		gotoxy(8,15); char l2strings[1000] = {" C. FLOWCHART GUIDELINES: "};
		for(int x= 0; x < strlen(l2strings); x++)
	{
		cout << l2strings[x];
		Sleep(50);
	}
		gotoxy(60,7); cout << " -  In drawing a proper flowchart, all necessary requirements should be listed out in logical order.";
		gotoxy(60,9); cout << " -  The flowchart should be clear, neat and easy to follow.";
		gotoxy(60,11); cout << " - The usual direction of the flow of a procedure or system is from left to right or top to bottom.";
		gotoxy(60,13); cout << " - Only one flow line should come out from a process symbol.";
		gotoxy(60,15); cout << " - Only one flow line should enter a decision symbol, but two or";
		gotoxy(60,16); cout << " - three flow lines, one for each possible answer, should leave the decision symbol.";
		gotoxy(60,18); cout << " - Ensure that the flowchart has a logical start and finish.";
		gotoxy(60,20); cout << " - If the flowchart becomes complex, it's better to use connector symbols to reduce the number of flow lines. ";
		gotoxy(60,22); cout << " - Avoid the intersection of flow lines if you want to make it more effective and better";
		cin.get();
		
		ending();
	} 
void ending()
{
	system("cls");
	gotoxy(56,2); char str[1000] = {" YOU HAVE SUCCESSFULLY FINISHED THE MODULE! GET READY FOR A QUIZ!"};
	 	for(int x= 0; x < strlen(str); x++)
	{
		cout << str[x];
		Sleep(50);
	}

 cin.get();
 
 lesson2quiz();
}
void lesson2quiz()
{
	char answer;
	system("cls");
	gotoxy(4,2);cout<<" LESSON 2 QUIZ";
	gotoxy(4,5);cout<<"1. Flowchart is a pictorial representation of an ordered, step-by-step solution to a problem.";
	gotoxy(4,6);cout<<"[A] TRUE";
	gotoxy(4,7);cout<<"[B] FALSE";
	gotoxy(4,8);cout<<"[C] NO ANSWER TEXT PROVIDED. ";
	gotoxy(4,9);cout<<"Answer: "; gotoxy(11,9); cin >> answer;
	switch(answer){
		case 'A':
		case 'a':
			gotoxy(10,10);cout<<"Correct! You are learning!";
			break;
		case 'C':
		case 'c':
		case 'B':
		case 'b':
			gotoxy(10,10);cout<<"Incorrect! Just keep on trying!";
			break;
		}
	cin.get();
	cin.get();
	
	lesson2quiz2();
	
	
}
void lesson2quiz2()
{
	char answer;

	
	gotoxy(4,11);cout<<"2. The Flowchart should be not clear, neat and easy to follow.";
	gotoxy(4,12);cout<<"[A] TRUE";
	gotoxy(4,13);cout<<"[B] FALSE";
	gotoxy(4,14);cout<<"[C] NO ANSWER TEXT PROVIDED. ";
	gotoxy(4,15);cout<<"Answer: "; gotoxy(11,15); cin >> answer;
	switch(answer){
		case 'B':
		case 'b':
			gotoxy(10,16);cout<<"Correct! You are learning!";
			break;
		case 'C':
		case 'c':
		case 'A':
		case 'a':
			gotoxy(10,16);cout<<"Incorrect! Just keep on trying!";
			break;
		}
	cin.get();
	cin.get();
	
	lesson2quiz3();
	
}
void lesson2quiz3()
{
	char answer;

	
	gotoxy(4,18);cout<<"3. Flowcharts can be used to express different structures";
	gotoxy(4,19);cout<<"[A] TRUE";
	gotoxy(4,20);cout<<"[B] FALSE";
	gotoxy(4,21);cout<<"[C] NO ANSWER TEXT PROVIDED. ";
	gotoxy(4,22);cout<<"Answer: "; gotoxy(11,22); cin >> answer;
	switch(answer){
		case 'A':
		case 'a':
			gotoxy(10,23);cout<<"Correct! You are learning!";
			break;
		case 'C':
		case 'c':
		case 'B':
		case 'b':
			gotoxy(10,23);cout<<"Incorrect! Just keep on trying!";
			break;
		}
	cin.get();
	cin.get();
	
	lesson2question();
	
	
}

void lesson2question()
{
	system("cls");
	
	string answer;
	string operation;
	
	gotoxy(4,15); cout << " Are you sure you want to continue? " << endl;
	gotoxy(4,16); cout << " [YES] " << endl; 
	gotoxy(4,17); cout << " [NO] " << endl;
	gotoxy(4,18); cout << " Answer: ";
	gotoxy(12,18); cin >> answer;
	
	if(answer == "NO" || answer == "no" || answer == "No"){
		system("cls");
		lesson1();
	}
	else if (answer == "YES" || answer == "yes" || answer == "Yes"){
		system("cls");
	}
}

//Functions for Module 3

void lesson3()
{

	gotoxy(65,2);cout<<"LESSON 3:"; Sleep(1000); gotoxy(75,2);cout<<"C";Sleep(50);cout<<"O";Sleep(50);cout<<"N";Sleep(50);cout<<"G";
	Sleep(50);cout<<"R";Sleep(50);cout<<"A";Sleep(50);cout<<"T";Sleep(50);cout<<"U";Sleep(50);cout<<"L";Sleep(50);cout<<"A";
	Sleep(50);cout<<"T";Sleep(50);cout<<"I";Sleep(50);cout<<"O";Sleep(50);cout<<"N";Sleep(50);cout<<"S";Sleep(50);cout<<"!";
	Sleep(50);cout<<" ";Sleep(50);cout<<"Y";Sleep(50);cout<<"O";Sleep(50);cout<<"U";Sleep(50);cout<<" ";Sleep(50);cout<<"H";Sleep(100);cout<<"A";
	Sleep(50);cout<<"V";Sleep(50);cout<<"E";Sleep(50);cout<<" ";Sleep(50);cout<<"S";Sleep(50);cout<<"U";Sleep(50);cout<<"R";
	Sleep(50);cout<<"V";Sleep(50);cout<<"I";Sleep(50);cout<<"V";Sleep(50);cout<<"E";Sleep(50);cout<<"D";Sleep(50);cout<<" ";
	Sleep(50);cout<<"U";Sleep(50);cout<<"P";Sleep(50);cout<<" ";Sleep(50);cout<<"T";Sleep(50);cout<<"O";Sleep(50);cout<<" ";
	Sleep(50);cout<<"T";Sleep(50);cout<<"H";Sleep(50);cout<<"I";Sleep(50);cout<<"S";Sleep(50);cout<<" ";Sleep(50);cout<<"L";
	Sleep(50);cout<<"E";Sleep(50);cout<<"S";Sleep(50);cout<<"S";Sleep(50);cout<<"O";Sleep(50);cout<<"N.";
	gotoxy(90,50);cout<<"(press the enter key to continue)";
	cin.get();
	system("CLS");

	lesson3diagram1();
}

void lesson3diagrambox()
{
	gotoxy(70,6);cout<<"____________________________________________________________________________________";
	gotoxy(70,30);cout<<"____________________________________________________________________________________";
}
void lesson3diagram1()
{
	system("CLS");
	
	gotoxy(65,2);cout<<"LESSON 3: CONVERSION OF VARIABLES";
	gotoxy(1,4);char asd[1000] = {"In this lesson you will learn the ff:"}; 
	for(int x= 0; x < strlen(asd);x++)
	{cout << asd[x]; Sleep(50);}
	cin.get();
	
	gotoxy(3,5);char asd1[1000] = {"STRUCTURE OF C++"}; 
	for(int x= 0; x < strlen(asd1);x++)
	{cout << asd1[x]; Sleep(50);}
	cin.get();
	gotoxy(3,6);char asd2[1000] = {"Variables used in C++ program"}; 
	for(int x= 0; x < strlen(asd2);x++)
	{cout << asd2[x]; Sleep(50);}
	cin.get();
	gotoxy(3,7);char asd3[1000] = {"Data-Types used in C++ program"}; 
	for(int x= 0; x < strlen(asd3);x++)
	{cout << asd3[x]; Sleep(50);}
	cin.get();
	gotoxy(3,8);char asd4[1000] = {"How to declare variables in C++ program"}; 
	for(int x= 0; x < strlen(asd4);x++)
	{cout << asd4[x]; Sleep(50);}
	cin.get();
	gotoxy(3,9);char asd5[1000] = {"Operators used in C++ program"}; 
	for(int x= 0; x < strlen(asd5);x++)
	{cout << asd5[x]; Sleep(50);}
	cin.get();

	lesson3diagram2();
}

void lesson3diagram2()
{
	system("CLS");
	gotoxy(65,2);cout<<"LESSON 3: CONVERSION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson3diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(101,8);cout<<"Sample code:";
	gotoxy(80,10);cout<<"Pre-processor directive ->	#include <iostream>.";
	gotoxy(112,12);cout<<"using namespace std;";
	gotoxy(96,14);cout<<"Comment ->";
	gotoxy(112,14);cout<<"//This is my first program in C++";
	gotoxy(90,16);cout<<"main function ->";
	gotoxy(112,16);cout<<"int main ()";
	gotoxy(83,18);cout<<"Start of the program ->";
	gotoxy(112,18);cout<<"{";
	gotoxy(87,20);cout<<"Output statement ->";
	gotoxy(114,20);cout<<"cout<<\"HelloWorld\"";
	gotoxy(97,22);cout<<"Return ->";
	gotoxy(114,22);cout<<"return 0";
	gotoxy(85,24);cout<<"End of the program ->";
	gotoxy(112,24);cout<<"}";
	cin.get();
	
	lesson3diagram3();
}
void lesson3diagram3()
{
	system("CLS");
	
	gotoxy(65,2);cout<<"LESSON 3: CONVERSION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson3diagrambox();
	gotoxy(65,2);cout<<"LESSON 3: CONVERSION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson3diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(75,10);cout<<"A variable is also known as user-defined identifier, It is a data storage";
	gotoxy(75,12);cout<<"location that has a value, which can change during program execution.";
	gotoxy(75,14);cout<<"By using a variable's name in your program, you are, in effect reffering";
	gotoxy(75,16);cout<<"to the data stored there.";


	cin.get();
	
	lesson3diagram4();
}

void lesson3diagram4()
{
	system("CLS");
	
	gotoxy(65,2);cout<<"LESSON 3: CONVERSION OF VARIABLES";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson3diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(75,10);cout<<"Variables can be given any name up to 31 characters in length which is,";
	gotoxy(75,12);cout<<"composed of any of the following characters:";
	gotoxy(75,14);cout<<"Characters a to z and A to z";
	gotoxy(75,16);cout<<"(NOTE: upper case and lower case are distinct";
	gotoxy(75,18);cout<<"The first character must be a letter.";
	gotoxy(75,20);cout<<"Only letters, digits or underscores may follow the initial letter.";
	gotoxy(75,22);cout<<"Blank spaces and special characters are not allowed.";
	
	cin.get();
		
	lesson3diagram5();
}
void lesson3diagram5()
{
	system("CLS");
	
	gotoxy(85,2);cout<<"LESSON 3: CONVERSION OF VARIABLES";gotoxy(75,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson3diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(75,10);cout<<"All variables use DATA-TYPE during declaration to restrict the type of";
	gotoxy(75,12);cout<<"data to be stored. Therefore, we can say that data types are used to";
	gotoxy(75,14);cout<<"tell the variables type of data it can store.";
	gotoxy(75,18);cout<<"(Whenever a variable is defined in C++, the compiler allocates some memory";
	gotoxy(75,20);cout<<"for that variable based on the data-type with which it is declared";
	gotoxy(75,22);cout<<"Every data type requires different amount of memory.";
	
	
	cin.get();
	
	lesson3diagram6();
}
void lesson3diagram6()

{
	system("CLS");

	gotoxy(70,6);cout<<"____________________________________________________________________________________";
	gotoxy(70,42);cout<<"____________________________________________________________________________________";

	gotoxy(65,2);cout<<"LESSON 3: CONVERSION OF VARIABLES";
	gotoxy(75,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(95,8);cout<<"C++ DATA TYPES";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(75,10);cout<<"Type";
	gotoxy(100,10);cout<<"Approximate size";
	gotoxy(123,10);cout<<"Minimal Range.";
	gotoxy(75,12);cout<<"char";
	gotoxy(100,12);cout<<"8";
	gotoxy(123,12);cout<<"-127 to 127";
	gotoxy(75,14);cout<<"unsigned char";
	gotoxy(100,14);cout<<"8";
	gotoxy(123,14);cout<<"0 to 255";
	gotoxy(75,16);cout<<"signed char";
	gotoxy(100,16);cout<<"8";
	gotoxy(123,16);cout<<"-127 to 127";
	gotoxy(75,18);cout<<"int";
	gotoxy(100,18);cout<<"16";
	gotoxy(123,18);cout<<"-23,767 to 32,767";
	gotoxy(75,20);cout<<"unsigned int";
	gotoxy(100,20);cout<<"16";
	gotoxy(123,20);cout<<"0 to 65,535";		
	gotoxy(75,22);cout<<"signed int";
	gotoxy(100,22);cout<<"16";
	gotoxy(123,22);cout<<"Same as int";	
	gotoxy(75,24);cout<<"Short int";
	gotoxy(100,24);cout<<"16";
	gotoxy(123,24);cout<<"Same as int";
	gotoxy(75,26);cout<<"unsigned short int";
	gotoxy(100,26);cout<<"16";
	gotoxy(123,26);cout<<"0 to 65,535";	
	gotoxy(75,28);cout<<"signed short int";
	gotoxy(100,28);cout<<"16";
	gotoxy(123,28);cout<<"Same as short int";
	gotoxy(75,30);cout<<"long int";
	gotoxy(100,30);cout<<"32";
	gotoxy(123,30);cout<<"-2,147,483,647 to 2,147,483,647";	
	gotoxy(75,32);cout<<"signed long int";
	gotoxy(100,32);cout<<"32";
	gotoxy(123,32);cout<<"same as long int";		
	gotoxy(75,34);cout<<"unsigned long int";
	gotoxy(100,34);cout<<"32";
	gotoxy(123,34);cout<<"0 to 4,294,967,265";
	gotoxy(75,36);cout<<"float";
	gotoxy(100,36);cout<<"32";
	gotoxy(123,36);cout<<"Six digits of precision";	
	gotoxy(75,38);cout<<"double";
	gotoxy(100,38);cout<<"64";
	gotoxy(123,38);cout<<"Ten digits of precision";	
	gotoxy(75,40);cout<<"long double";
	gotoxy(100,40);cout<<"80";
	gotoxy(123,40);cout<<"Ten digits of precision";							
						
	cin.get();
	
	lesson3diagram8();
}


void lesson3diagram8()
{
	system("CLS");
	
	gotoxy(65,2);cout<<"LESSON 3: CONVERSION OF VARIABLES";gotoxy(75,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson3diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(7,12);cout<<"4.How to Declare Variables?";
	gotoxy(75,10);cout<<"Syntax:";
	gotoxy(77,12);cout<<"datatype  variable_name;";
	gotoxy(77,14);cout<<"datatype  var1, var2, varn;";
	gotoxy(75,16);cout<<"(Examples:";
	gotoxy(77,18);cout<<"int value;";
	gotoxy(77,20);cout<<"char letter ; (letter variable can only store single character input)";
	gotoxy(77,22);cout<<"float num;";
	gotoxy(77,24);cout<<"int a, size, x;";
	gotoxy(77,26);cout<<"double interest, profit;";
	gotoxy(77,28);cout<<"char name[20] (name variable can store up to  20 character input)";
	
	

	cin.get();
	
	lesson3diagram9();
}
void lesson3diagram9()
{
	system("CLS");
	
	gotoxy(65,2);cout<<"LESSON 3: CONVERSION OF VARIABLES";gotoxy(75,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson3diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(7,12);cout<<"4.How to Declare Variables?";
	gotoxy(7,14);cout<<"5.C++ Operators";
	gotoxy(72,10);cout<<"Operators are the symbols that tell the compiler to perform specific mathematical manipulations";
	gotoxy(74,12);cout<<"Types of Operators";
	gotoxy(76,14);cout<<"Assignment Operators";
	gotoxy(76,16);cout<<"Arithmetic Operators";
	gotoxy(76,18);cout<<"Compound Operators";
	gotoxy(76,20);cout<<"Relational Operators";
	gotoxy(76,22);cout<<"Logical Operators";
	
	cin.get();
	
	lesson3diagram10();
}
void lesson3diagram10()
{
	system("CLS");
	
	gotoxy(65,2);cout<<"LESSON 4: CONVERSION OF VARIABLES";gotoxy(75,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson3diagrambox();
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(7,12);cout<<"4.How to Declare Variables?";
	gotoxy(7,14);cout<<"5.C++ Operators";
	gotoxy(9,16);cout<<"a. Assignment Operators";
	gotoxy(105,10);cout<<"ASSIGNMENT OPERATOR";
	gotoxy(77,12);cout<<"In C++, assignment operator is a single equal sign (=) which means that the value";
	gotoxy(77,14);cout<<"on the right side of the assignment expression after the equal sign is assigned";
	gotoxy(77,16);cout<<"to the variable on the left.";
	gotoxy(77,18);cout<<"EXAMPLE:";
	gotoxy(81,20);cout<<"sum= x+y";

	
	cin.get();
	
	lesson3diagram11();
}

void lesson3diagram11()
{
		system("CLS");

	gotoxy(70,6);cout<<"____________________________________________________________________________________";
	gotoxy(70,34);cout<<"____________________________________________________________________________________";
	gotoxy(65,2);cout<<"LESSON 3: CONVERSION OF VARIABLES";gotoxy(75,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(7,12);cout<<"4.How to Declare Variables?";
	gotoxy(7,14);cout<<"5.C++ Operators";
	gotoxy(9,16);cout<<"a. Assignment Operators";
	gotoxy(9,18);cout<<"b. ArithMetic Operators";
	gotoxy(100,10);cout<<"ARITHMETIC OPERATORS";
	gotoxy(72,12);cout<<"Operator precedence specifies the order of operations in expressions that contain";
	gotoxy(72,14);cout<<"more than  one operator.";
	gotoxy(72,16);cout<<"Operator associativity specifies whether, in an expression that contains multiple operators";
	gotoxy(72,18);cout<<"with the same precedure, an operand is grouped with the one on its left or the one on its right.";
	gotoxy(105,21);cout<<"ORDER OF PRECEDENCE";
	gotoxy(103,23);cout<<"Left to Right Evaluation";
	gotoxy(112,25);cout<<"()";
	gotoxy(110,27);cout<<"++, --";
	gotoxy(110,29);cout<<"*,/,%";
	gotoxy(111,31);cout<<"+,-";	
	gotoxy(111,33);cout<<". =";
	
	cin.get();
	
	lesson3diagram12();
}

void lesson3diagram12()
{
		system("CLS");

	gotoxy(70,6);cout<<"____________________________________________________________________________________";
	gotoxy(70,34);cout<<"____________________________________________________________________________________";
	gotoxy(65,2);cout<<"LESSON 3: CONVERSION OF VARIABLES";gotoxy(75,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	gotoxy(7,6);cout<<"1.STRUCTURE OF C++";
	gotoxy(7,8);cout<<"2.Variables";
	gotoxy(7,10);cout<<"3.Data-Types";
	gotoxy(7,12);cout<<"4.How to Declare Variables?";
	gotoxy(7,14);cout<<"5.C++ Operators";
	gotoxy(9,16);cout<<"a. Assignment Operators";
	gotoxy(9,18);cout<<"b. Arithetic Operators";
	gotoxy(9,20);cout<<"c. Compound Operators";
	gotoxy(100,10);cout<<"COMPOUND OPERATORS";
	gotoxy(82,12);cout<<"Below are the compound operators";
	gotoxy(82,14);cout<<"+=, -=, *=, /=, %=";
	gotoxy(82,16);cout<<"Examples";
	gotoxy(82,18);cout<<"x += y;";
	gotoxy(84,19);cout<<"^";
	gotoxy(84,20);cout<<"^";
	gotoxy(82,21);cout<<"compound operator";
	gotoxy(110,16);cout<<"expression";
	gotoxy(125,16);cout<<"equivalent to...";
	gotoxy(110,18);cout<<"y += x;";
	gotoxy(110,19);cout<<"x -= 5;";
	gotoxy(110,20);cout<<"x /= y;";	
	gotoxy(125,18);cout<<"y = y + x;";
	gotoxy(125,19);cout<<"x = x - 5;";	
	gotoxy(125,20);cout<<"x = x / y;";	
	
	
	cin.get();
}

//Functions for Lesson 4
void lesson4()
{

maximizeWindow();
	char intro[100] = {"Module 4 - Basic Input and Output"};
	
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
	cin.get();


	canvas();
	earlBox();
	
	gotoxy(20, 14); cout << "pow() = Raise to power."; cin.get();
	gotoxy(20, 16); cout << "sqrt() = Compute square root."; cin.get();
	gotoxy(20, 18); cout << "These functions are under the <math.h> header."; cin.get();
	
	gotoxy(115, 14); cout << "pow(base, exponent)"; cin.get();
	gotoxy(115, 16); cout << "sqrt(variable)"; cin.get();
	gotoxy(115, 18); cout << "#include <iostream>"; cin.get();
	gotoxy(115, 19); cout << "#include <math.h>"; cin.get();
	
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
	
	gotoxy(50, 42); cout << a << " raised to 2 is " << p; cin.get();
	gotoxy(50, 44); cout << "The square root of " << a << " is " << sq; cin.get();


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
	
	float j = 2.3;
	
	gotoxy(50, 40); cout << "Floor is: " << floor(j); cin.get();
	gotoxy(50, 42); cout << "Ceiling is: " << ceil(j); cin.get();

	
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

	cin.get();
	system("cls");
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
	
	Sleep(3000);
}

//Functions for Lesson 5

void Genesistable()
{
	//tabledimensions=11X16
	//thickframes
	gotoxy(0,0);cout<<(char)201;
	gotoxy(1,0);
	for(int g=0;g<110;g++){
		cout<<(char)205;
	}
	for(int e=1;e<=40;e++){
		gotoxy(0,e);
		cout<<(char)186;
	}
	gotoxy(0,3);cout<<(char)204;
	for(int c=1;c<110;c++){
		gotoxy(c,3); cout<<(char)205;
	}
	gotoxy(110,0);cout<<(char)187;
	gotoxy(110,0);
	for(int n=1;n<41;n++){
		gotoxy(110,n);
		cout<<(char)186;
	}
	gotoxy(110,3);cout<<(char)185;
	gotoxy(0,41);cout<<(char)200;
	gotoxy(110,41);cout<<(char)188;
	gotoxy(1,41);
	for(int s=1;s<110;s++){
	cout<<(char)205;
	}
	for(int h=0;h<105;h++){
	h+=6;
	for(int c=1;c<41;c++){	
	gotoxy(h,c); cout<<(char)179;
		}
	}
	for(int a=3;a<37;a++){
		a+=3;
		for(int r=1;r<110;r++){
		gotoxy(r,a);
		cout<<(char)196;
		}
	}	
}
void asciitablecontent()
{
	//tableheadlines
	gotoxy(1,1);cout<<"ASCII"; gotoxy(1,2);cout<<"Code"; 
	gotoxy(7,1);cout<<"letter"; gotoxy(14,1);cout<<"ASCII";gotoxy(14,2);cout<<"Code";
	gotoxy(21,1);cout<<"letter"; gotoxy(28,1);cout<<"ASCII";gotoxy(28,2);cout<<"Code";
	gotoxy(35,1);cout<<"letter";gotoxy(42,1);cout<<"ASCII"; gotoxy(42,2);cout<<"Code";
	gotoxy(49,1);cout<<"letter";gotoxy(56,1);cout<<"ASCII";gotoxy(56,2);cout<<"Code";
	gotoxy(63,1);cout<<"letter";gotoxy(70,1);cout<<"ASCII";gotoxy(70,2);cout<<"Code";
	gotoxy(77,1);cout<<"letter";gotoxy(85,1);cout<<"ASCII";gotoxy(85,2);cout<<"Code";
	gotoxy(91,1);cout<<"letter";gotoxy(99,1);cout<<"ASCII";gotoxy(99,2);cout<<"Code";gotoxy(105,1);cout<<"lettr";
	//mga numbers and symbols sa table
	gotoxy(2,4);cout<<97;gotoxy(2,8);cout<<98;gotoxy(2,12);cout<<99;gotoxy(2,16);cout<<100;gotoxy(2,20);cout<<101;gotoxy(2,24);cout<<102;gotoxy(2,28);
	cout<<103;gotoxy(2,32);cout<<104;gotoxy(2,36);cout<<105;gotoxy(2,39);cout<<106; 
	
	//asciicode97-106
	int space1=0;
	int asciicodeko1=96;
	for(int i=0;i<10;i++){
		space1+=4;
		asciicodeko1+=1;
		gotoxy(9,space1);
		cout<<(char)asciicodeko1;
	}
	//number107-116
	int space2=0;
	int numberingko2=106;
	for(int t=0;t<10;t++){
	space2+=4;
	numberingko2+=1;
	gotoxy(16,space2);
	cout<<numberingko2;
	gotoxy(23,space2);
	cout<<(char)numberingko2;
	}

	//number117-127
	int space4=0;
	int numberingko4=116;
	for(int o=0;o<10;o++){
	space4+=4;
	numberingko4+=1;
	gotoxy(30,space4);
	cout<<numberingko4;
	//asciicode117-127
	gotoxy(37,space4);
	cout<<(char)numberingko4;
	}
	//number70-80
	int space6=0;
	int numberingko6=70;
	for(int n=0;n<10;n++){
	space6+=4;
	numberingko6+=1;
	gotoxy(44,space6);
	cout<<numberingko6;
	//asciicode70-80
	gotoxy(51,space6);
	cout<<(char)numberingko6;
    }
    //number80-90
    int space7=0;
    int numberingko7=80;
    for(int h=0;h<10;h++){
    	space7+=4;
    	numberingko7+=1;
    	gotoxy(58,space7);
    	cout<<numberingko7;
    	//asciicode80-90
    	gotoxy(65,space7);
    	cout<<(char)numberingko7;
	}
	//number40-50
    int space8=0;
    int numberingko8=40;
    for(int u=0;u<10;u++){
    	space8+=4;
    	numberingko8+=1;
    	gotoxy(72,space8);
    	cout<<numberingko8;
    	//asciicode40-50
    	gotoxy(79,space8);
    	cout<<(char)numberingko8;
	}
	//number50-60
    int space9=0;
    int numberingko9=50;
    for(int b=0;b<10;b++){
    	space9+=4;
    	numberingko9+=1;
    	gotoxy(86,space9);
    	cout<<numberingko9;
    	//asciicode50-60
    	gotoxy(93,space9);
    	cout<<(char)numberingko9;
	}
	    //number60-70
    int space10=0;
    int numberingko10=60;
    for(int x=0;x<10;x++){
    	space10+=4;
    	numberingko10+=1;
    	gotoxy(100,space10);
    	cout<<numberingko10;
    	//asciicode60-70
    	gotoxy(107,space10);
    	cout<<(char)numberingko10;
	}
}
void lesson5outputscreen()
{
	//Headbar and bottom 
	for(int i=90;i<150;i++){
		gotoxy(i,32);
		cout<<(char)196;
		gotoxy(i,34);
		cout<<(char)196;
		gotoxy(i,43);
		cout<<(char)196;
	}
	gotoxy(91,33);cout<<"c:\\users\\pc\\desktop\\lesson5.exe";
	gotoxy(140,33);cout<<(char)179;gotoxy(141,33);cout<<"-";gotoxy(142,33);cout<<(char)179;
	gotoxy(144,33);cout<<(char)254;gotoxy(146,33);cout<<(char)179;gotoxy(148,33);cout<<"X"; gotoxy(150,33);cout<<(char)179;
	//vertical borders
	for(int o=33;o<43;o++){
		gotoxy(90,o);
		cout<<(char)179;
		gotoxy(150,o);
		cout<<(char)179;
	}
	//corners
	gotoxy(90,32);cout<<(char)218; gotoxy(150,32); cout<<(char)191; gotoxy(90,43);cout<<(char)192; gotoxy(150,43);cout<<(char)217;
}
void lesson5intro()
{
	char lesson5headline[50]={"LESSON 5:PROGRAM CONTROL STRUCTURE:CONDITIONAL"};
	char lesson5headline2[20]={"CONTROL STRUCTURE"};
	gotoxy(115,1);
	for(int p=0;p<strlen(lesson5headline);p++){
	cout<<lesson5headline[p];Sleep(50);
	}
	gotoxy(130,2);
	for(int o=0;o<strlen(lesson5headline2);o++){
	cout<<lesson5headline2[o];
	Sleep(50);
	}
	gotoxy (117,3);cout<<"RECAP: "; Sleep(600);
	gotoxy(115,5);cout<<"The Ascii Table";
	Genesistable();
	asciitablecontent();
	gotoxy(115,6);cout<<"-The 'American Standard Code for Information"; 
	gotoxy(114,7);cout<<"Interchange' is a character encoding standard";
	gotoxy(114,8);cout<<"for electronic communication, these codes";
	gotoxy(114,9);cout<<"represent text in computers."; cin.get();
	gotoxy(117,11);cout<<"Conditional Statements: Key Guidelines"; cin.get();
	gotoxy(115,13);cout<<"Relational Operators: "; Sleep(500);
	gotoxy(116,14);cout<<"-creates expressions or 'conditions' that result in"; 
	gotoxy(115,15);cout<<"either 'true(1)' or 'false(0)'."; cin.get();
	gotoxy(115,17);cout<<"Relational Operator  |  Interpretation";
	gotoxy(115,18);cout<<"        <            |     Less than";
	gotoxy(115,19);cout<<"        >            |    Greater than";
	gotoxy(115,20);cout<<"        <=           |  Less than or equal";
	gotoxy(115,21);cout<<"        >=           | Greater than or equal";
	gotoxy(115,22);cout<<"        ==           |      Equal to";
	gotoxy(115,23);cout<<"        !=           |     Not Equal To";
	cin.get();
	gotoxy(115,25);cout<<"ANATOMY OF A RELATIONAL EXPRESSION"; Sleep(1000);
	gotoxy(115,27);cout<<"grade >= 70";
	gotoxy(140,27);Sleep(500);cout<<"grade -> operand";
	gotoxy(140,28);Sleep(500);cout<<">=    -> relational operator";
	gotoxy(140,29);Sleep(500);cout<<"70    -> operand"; cin.get();
	gotoxy(115,31);cout<<"INTERPRETATION:"; char relationalexpinterpret[50]={"Grade is greater than or equal to 70."};
	gotoxy(120,32);
		for(int y=0;y<strlen(relationalexpinterpret);y++){
			cout<<relationalexpinterpret[y]; Sleep(50);
		}
	cin.get();
}
void lesson5_2ndpart(){
	system("CLS");
	Genesistable();
	asciitablecontent();
	for(int i=0;i<5;i++){
		char headsup[20]={"HEADS UP!"};
		char eraser[20]={"\b\b\b\b\b\b\b\b"};
		gotoxy(130,1);
		for(int x=0;x<strlen(headsup);x++){
			cout<<headsup[x];Sleep(50);
		}
		for(int y=0;y<strlen(eraser);y++){
			cout<<eraser[y];Sleep(50);
		}
	}
	gotoxy(115,3);cout<<"Character Data can also be compared using";
	gotoxy(117,4);cout<<"relational operators!"; Sleep(1500);
	gotoxy(115,6);cout<<"EXAMPLE: The expression 'b'>'Z'"; cin.get();
	gotoxy(117,7);cout<<"Refering to the Ascii table: "; Sleep(1000);
	gotoxy(117,8);cout<<"Character 'b' is valued at 98"; Sleep(1000);
	gotoxy(117,9);cout<<"Character 'Z' is valued at 90"; Sleep (1000);
	gotoxy(115,10);cout<<"Therefore, 'b'>'Z' is interpreted as 98 > 90."; cin.get();
	gotoxy(115,12);cout<<" EXPRESSION | VALUE | INTERPRETATION";
	gotoxy(115,13);cout<<"  'A'>'C'   |   0   |      False";
	gotoxy(115,14);cout<<"  'D'<='Z'  |   1   |      True";
	gotoxy(115,15);cout<<"  'E'=='F'  |   0   |      False";
	gotoxy(115,16);cout<<"  'g'>='m'  |   0   |      False";
	gotoxy(115,17);cout<<"  'b'!='c'  |   1   |      True";
	gotoxy(115,18);cout<<"  'a'=='A'  |   0   |      False";
	cin.get();
	gotoxy(113,19);cout<<"The expressions refer to the numerical code associated";
	gotoxy(115,20);cout<<"with the symbols."; Sleep(1000);
	gotoxy(113,21);cout<<"Which is then evaluated to be whether true or false."; cin.get();
	gotoxy(115,23);cout<<"|LOGICAL EXPRESSIONS|"; Sleep(500);
	gotoxy(114,24);cout<<"-complex conditions which utilize logical operators."; cin.get();
	gotoxy(115,26);cout<<"Logical Operators: ";
	gotoxy(135,26);cout<<"AND(&&)    OR(||)     NOT(!)"; cin.get();
	gotoxy(115,28);cout<<"AND (&&) Operator";
	gotoxy(115,29);cout<<"-Requires that both expressions to be 1 to output a";
	gotoxy(116,30);cout<<"value of 1."; Sleep(500);
	gotoxy(113,31);cout<<"Statement1=True"; 
	gotoxy(130,32);cout<<">"; gotoxy(134,32);cout<<"Output:True";
	gotoxy(113,33);cout<<"Statement2=True";
	gotoxy(115,35);cout<<"OR (||) Operator";
	gotoxy(115,36);cout<<"-Requires that atleast one expression to be 1 to output";
	gotoxy(116,37);cout<<" a value of 1."; Sleep(500);
	gotoxy(113,38);cout<<"Statement1=True"; 
	gotoxy(130,39);cout<<">"; gotoxy(134,39);cout<<"Output:True";
	gotoxy(113,40);cout<<"Statement2=False";
	gotoxy(115,42);cout<<"NOT (!) Operator";
	gotoxy(115,43);cout<<"-Requires for the expression to be 0 to output"; 
	gotoxy(116,44);cout<<"a value of 1."; Sleep(500);
	gotoxy(113,45);cout<<"Statement1=False -> Output: True";
	cin.get();
	system("CLS");
}
void lesson5_3rdpart(){
	//headline
	int p;
	char lesson5headline[100]={"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE"};
	char if_title[20]={"THE IF STATEMENT"};
	char note[10]={"Note!"};
	char eraser[10]={"\b\b\b\b\b"};
	gotoxy(50,1);
	for(p=0;p<strlen(lesson5headline);p++){
	cout<<lesson5headline[p];Sleep(30);
	}
	//realshit
	gotoxy(5,5);
	for(p=0;p<strlen(if_title);p++){
	cout<<if_title[p];Sleep(100);
	} Sleep(500);
	gotoxy(5,7); cout<<"-Allows you to control the flow of a certain section of a program based on a true/false condition.";
	gotoxy(6,8); cout<<"It allows the program to select an action based upon the user's input."; cin.get();
	gotoxy(5,10); cout<<"The 3 types of if statements: "; Sleep(100);
	gotoxy(6,11);cout<<"a.) if"; Sleep(100);gotoxy(6,12);cout<<"b.) if-else";Sleep(100);gotoxy(6,13);cout<<"c.) nested if";cin.get();
	gotoxy(20,15);cout<<"IF STATEMENT STRUCTURE";
	gotoxy(5,17);cout<<"1. Single Statement"; gotoxy(35,17);cout<<"2. Compound Statement";
	gotoxy(5,19);cout<<"if (expression)"; gotoxy(35,19);cout<<"if(expression){";
	gotoxy(5,20);cout<<"(do this)statement";gotoxy(35,20);cout<<"statement1";gotoxy(35,21);cout<<"statement2";gotoxy(35,22);cout<<"statement_n";gotoxy(35,23);cout<<"}";
	cin.get();
	//ANIMATION NG NOTE
		for(int i=0;i<4;i++){
		char note[10]={"NOTE!"};
		char eraser[10]={"\b\b\b\b\b\b"};
		gotoxy(5,25);
		for(int x=0;x<strlen(note);x++){
			cout<<note[x];Sleep(50);
		}
		for(int y=0;y<strlen(eraser);y++){
			cout<<eraser[y];Sleep(50);
		}
	}
	gotoxy(11,25);cout<<"The compound statement executes multiple statements due to being enclosed in brackets {}."; cin.get();
	gotoxy(110,5);cout<<"EXAMPLE: "; cin.get();
	gotoxy(110,6);cout<<"#include<iostream";
	gotoxy(110,7);cout<<"using namespace std;";
	gotoxy(110,9);cout<<"int main(){";
	gotoxy(115,10);cout<<"int no";
	gotoxy(115,11);cout<<"cout<<\"Enter a number: \";";
	gotoxy(115,12);cout<<"cin>>no;";
	gotoxy(115,13);cout<<"if(no>0)";
	gotoxy(120,14);cout<<"cout<<\"It is positive.\";";
	gotoxy(115,15);cout<<"return 0;";
	gotoxy(110,16);cout<<"}"; cin.get();
	gotoxy(110,18);cout<<"OUTPUT:"; Sleep(500);
	gotoxy(110,19);cout<<"---------if variable no is greater than 0---------";
	gotoxy(110,20);cout<<"Enter a number:3";
	gotoxy(110,21);cout<<"It is positive."; Sleep(500);
	gotoxy(110,25);cout<<"---------if variable no is lesser than 0----------";
	gotoxy(110,26);cout<<"Enter a number:4"; cin.get();
	
	char dive[15]={"A Deeper Dive!"};
	gotoxy(5,30);
	for(int n=0;n<strlen(dive);n++){
		cout<<dive[n];Sleep(100);
	}
	gotoxy(19,30);cout<<(char)217; Sleep(300);
	gotoxy(20,29);cout<<"/"; Sleep(300);
	gotoxy(21,28);cout<<"_"; Sleep(300);
	gotoxy(22,29);cout<<"\\"; Sleep(300);
	gotoxy(23,30);cout<<"|"; Sleep (300);
	gotoxy(22,31);cout<<"/"; Sleep (300);
	gotoxy(5,32);cout<<"Let's carefully examine what happened!"; cin.get();
	gotoxy(5,33);cout<<"First, we know that variable 'no' will store a value.";
	gotoxy(5,35);cout<<"Let's say, the user inputs '5' for variable no.";
	cin.get();
	system("CLS");
	//nextpage
	gotoxy(50,1);cout<<"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE";
	//sampleprogram
	gotoxy(110,6);cout<<"#include<iostream";
	gotoxy(110,7);cout<<"using namespace std;";
	gotoxy(110,9);cout<<"int main(){";
	gotoxy(115,10);cout<<"int no";
	gotoxy(115,11);cout<<"cout<<\"Enter a number: \";";
	gotoxy(115,12);cout<<"cin>>no;";
	gotoxy(115,13);cout<<"if(no>0)";
	gotoxy(120,14);cout<<"cout<<\"It is positive.\";";
	gotoxy(115,15);cout<<"return 0;";
	gotoxy(110,16);cout<<"}";
	
	lesson5outputscreen(); //outputscreen start at 91,35
	//shit na nag proprogress
	gotoxy(5,5);cout<<"no=5"; cin.get();
	gotoxy(91,35);cout<<"Enter a number: 5";
	gotoxy(5,7);cout<<"Next, the program evaluates the if statement."; gotoxy(110,13);cout<<"--->"; cin.get();
	gotoxy(5,9);cout<<"Since (no>0) is true, it executes the proceeding statements.";gotoxy(115,14);cout<<"--->";cin.get();
	gotoxy(91,36);cout<<"It is positive.";
	gotoxy(5,11);cout<<"and the program ends."; cin.get();
	gotoxy(5,13);cout<<"BUT!"; Sleep(500); cout<<"What if no was-3?"; cin.get();
	system("CLS");
	//nextpage ulit
	gotoxy(50,1);cout<<"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE";
	//sampleprogram
	gotoxy(110,6);cout<<"#include<iostream";
	gotoxy(110,7);cout<<"using namespace std;";
	gotoxy(110,9);cout<<"int main(){";
	gotoxy(115,10);cout<<"int no";
	gotoxy(115,11);cout<<"cout<<\"Enter a number: \";";
	gotoxy(115,12);cout<<"cin>>no;";
	gotoxy(115,13);cout<<"if(no>0)";
	gotoxy(120,14);cout<<"cout<<\"It is positive.\";";
	gotoxy(115,15);cout<<"return 0;";
	gotoxy(110,16);cout<<"}";
	
	lesson5outputscreen();
	
	gotoxy(5,5);cout<<"no = -3"; cin.get();
	gotoxy(91,35);cout<<"Enter a number: -3";
	gotoxy(5,7);cout<<"Next, the program evaluates the if statement.";gotoxy(110,13);cout<<"--->";cin.get();
	gotoxy(5,9);cout<<"Since (no>0) is false, it skips the proceeding statements and returns 0.";gotoxy(110,15);cout<<"--->";cin.get();
	gotoxy(5,11);cout<<"and the program ends."; cin.get();
	system("CLS");
}
void lesson5_4thpart()
{
	//headline
	int p;
	char lesson5headline[100]={"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE"};
	char ifelse_title[30]={"THE IF-ELSE STATEMENT"};
	gotoxy(50,1);
	for(p=0;p<strlen(lesson5headline);p++){
	cout<<lesson5headline[p];Sleep(30);
	}
	gotoxy(5,5);
	for(p=0;p<strlen(ifelse_title);p++){
	cout<<ifelse_title[p];Sleep(100);
	}
	gotoxy(5,6); cout<<"The if-else statement follows a dictated path if the initial if condition was not satisfied."; cin.get();
	gotoxy(5,8);cout<<"IF-ELSE STATEMENT STRUCTURE: "; Sleep(400);
	gotoxy(5,10);cout<<"if (expression)";
	gotoxy(8,11);cout<<"statement_TRUE";
	gotoxy(5,12);cout<<"else";
	gotoxy(8,13);cout<<"statement_FALSE";
	gotoxy(81,10);cout<<"Program Start";
	gotoxy(83,15);cout<<"Expression";
	gotoxy(65,20);cout<<"STATEMENT IS TRUE";
	gotoxy(95,20);cout<<"STATEMENT IS FALSE";
	gotoxy(65,25);cout<<"Rest of the program";
	gotoxy(95,25);cout<<"Rest of the program";
	//animation ng flowlines
	gotoxy(88,11);cout<<"|";Sleep(400);gotoxy(88,12);cout<<"|";Sleep(400);gotoxy(88,13);cout<<"|";Sleep(400);gotoxy(88,14);cout<<"V";
	gotoxy(83,16);cout<<"/";Sleep(400);gotoxy(82,17);cout<<"/";Sleep(400);gotoxy(81,18);cout<<"/";Sleep(400);gotoxy(80,19);cout<<"/";
	gotoxy(93,16);cout<<"\\";Sleep(400);gotoxy(94,17);cout<<"\\";Sleep(400);gotoxy(95,18);cout<<"\\";Sleep(400);gotoxy(96,19);cout<<"\\";
	gotoxy(75,21);cout<<"|";gotoxy(105,21);cout<<"|";Sleep(400);gotoxy(75,22);cout<<"|";gotoxy(105,22);cout<<"|";Sleep;(400);gotoxy(75,23);cout<<"|";gotoxy(105,23);cout<<"|";
	Sleep(400);gotoxy(75,24);cout<<"V";gotoxy(105,24);cout<<"V"; cin.get();
	system("CLS");
	//newpage-if lang
	gotoxy(50,1);cout<<"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE";
	gotoxy(110,4);cout<<"Sample Program:"; Sleep(500);
	gotoxy(110,6);cout<<"#include<iostream"; Sleep(50);
	gotoxy(110,7);cout<<"using namespace std;"; Sleep (50);
	gotoxy(110,9);cout<<"int main(){"; Sleep (50);
	gotoxy(115,10);cout<<"int no"; Sleep(50);
	gotoxy(115,11);cout<<"cout<<\"Enter a number: \";";Sleep(50);
	gotoxy(115,12);cout<<"cin>>no;"; Sleep(50);
	gotoxy(115,13);cout<<"if(no>0)"; Sleep (50);
	gotoxy(120,14);cout<<"cout<<\"It is a non negative integer.\";"; Sleep(50);
	gotoxy(115,15);cout<<"else"; Sleep(50);
	gotoxy(120,16);cout<<"cout<<\"It is a negative integer.\";"; Sleep(50);
	gotoxy(115,17);cout<<"return 0;"; Sleep(50);
	gotoxy(115,18);cout<<"}"; Sleep (50);
	
	lesson5outputscreen();
	
	gotoxy(5,5);cout<<"Now, let's take a closer look at how the if-else statement operates."; cin.get();
	gotoxy(91,35);cout<<"Enter a number: 3";
	gotoxy(6,7);cout<<"1. First, let's assume that the user inputs 3 for the 'no' variable."; gotoxy(110,12);cout<<"--->"; cin.get();
	gotoxy(6,8);cout<<"2. Then, the if statement evaluates the expression.";gotoxy(110,13);cout<<"--->"; cin.get();
	gotoxy(91,36);cout<<"It is a non negative integer.";
	gotoxy(6,9);cout<<"3. Since (no>0) is equal to true, it proceeds with the if statements."; gotoxy(115,14);cout<<"--->";cin.get();
	gotoxy(6,10);cout<<"4. The program ends.";gotoxy(110,17);cout<<"--->";cin.get(); 
	system("CLS");
	//else naman
	gotoxy(50,1);cout<<"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE";
	gotoxy(110,4);cout<<"Sample Program:"; Sleep(500);
	gotoxy(110,6);cout<<"#include<iostream"; Sleep(50);
	gotoxy(110,7);cout<<"using namespace std;"; Sleep (50);
	gotoxy(110,9);cout<<"int main(){"; Sleep (50);
	gotoxy(115,10);cout<<"int no"; Sleep(50);
	gotoxy(115,11);cout<<"cout<<\"Enter a number: \";";Sleep(50);
	gotoxy(115,12);cout<<"cin>>no;"; Sleep(50);
	gotoxy(115,13);cout<<"if(no>0)"; Sleep (50);
	gotoxy(120,14);cout<<"cout<<\"It is a non negative integer.\";"; Sleep(50);
	gotoxy(115,15);cout<<"else"; Sleep(50);
	gotoxy(120,16);cout<<"cout<<\"It is a negative integer.\";"; Sleep(50);
	gotoxy(115,17);cout<<"return 0;"; Sleep(50);
	gotoxy(115,18);cout<<"}"; Sleep (50);
	
	lesson5outputscreen();
	
	gotoxy(5,5);cout<<"But what if the 'if' statement was false?";cin.get();
	gotoxy(6,7);cout<<"1. First, let's assume that the user inputs -7 for the 'no' variable."; gotoxy(110,12);cout<<"--->";cin.get();
	gotoxy(91,35);cout<<"Enter a number: -7";
	gotoxy(6,8);cout<<"2. Then, the if statement evaluates the expression.";gotoxy(110,13);cout<<"--->"; cin.get();
	gotoxy(6,9);cout<<"3. Since (no>0) is equal to false, it proceeds with the ELSE statement instead!."; gotoxy(110,15);cout<<"--->";cin.get();
	gotoxy(91,36);cout<<"It is a negative integer.";
	gotoxy(6,10);cout<<"4. The program then executes the statements under ELSE."; gotoxy(115,16);cout<<"--->";cin.get();
	gotoxy(6,11);cout<<"5. The program ends.";gotoxy(110,17);cout<<"--->";cin.get(); 
	system("CLS");
	
}
void lesson5_5thpart()
{
	int p;
	char lesson5headline[100]={"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE"};
	char ifelse_title[30]={"THE IF LADDER STATEMENT"};
	gotoxy(50,1);
	for(p=0;p<strlen(lesson5headline);p++){
	cout<<lesson5headline[p];Sleep(30);
	}
	gotoxy(5,5);
	for(p=0;p<strlen(ifelse_title);p++){
	cout<<ifelse_title[p];Sleep(100);
	}
	gotoxy(5,6);cout<<"An if ladder statement presents the following structure: "; cin.get();
	gotoxy(8,8);cout<<"if (expression)";
	gotoxy(11,9);cout<<"statement1;";
	gotoxy(8,10);cout<<"else if (expression2)";
	gotoxy(10,11);cout<<"statement2;";
	gotoxy(9,12);cout<<"else";
	gotoxy(10,13);cout<<"statement3;";
	gotoxy(5,15);cout<<"As presented above, the if ladder statement contains a new ELSE IF line.";
	gotoxy(6,16);cout<<"This else if line also has its own expression that it follows (expression2)."; cin.get();
	//ANIMATION NG NOTE
	for(int i=0;i<4;i++){
		char note[10]={"NOTE!"};
		char eraser[10]={"\b\b\b\b\b\b"};
		gotoxy(5,18);
		for(int x=0;x<strlen(note);x++){
			cout<<note[x];Sleep(50);
		}
		for(int y=0;y<strlen(eraser);y++){
			cout<<eraser[y];Sleep(50);
		}
	}
	gotoxy(5,19);cout<<"By default, the compiler will associate an else with the closest previous unpaired if";
	gotoxy(6,20);cout<<"unless altered by braces."; cin.get();
	gotoxy(5,30);cout<<"| START |";
	gotoxy(20,30);cout<<"| EXPRESSION1 |";
	gotoxy(35,25);cout<<"| STATEMENT1 |";
	gotoxy(35,35);cout<<"| EXPRESSION2 |";
	gotoxy(50,40);cout<<"| STATEMENT2 |";
	gotoxy(50,30);cout<<"| STATEMENT3 |";
	gotoxy(80,30);cout<<"|REST OF THE PROGRAM|"; cin.get();
	//firstlineanimation
	gotoxy(15,30);cout<<"-"; Sleep(100);gotoxy(16,30);cout<<"-";Sleep(100);gotoxy(17,30);cout<<"-";Sleep(100);gotoxy(18,30);cout<<"-";Sleep(100);gotoxy(19,30);cout<<">";
	//secondline
	gotoxy(26,27);cout<<"True";
	gotoxy(30,29);cout<<"/";Sleep(100);gotoxy(31,28);cout<<"/";Sleep(100);gotoxy(32,27);cout<<"/";Sleep(100);gotoxy(33,26);cout<<"/";
	//thirdline
	gotoxy(50,25);cout<<"--------------------------------------"; Sleep(100);
	gotoxy(87,26);cout<<"|";gotoxy(87,27);cout<<"|";gotoxy(87,28);cout<<"|";gotoxy(87,29);cout<<"V";
	cin.get();
	//4thline
	gotoxy(26,33);cout<<"False";
	gotoxy(30,31);cout<<"\\";Sleep(100);gotoxy(31,32);cout<<"\\";Sleep(100);gotoxy(32,33);cout<<"\\";Sleep(100);gotoxy(33,34);cout<<"\\";
	//5thline
	gotoxy(45,38);cout<<"True";
	gotoxy(47,36);cout<<"\\";Sleep(100);gotoxy(48,37);cout<<"\\";Sleep(100);gotoxy(49,38);cout<<"\\";Sleep(100);gotoxy(50,39);cout<<"\\";
	//7thline
	gotoxy(65,40);cout<<"----------------------";
	gotoxy(87,39);cout<<"|";Sleep(100);gotoxy(87,38);cout<<"|";Sleep(100);gotoxy(87,37);cout<<"|";Sleep(100);gotoxy(87,36);cout<<"|";Sleep(100);gotoxy(87,35);cout<<"|";Sleep(100);
	gotoxy(87,34);cout<<"|";Sleep(100);gotoxy(87,33);cout<<"|";Sleep(100);gotoxy(87,32);cout<<"|";Sleep(100);gotoxy(87,31);cout<<"^";
	cin.get();
	//8thline
	gotoxy(43,33);cout<<"False";
	gotoxy(47,34);cout<<"/";Sleep(100);gotoxy(48,33);cout<<"/";Sleep(100);gotoxy(49,32);cout<<"/";Sleep(100);gotoxy(50,31);cout<<"/";
	//9thline
	gotoxy(65,30);cout<<"------------->";
	cin.get();
	system("CLS");
	
	//EXAMPLE PROGRAM ELSE IF 
	gotoxy(50,1);cout<<"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE";
	gotoxy(110,4);cout<<"Sample Program:"; Sleep(500);
	gotoxy(110,6);cout<<"#include<iostream"; Sleep(50);
	gotoxy(110,7);cout<<"using namespace std;"; Sleep (50);
	gotoxy(110,9);cout<<"int main(){"; Sleep (50);
	gotoxy(115,10);cout<<"int no"; Sleep(50);
	gotoxy(115,11);cout<<"cout<<\"Enter a number: \";";Sleep(50);
	gotoxy(115,12);cout<<"cin>>no;"; Sleep(50);
	gotoxy(115,13);cout<<"if(no>0)"; Sleep (50);
	gotoxy(120,14);cout<<"cout<<\"It is positive.\";"; Sleep(50);
	gotoxy(115,15);cout<<"else if(no<0)"; Sleep(50);
	gotoxy(120,16);cout<<"cout<<\"It is negative.\";"; Sleep(50);
	gotoxy(115,17);cout<<"else";Sleep(50);
	gotoxy(120,18);cout<<"cout<<\"It is zero.\";";
	gotoxy(115,19);cout<<"return 0;"; Sleep(50);
	gotoxy(115,20);cout<<"}"; Sleep (50);
	lesson5outputscreen();
	
	gotoxy(5,5);cout<<"Now, let us assume that the user inputs a value of -5."; 
	gotoxy(110,12);cout<<"--->"; cin.get();
	gotoxy(91,35);cout<<"Enter a number: -5";
	gotoxy(5,7);cout<<"Next, the program evaluates the if expression..."; gotoxy(110,13);cout<<"--->";
	cin.get();
	gotoxy(5,9);cout<<"Since the if expression is false, it jumps to check the else if expression!"; gotoxy(110,15);cout<<"--->";
	cin.get();
	gotoxy(5,11);cout<<"The else if expression evaluates true! Therefore it runs the else if statement.";gotoxy(115,16);cout<<"--->";
	cin.get();
	gotoxy(91,36);cout<<"It is zero.";
	gotoxy(5,13);cout<<"Then, the program ends."; gotoxy(110,19);cout<<"--->";
	cin.get();
	system("CLS");
	//EXAMPLE NG ELSE IF PERO ELSE NATUPAD
	gotoxy(50,1);cout<<"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE";
	gotoxy(110,4);cout<<"Sample Program:"; Sleep(500);
	gotoxy(110,6);cout<<"#include<iostream"; Sleep(50);
	gotoxy(110,7);cout<<"using namespace std;"; Sleep (50);
	gotoxy(110,9);cout<<"int main(){"; Sleep (50);
	gotoxy(115,10);cout<<"int no"; Sleep(50);
	gotoxy(115,11);cout<<"cout<<\"Enter a number: \";";Sleep(50);
	gotoxy(115,12);cout<<"cin>>no;"; Sleep(50);
	gotoxy(115,13);cout<<"if(no>0)"; Sleep (50);
	gotoxy(120,14);cout<<"cout<<\"It is positive.\";"; Sleep(50);
	gotoxy(115,15);cout<<"else if(no<0)"; Sleep(50);
	gotoxy(120,16);cout<<"cout<<\"It is negative.\";"; Sleep(50);
	gotoxy(115,17);cout<<"else";Sleep(50);
	gotoxy(120,18);cout<<"cout<<\"It is zero.\";";
	gotoxy(115,19);cout<<"return 0;"; Sleep(50);
	gotoxy(115,20);cout<<"}"; Sleep (50);
	lesson5outputscreen();
	
	gotoxy(5,5);cout<<"This time, let us assume that the user inputs a value of 0."; gotoxy(110,12);cout<<"--->"; 
	gotoxy(91,35);cout<<"Enter a number: 0";cin.get();
	gotoxy(5,7);cout<<"Next, the program checks the if expression.."; gotoxy(110,13);cout<<"--->"; cin.get();
	gotoxy(5,9);cout<<"Since the if expression is false, it then checks the else if expression.";gotoxy(110,15);cout<<"--->"; cin.get();
	gotoxy(5,11);cout<<"Now, the else if expression proves false as well!! It jumps to the else expression."; gotoxy(110,17);cout<<"--->";cin.get();
	gotoxy(5,13);cout<<"Then, it executes the else statement.";gotoxy(115,18);cout<<"--->"; gotoxy(91,36);cout<<"It is zero.";cin.get();
	system("CLS");
}
void lesson5_6thpart()
{
	int p;
	char lesson5headline[100]={"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE"};
	char ifelse_title[30]={"THE NESTED IF STATEMENT"};
	gotoxy(50,1);
	for(p=0;p<strlen(lesson5headline);p++){
	cout<<lesson5headline[p];Sleep(30);
	}
	gotoxy(5,5);
	for(p=0;p<strlen(ifelse_title);p++){
	cout<<ifelse_title[p];Sleep(100);
	}
	gotoxy(5,7);cout<<"In a simple sense, it is simply an if or if-else statement within another if else statement itself."; Sleep(400);
	gotoxy(7,8);cout<<"Let's look at this sample program.";
	cin.get();
	gotoxy(110,4);cout<<"Sample Program:"; Sleep(500);
	gotoxy(110,6);cout<<"#include<iostream"; Sleep(50);
	gotoxy(110,7);cout<<"using namespace std;"; Sleep (50);
	gotoxy(110,9);cout<<"int main(){"; Sleep (50);
	gotoxy(115,10);cout<<"float n1,n2,n3;"; Sleep(50);
	gotoxy(115,11);cout<<"cout<<\"Enter three numbers: \";";Sleep(50);
	gotoxy(115,12);cout<<"cin>>n1>>n2>>n3;"; Sleep(50);
	gotoxy(115,13);cout<<"if(n1>=n3)"; Sleep (50);
	gotoxy(115,14);cout<<"{"; Sleep(50);
	gotoxy(120,15);cout<<"if (n1 >= n3)";Sleep(50);
	gotoxy(125,16);cout<<"cout << \"Largest Number: \" << n1;"; Sleep(50);
	gotoxy(120,17);cout<<"else"; Sleep(50);
	gotoxy(125,18);cout<<"cout << \"Largest Number: \" << n3;"; Sleep(50);
	gotoxy(115,19);cout<<"}"; Sleep(50);
	gotoxy(115,20);cout<<"else"; Sleep(50);
	gotoxy(115,21);cout<<"{";Sleep(50);
	gotoxy(120,22);cout<<"if (n2 >= n3)"; Sleep(50);
	gotoxy(125,23);cout<<"cout << \"Largest Number: \" << n2;"; Sleep(50);
	gotoxy(120,24);cout<<"else"; Sleep(50);
	gotoxy(125,25);cout<<"cout << \"Largest Number: \" << n3;"; Sleep(50);
	gotoxy(115,26);cout<<"}"; Sleep (50);
	gotoxy(110,27);cout<<"return 0;"; Sleep(50);
	gotoxy(110,28);cout<<"}"; Sleep (50);
	lesson5outputscreen();
	cin.get();
	gotoxy(5,10);cout<<"First, let us assume that the user inputs the numbers are: ";
	gotoxy(7,11);cout<<"4"; gotoxy(7,12);cout<<"11.2";gotoxy(7,13);cout<<"6.7"; 
	gotoxy(91,35);cout<<"Enter three numbers: 4 11.2 6.7"; gotoxy(110,12);cout<<"--->";
	cin.get();
	gotoxy(5,15);cout<<"Next, it evaluates the if expression."; gotoxy(110,13);cout<<"--->"; cin.get();
	gotoxy(5,17);cout<<"Since the previous expression was false, it jumps to the else statements."; gotoxy(110,20);cout<<"--->"; cin.get();
	gotoxy(5,18);cout<<"Then, it evaluates the if expression (11.2 >= 6.7)"; gotoxy(115,22);cout<<"--->"; cin.get();
	gotoxy(5,20);cout<<"Since the if expression returns true, it executes the if statement!"; gotoxy(120,23);cout<<"--->"; 
	gotoxy(91,36);cout<<"Largest NUmber: 11.2";cin.get();
	system("CLS");	
}
void lesson5_7thpart()
{
	int p;
	char lesson5headline[100]={"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE"};
	char ifelse_title[30]={"THE SWITCH STATEMENT"};
	gotoxy(50,1);
	for(p=0;p<strlen(lesson5headline);p++){
	cout<<lesson5headline[p];Sleep(30);
	}
	gotoxy(5,5);
	for(p=0;p<strlen(ifelse_title);p++){
	cout<<ifelse_title[p];Sleep(100);
	}
	gotoxy(6,6); cout<<"The switch statement allows a variable to be tested for equality against a list";
	gotoxy(7,7); cout<<"a values. Each value is called a 'case'."; 
	gotoxy(100,6);cout<<"STRUCTURE OF A SWITCH STATEMENT";
	cin.get();
	gotoxy(100,8); cout<<"switch(expression){";
	gotoxy(101,9); cout<<"case constant1: statement(s);";
	gotoxy(111,10);cout<<"break;";
	gotoxy(101,11);cout<<"case constant2: statement(s);";
	gotoxy(111,12);cout<<"break;";
	gotoxy(101,15);cout<<"case constantN: statement(s);";
	gotoxy(111,16);cout<<"break;";
	gotoxy(107,17);cout<<"default: /* Optional */";
	gotoxy(110,18);cout<<"statement(s);";
	gotoxy(6,8);cout<<"The switch statement essentially checks if the variable correlates";
	gotoxy(6,9);cout<<"with the established 'case'."; cin.get();
	gotoxy(5,12);cout<<"1. It checks the expression (variable) provided in 'switch'."; gotoxy(95,8);cout<<"--->"; cin.get();
	gotoxy(5,14);cout<<"2. Then, it compares the expression to match with the case's constant."; gotoxy(96,9);cout<<"--->"; gotoxy(96,11);cout<<"--->";gotoxy(96,15);cout<<"--->";cin.get();
	gotoxy(5,16);cout<<"3. Whichever case matches with the switch expression, executes the included statements."; gotoxy(131,9);cout<<"<---";gotoxy(131,11);cout<<"<---";gotoxy(131,15);cout<<"<---";cin.get();
	gotoxy(5,18);cout<<"4. The 'breaks' indicate where the statements stop executing from a case.";gotoxy(106,10);cout<<"--->";gotoxy(106,12);cout<<"--->";gotoxy(106,16);cout<<"--->";cin.get();

	//ANIMATION NG POINTS TO REMEMBER
	for(int i=0;i<2;i++){
		char note[20]={"POINTS TO REMEMBER"};
		char eraser[20]={"\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b"};
		gotoxy(5,21);
		for(int x=0;x<strlen(note);x++){
			cout<<note[x];Sleep(50);
		}
		for(int y=0;y<strlen(eraser);y++){
			cout<<eraser[y];Sleep(50);
		}
	}
	gotoxy(6,23);cout<<"-Do not use Floats in switch statements."; cin.get();
	gotoxy(6,25);cout<<"-Expression evaluated by switch should match a case. This means that the matching case"; 
	gotoxy(7,26);cout<<"must also be an integer or a constant expression which evaluates to an integer."; cin.get();
	gotoxy(6,28);cout<<"-Letters(not words) can be used in case statements as constants.";cin.get();
	gotoxy(6,30);cout<<"-Use break statement to stop further execution otherwise it continues execution with whatever code that follows."; cin.get();
	system("CLS");
	//EXAMPLE NG SWITCH
	gotoxy(50,1);cout<<"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE";
	gotoxy(110,4);cout<<"Sample Program:"; Sleep(500);
	gotoxy(110,6);cout<<"#include<iostream"; Sleep(50);
	gotoxy(110,7);cout<<"using namespace std;"; Sleep (50);
	gotoxy(110,9);cout<<"int main(){"; Sleep (50);
	gotoxy(115,10);cout<<"int no;"; Sleep(50);
	gotoxy(115,11);cout<<"cout<<\"Enter a number: \";"; Sleep(50);
	gotoxy(115,12);cout<<"cin>>no;"; Sleep(50);
	gotoxy(115,13);cout<<"switch(no){"; Sleep(50);
	gotoxy(120,14);cout<<"case 1: cout<<\"Isa\";"; Sleep(50);
	gotoxy(128,15);cout<<"break;"; Sleep(50);
	gotoxy(120,16);cout<<"case 2: cout<<\"Dalawa\";"; Sleep(50);
	gotoxy(128,17);cout<<"break;";
	gotoxy(120,18);cout<<"case 3: cout<<\"Tatlo\";"; Sleep(50);
	gotoxy(128,19);cout<<"break;"; Sleep(50);
	gotoxy(120,20);cout<<"default: cout<<\"Invalid Input\";"; Sleep(50);
	gotoxy(115,21);cout<<"}"; Sleep(50);
	gotoxy(115,22);cout<<"return 0;"; Sleep(50);
	gotoxy(110,23);cout<<"}"; Sleep(50);
	lesson5outputscreen();
	gotoxy(5,6);cout<<"First, let's say the user inputs the number 2"; gotoxy(110,12);cout<<"--->"; gotoxy(91,35);cout<<"Enter a number: 2";
	cin.get();
	gotoxy(5,8);cout<<"Second, the switch statement evaluates the variable 'no', which is 2"; gotoxy(110,13);cout<<"--->"; cin.get();
	gotoxy(5,10);cout<<"Third, it compares the variable to which ever case matches it."; gotoxy(115,16);cout<<"--->"; cin.get();
	gotoxy(5,12);cout<<"Fourth, it executes the statement associated with the matched case.";gotoxy(144,16);cout<<"<---";gotoxy(91,36);cout<<"Dalawa";
	cin.get();	
	gotoxy(5,13);cout<<"But! it stops executing the statements once it reaches 'break'.";gotoxy(123,17);cout<<"--->";cin.get();
	system("CLS");
	
	//EXAMPLE NG SWITCH NA DEFAULT
	gotoxy(50,1);cout<<"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE";
	gotoxy(110,4);cout<<"Sample Program:"; Sleep(500);
	gotoxy(110,6);cout<<"#include<iostream"; Sleep(50);
	gotoxy(110,7);cout<<"using namespace std;"; Sleep (50);
	gotoxy(110,9);cout<<"int main(){"; Sleep (50);
	gotoxy(115,10);cout<<"int no;"; Sleep(50);
	gotoxy(115,11);cout<<"cout<<\"Enter a number: \";"; Sleep(50);
	gotoxy(115,12);cout<<"cin>>no;"; Sleep(50);
	gotoxy(115,13);cout<<"switch(no){"; Sleep(50);
	gotoxy(120,14);cout<<"case 1: cout<<\"Isa\";"; Sleep(50);
	gotoxy(128,15);cout<<"break;"; Sleep(50);
	gotoxy(120,16);cout<<"case 2: cout<<\"Dalawa\";"; Sleep(50);
	gotoxy(128,17);cout<<"break;";
	gotoxy(120,18);cout<<"case 3: cout<<\"Tatlo\";"; Sleep(50);
	gotoxy(128,19);cout<<"break;"; Sleep(50);
	gotoxy(120,20);cout<<"default: cout<<\"Invalid Input\";"; Sleep(50);
	gotoxy(115,21);cout<<"}"; Sleep(50);
	gotoxy(115,22);cout<<"return 0;"; Sleep(50);
	gotoxy(110,23);cout<<"}"; Sleep(50);
	lesson5outputscreen();
	
	gotoxy(5,6);cout<<"But! What if the user inputs a value not covered by the cases?"; cin.get();
	gotoxy(5,8);cout<<"This time, let us assume that the user inputs the number 5."; gotoxy(110,12);cout<<"--->";
	gotoxy(91,35);cout<<"Enter a number: 5";cin.get();
	gotoxy(5,10);cout<<"First, the switch evaluates the expression 'no'.";gotoxy(110,13);cout<<"--->"; cin.get();
	gotoxy(5,12);cout<<"Second, the switch is not able to find a case associated with '5'."; gotoxy(115,14);cout<<" (X)";gotoxy(115,16);cout<<" (X)";
	gotoxy(115,18);cout<<" (X)";cin.get();
	gotoxy(5,14);cout<<"In this case, the switch statement resorts to the 'default' section."; gotoxy(115,20);cout<<"--->";cin.get();
	gotoxy(5,16);cout<<"It then executes the default statement.";gotoxy(150,20);cout<<"<---";
	gotoxy(91,36);cout<<"Invalid Input";cin.get();
	system("CLS");
}
void lesson5quiz()
{
	int lesson5score=0;
	char lesson5number1,lesson5number2,lesson5number3;
	
	gotoxy(50,1);cout<<"LESSON 5: PROGRAM CONTROL STRUCTURE: CONDITIONAL CONTROL STRUCTURE"; cin.get();
	gotoxy(65,2);cout<<"QUIZ ACTIVITY - Check your Progress!";
	gotoxy(5,5);cout<<"Consider the code below: "; cin.get();
	gotoxy(5,7);cout<<"if (N=<5) {";
	gotoxy(7,8);cout<<"cout<<\"hey\"; }";
	gotoxy(5,9);cout<<"else";
	gotoxy(7,10);cout<<"cout<<\"hi\";";
	gotoxy(5,12);cout<<"If N=9, what is the output?";
	gotoxy(6,13);cout<<"a.) hey";
	gotoxy(6,14);cout<<"b.) hi";
	gotoxy(5,16);cout<<"Answer:";gotoxy(12,16);cin>>lesson5number1;
	gotoxy(5,17);
	switch(lesson5number1){
		case 'b':
		case 'B':
		cout<<"Correct! The answer was hi.";
		lesson5score++;	
		break;
		default: cout<<"Incorrect! The answer was hi.";
	} cin.get();
	gotoxy(5,19);cout<<"(7 >= 3  &&  9 == (3*3) is equal to?"; 
	gotoxy(7,20);cout<<"a.) True"; gotoxy(7,21);cout<<"b.) False";
	gotoxy(5,23);cout<<"Answer:";gotoxy(12,23);cin>>lesson5number2;
	gotoxy(5,24);
	switch(lesson5number2){
		case 'a':
		case 'A':
			cout<<"Correct! It equates to 1! or True!";
			lesson5score++;
		break;
		default: cout<<"Incorrect! The answer was true!";
	} cin.get();
	
	gotoxy(70,5);cout<<"Consider the code below:";
	gotoxy(70,7);cout<<"switch(x){";
	gotoxy(75,8);cout<<"case 1: cout<<\"Apple\";";
	gotoxy(75,10);cout<<"case 2: cout<<\"Mango\";";
	gotoxy(75,11);cout<<"break;";
	gotoxy(75,12);cout<<"default: cout<<\"Strawberry\"; }";
	gotoxy(75,14);cout<<"If x=1, what is the output of the program?";
	gotoxy(77,15);cout<<"a.) Apple";
	gotoxy(77,16);cout<<"b.) AppleMango";
	gotoxy(77,17);cout<<"c.) Strawberry";
	gotoxy(75,18);cout<<"Answer:";gotoxy(82,18);cin>>lesson5number3;
	gotoxy(75,19);
	switch(lesson5number3){
		case 'b':
		case 'B':
			cout<<"Correct! The answer was AppleMango!";
			lesson5score++;
		break;
		default: cout<<"Incorrect! Case 1 does not have a break command, therefore not stopping the flow!";
	} cin.get();
	
	system("CLS");
	int p;
	char lesson5headline[100]={"CONGRATULATIONS! YOU HAVE COMPLETED THE 5TH LESSON OF OUR PROGRAMMING COURSE"};
	char ifelse_title[100]={"YOU ARE NOW CAPABLE OF UTILIZING CONTROL STRUCTURES IN C++"};
	gotoxy(50,20);
	for(p=0;p<strlen(lesson5headline);p++){
	cout<<lesson5headline[p];Sleep(30);
	}
	gotoxy(55,24);
	for(p=0;p<strlen(ifelse_title);p++){
	cout<<ifelse_title[p];Sleep(100);
	} cin.get();
	gotoxy(50,30);cout<<"Upon completion of the quiz, you have achieved a score of "<<lesson5score<<" points out of 3!"; cin.get();
	system("CLS");
}

// Functions that act as formats/not related to the modules
void gotoxy(short x, short y)
{

	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	
}

void maximizeWindow(){
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_SHOWMAXIMIZED);
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
