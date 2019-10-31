#include<iostream>
#include<windows.h>
using namespace std;
string operations;
string operation;
void gotoxy (int x, int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
	
}
void lesson2()
{	gotoxy(4,3); cout << " OBJECTIVES: ";
	gotoxy(4,4); char l2str[1000] = {" Upon completion of this module, you will be able to:\n - Write algorithmic solutions to problems \n - Apply the different program logic design tools in solving computing problems\n - Design, read, understand and construct program flowchart \n - Express algorithms using pseudocode and flowcharts"};
	 	for(int x= 0; x < strlen(l2str); x++)
	{
		cout << l2str[x];
		Sleep(50);
	}

}
void lesson2warning()
	{	gotoxy(4,12); cout << " !WARNING!";
		gotoxy(4,13); char l2str[1000] = {" Before we begin, lesson 1 is a prerequisite before taking this program to prevent misleading knowledge."};
	 		for(int x= 0; x < strlen(l2str); x++)
		{
			cout << l2str[x];
			Sleep(50);
		}
		
	}
	
void lesson2lesson1diagram2()
{
	
	gotoxy(85,2);cout<<"LESSON 1: INTRODUCTION TO PROGRAMMING";gotoxy(90,50);cout<<"(press the enter key to continue)";
	gotoxy(5,4);cout<<"TERMINOLOGY:";
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


void lesson2diagrambox()
{
	gotoxy(60,5); cout <<"____________________________________________________________________________________";
	gotoxy(60,30); cout <<"____________________________________________________________________________________";
}

void lesson2continuation1()
{
	system("cls");
	
	lesson2diagrambox();
		gotoxy(66,2); char l2str[1000] = {" Lesson 2: Program Logic Desing and Formulation"};
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
}
void lesson2continuation2()
{
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Desing and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		
		gotoxy(4,6); char l2strings[1000] = {" 2. Psuedocodes "};
		for(int x= 0; x < strlen(l2strings); x++)
	{
		cout << l2strings[x];
		Sleep(50);
	}
		cin.get();
		gotoxy(60,7); cout << " - Pseudocode is called false code because, it has no syntax like any of the programming language ";
		gotoxy(60,8); cout << "and thus can’t be compiled or interpreted by the computer.";
		gotoxy(60,10); cout << " - It is simply an implementation of an algorithm in the form of";
		gotoxy(60,11); cout << " annotations and informative text written in plain English.";
		gotoxy(60,13); cout << " - It is not standardized.";
		cin.get();
}
void lesson2trivia()
{
	system("cls");
	
	gotoxy(60,2); char str[1000] = {" TRIVA!! "};
	{
	 	for (int x = 0; x < 5; x++)
		 
		 for(int x= 0; x < strlen(str); x++)
		{
		cout << str[x];
		Sleep(70);
		}
	}
		gotoxy(45,6); char stri[1000] = {" Did you know that that are two different tools used for creating new programs,"};
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
}
void lesson2continuation3()
{
	system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Desing and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Psuedocodes ";
		
		gotoxy(8,7); char l2strings[1000] = {" A. How to write Psuedocodes "};
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
}
void lesson2continuation4()
{	
cin.get();
		system("cls");
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Desing and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Psuedocodes ";
		gotoxy(8,7); cout << " A. How to write Psuedocodes";
		
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
}
void lesson2continuation5()
{
	cin.get();
		system("cls");
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Desing and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Psuedocodes ";
		gotoxy(8,7); cout << " A. How to write Psuedocodes";
		gotoxy(8,8); cout << " B. KEYWORDS ";
		
		gotoxy(8,9); char l2strings[1000] = {" C. COMMON OPERATORS: "};
		for(int x= 0; x < strlen(l2strings); x++)
	{
		cout << l2strings[x];
		Sleep(50);
	}
		gotoxy(60,7); cout << " - Assignment: ? or :=";
		gotoxy(60,8); cout << " - Example: c - ? 2pr, c := 2pi r "; 
		gotoxy(60,10); cout << " - Arithmetic: +, -, ×, /, mod";
		gotoxy(60,11); cout << " - Example: a + b, x – y, m x n, s / t, num mod 2";
		gotoxy(60,13); cout << " - Comparison (Relational): =, ?, <, >, =>, =<";
		gotoxy(60,14); cout << " - Example: a = b, x ? y, m > n, s < t, n1 = n";
		gotoxy(60,16); cout << " - Logical: and, or";
		gotoxy(60,17); cout << " - Example: m > n and s < t & m > n or s < t";
}
void lesson2continuational6()
{
	cin.get();
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Desing and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Psuedocodes ";
		gotoxy(8,7); cout << " A. How to write Psuedocodes";
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
}
void lesson2continuation7()
{
	cin.get();
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Desing and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Psuedocodes ";
		gotoxy(8,7); cout << " A. How to write Psuedocodes";
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
}
void lesson2continuation8()
{
		cin.get();
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Desing and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Psuedocodes ";
		gotoxy(8,7); cout << " A. How to write Psuedocodes";
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
	
}
void lesson2continuation9()
{
		cin.get();
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Desing and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Psuedocodes ";
		gotoxy(8,7); cout << " A. How to write Psuedocodes";
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
}
void lesson2continuation10()
{
		cin.get();
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Desing and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Psuedocodes ";
		gotoxy(8,7); cout << " A. How to write Psuedocodes";
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
}
void lesson2continuation11()
{
		cin.get();
		system("cls");
		
		lesson2diagrambox();
		gotoxy(66,2); cout << "Lesson 2: Program Logic Desing and Formulation";
		gotoxy(4,4); cout << " TOPICS: ";
		gotoxy(4,5); cout << " 1. Algorithm ";
		gotoxy(4,6); cout << " 2. Psuedocodes ";
		gotoxy(8,7); cout << " A. How to write Psuedocodes";
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
	
	
}

void lesson2question()
{
	string answer;
	gotoxy(4,15); cout << " Are you sure you want to continue? " << endl;
	gotoxy(4,16); cout << " [YES] " << endl; 
	gotoxy(4,17); cout << " [NO] " << endl;
	gotoxy(4,18); cout << " Answer: ";
	gotoxy(12,18); cin >> answer;
	
	if(operation == "NO" || operation == "no" || operation == "No"){
		lesson2lesson1diagram2();
	}
	if (operation == "YES" || operation == "yes" || operation == "Yes"){
		lesson2continuation1();
		
	}
}

int main()
{
	 gotoxy(66,2); char str[1000] = {" Lesson 2: Program Logic Desing and Formulation"};
	 	for(int x= 0; x < strlen(str); x++)
	{
		cout << str[x];
		Sleep(50);
	}
	
	lesson2();
	lesson2warning();
	lesson2question();
	lesson2lesson1diagram2();
	lesson2continuation1();
	lesson2diagrambox();
	lesson2continuation2();
	lesson2trivia();
	lesson2continuation3();
	lesson2continuation4();
	lesson2continuation5();
	lesson2continuational6();
	lesson2continuation7();
	lesson2continuation8();
	lesson2continuation9();
	lesson2continuation10();
	lesson2continuation11();
	ending();
	lesson2quiz();
	lesson2quiz2();
	lesson2quiz3();

	
	
}

