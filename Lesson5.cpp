#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
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


int main(){
	
	lesson5intro();
	lesson5_2ndpart();
	lesson5_3rdpart();
	lesson5_4thpart();
	lesson5_6thpart();
	lesson5_7thpart();
	lesson5quiz();
}
