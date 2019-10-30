#include<iostream>
#include<windows.h>
using namespace std;

//VARIABLES
int lesson1quizpoints;
char L1N1,L1N2,L1N3;
//VARIABLES

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void lesson1diagrambox()
{
	gotoxy(110,6);cout<<"____________________________________________________________________________________";
	gotoxy(110,30);cout<<"____________________________________________________________________________________";
}
void lesson1diagram1()
{
	gotoxy(115,8);cout<<"--What a programming language looks like--";
	gotoxy(120,10);cout<<"if (finals==pass){";
	gotoxy(121,11);cout<<"cout<<'nice'; }";
	gotoxy(120,12);cout<<"else{ cry; }";
}
void lesson1diagram2()
{

	gotoxy(85,2);cout<<"LESSON 1: INTRODUCTION TO PROGRAMMING";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
	lesson1diagrambox();
	gotoxy(7,6);cout<<"1. Programming Language";
	gotoxy(8,7);cout<<"-a type of written language that instructs computers and form software."; 
	gotoxy(7,9);cout<<"2. Syntax";
	gotoxy(8,10);cout<<"-refers to the grammar of a programming language. Each language has its";
	gotoxy(9,11);cout<<"own set rules and structure.";
	gotoxy(141,8);cout<<"Sample code:";
	gotoxy(120,10);cout<<"cout<<What's up?";
	gotoxy(115,13);cout<<"The sample code above won't work, since 'What's up' is not enclosed";
	gotoxy(115,14);cout<<"in quotations, the program thinks 'What's up' is a command, and not text.";
	gotoxy(115,16);cout<<"This is what is known as a 'Syntax Error'.";
	gotoxy(130,18);cout<<"Corrected code:";
	gotoxy(120,20);cout<<"cout<<''What's up?'' ";
	gotoxy(120,23);cout<<"Output: What's up?";
	cin.get();
}
void lesson1diagram3()
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
	gotoxy(137,8);cout<<"Low-level Languages";
	gotoxy(112,10);cout<<"1. Binary Language";
	gotoxy(112,11);cout<<"2. Assembly Language";
	gotoxy(137,13);cout<<"Example of Assembly Language";
	gotoxy(120,15);cout<<".data";gotoxy(120,16);cout<<"val1 DWORD 10000h";gotoxy(120,17);cout<<"val2 DWORD 40000h";gotoxy(120,18);
	cout<<"val3 DWORD 20000h";gotoxy(120,19);cout<<"finalVal DWORD ?";gotoxy(120,20);cout<<".code";gotoxy(120,21);cout<<"main PROC";
	gotoxy(123,22);cout<<"mov eax,val1";gotoxy(123,23);cout<<"add eax,val2";gotoxy(123,24);cout<<"sub eax,val3"; 
	gotoxy(123,25);cout<<"mov finalVal,eax";gotoxy(123,26);cout<<"call DumpRegs";gotoxy(123,27);cout<<"exit";gotoxy(120,28);cout<<"main ENDP";
	cin.get();
}
void lesson1diagram4()
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
	gotoxy(136,8);cout<<"Examples of High-Level Languages";
	gotoxy(112,10);cout<<"1. C";
	gotoxy(112,11);cout<<"2. Java";
	gotoxy(112,12);cout<<"3. Python";
	gotoxy(136,14);cout<<"Example of High-Level Language code";
	gotoxy(120,16);cout<<"sale_price=1.66";
	gotoxy(120,17);cout<<"if (sale_price>2){";
	gotoxy(123,18);cout<<"discount=0.1 }";
	gotoxy(120,19);cout<<"else {";
	gotoxy(123,20);cout<<"discount=0.05 }"; 
	cin.get();
}
void lesson1diagram567()
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
	cin.get();
	gotoxy(7,22);cout<<"6. Interpreter";
	gotoxy(8,23);cout<<"-translates each statement or line one at a time.";
	cin.get();
	gotoxy(7,25);cout<<"7. Compiler";
	gotoxy(8,26);cout<<"-translates all statements at one time, and provides all error messages immediately.";cin.get();
	gotoxy(141,7);cout<<"Assembler";
	gotoxy(112,9);cout<<"[Assembly Code] ------------> Machine Language (Binary), 0s and 1s";
	gotoxy(141,11);cout<<"Interpreter";
	gotoxy(112,13);cout<<"1st ---------print(this); while doing (this)";
	gotoxy(112,14);cout<<"2nd ---------then do (this), if (that = true)";
	gotoxy(141,19);cout<<"Compiler";
	gotoxy(127,21);cout<<"int num1,int num2, int num3"; gotoxy(126,22);cout<<"/";
	gotoxy(126,23);cout<<"-- while (true) {"; gotoxy(113,23);cout<<"Simultaneous";
	gotoxy(126,24);cout<<"\\"; gotoxy(127,25);cout<<"do (this); }"; 
	cin.get();
}
void lesson1diagram8()
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
	gotoxy(138,8);cout<<"Procedure-Oriented Programming";
	gotoxy(115,9);cout<<"Sample Program concept: Rain checker"; 
	gotoxy(118,11);cout<<"1st step: Check what is current preticipation level-";
	gotoxy(118,12);cout<<"2nd step: If precipitation is high enough-";
	gotoxy(118,13);cout<<"3rd step: then output: It will rain"; 
	gotoxy(115,16);cout<<"Notice that the program is guided by certain";
	gotoxy(111,17);cout<<"algorithms or functions, and follows a top-down approach.";
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
	gotoxy(138,8);cout<<"Object-Oriented Programming";
	gotoxy(115,9);cout<<"Sample Object Concept: ";
	gotoxy(120,11);cout<<"---------";
	gotoxy(120,12);cout<<"| SHAPE |";
	gotoxy(120,13);cout<<"---------";
	gotoxy(120,14);cout<<"|draw() |";
	gotoxy(120,15);cout<<"|erase()|";
	gotoxy(120,16);cout<<"|move() |";
	gotoxy(120,17);cout<<"---------";
	gotoxy(120,18);cout<<"//     \\";
	gotoxy(115,19);cout<<"CIRCLE	TRIANGLE";
	gotoxy(112,20);cout<<"changeclr()   rotatetri()";
	gotoxy(130,25);cout<<"Note that '()' indicates a function";
	cin.get();
}
void lesson1end()
{
	system("CLS");
	gotoxy(70,10); 
	char L2str[100]={"YOU HAVE SUCCESFULLY COMPLETED THE FIRST LESSON, CONGRATULATIONS!"};
	
	for(int l1i=0; l1i<strlen(L2str); l1i++){
		cout<<L2str[l1i];
		Sleep(60);
	}
	cin.get();
	gotoxy(70,15);cout<<"You have reached the end of Lesson 1: Introduction to Programming!";
	gotoxy(80,20);cout<<"You have earned a score of "<<lesson1quizpoints<<" out of 3!";
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
		gotoxy(85,2);cout<<"LESSON 1: INTRODUCTION TO PROGRAMMING";gotoxy(90,40);cout<<"(press the enter key to continue)";
		gotoxy(93,5);cout<<"TEST YOUR KNOWLEDGE"; cin.get();
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
void lesson1()
{
	gotoxy(85,2);cout<<"LESSON 1:"; Sleep(1000); gotoxy(95,2);cout<<"I";Sleep(100);cout<<"N";Sleep(100);cout<<"T";Sleep(100);cout<<"R";
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
		


}

int main(){
	lesson1();
	lesson1quiznumber1();
	lesson1end();
}
