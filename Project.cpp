#include <iostream>
#include <windows.h>

void gotoxy(short x, short y);
void canvas();
void canvasWithInfo();
void tablecontents();

using namespace std;

char name[30];
char section[20];
int id;
int x;

int main()
{
	
	
	canvas();
	gotoxy (71, 10); cout << "Enter Name:"; gotoxy(83, 10); cin.getline(name, 30);
	gotoxy (71, 11); cout << "Enter StudentID:"; gotoxy(88, 11); cin >> id;
	cin.ignore();
	gotoxy (71, 12); cout << "Enter Section:"; gotoxy(86, 12); cin.getline(section, 20);
	Sleep(1500);
	system("cls");
	
	canvas();
	gotoxy(71,10); cout << "Welcome! " << name;
	gotoxy(71,11); cout << "From Section " << section;
	gotoxy(71,12); cout << "Student ID: " << id;
	
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
	
	canvasWithInfo();
	gotoxy(51, 11); cout << "You have enrolled into an online course called Computer Programming 1.";
	gotoxy(56, 12); cout << "It is a course that is mainly dealing with the basics of C++";
	gotoxy(65, 13); cout << "This course comes with the following modules: ";
	
	tablecontents();
	
	
	
}

void gotoxy(short x, short y)
{

	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	
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

	gotoxy(35,15);cout << "***    ***";  gotoxy(47,15);cout << "**********";  gotoxy(59,15);cout << "**********";  gotoxy(71,15);cout << "**********";  gotoxy(83,15);cout << "**********";  gotoxy(95,15);cout << "***********";  gotoxy(108,15);cout << "****   ****";    gotoxy(121,15);cout << "**********";
	gotoxy(35,16);cout << "****  ****";  gotoxy(47,16);cout << "**********";  gotoxy(59,16);cout << "**********";  gotoxy(71,16);cout << "**********";  gotoxy(83,16);cout << "**********";  gotoxy(95,16);cout << "****   ****";  gotoxy(108,16);cout << "****   ****";    gotoxy(121,16);cout << "***   ****";
	gotoxy(35,17);cout << "**********";  gotoxy(47,17);cout << "****  ****";  gotoxy(59,17);cout << "*****     ";  gotoxy(71,17);cout << "    **    ";  gotoxy(83,17);cout << "**        ";  gotoxy(95,17);cout << "****   *** ";  gotoxy(108,17);cout << "***** *****";    gotoxy(121,17);cout << "   *******";
	gotoxy(35,18);cout << "*** ** ***";  gotoxy(47,18);cout << "**********";  gotoxy(59,18);cout << "**********";  gotoxy(71,18);cout << "    **    ";  gotoxy(83,18);cout << "******    ";  gotoxy(95,18);cout << "****  ***  ";  gotoxy(108,18);cout << " **** **** ";    gotoxy(121,18);cout << "   *****  ";
	gotoxy(35,19);cout << "*** ** ***";  gotoxy(47,19);cout << "**********";  gotoxy(59,19);cout << "**********";  gotoxy(71,19);cout << "    **    ";  gotoxy(83,19);cout << "**        ";  gotoxy(95,19);cout << "**** **    ";  gotoxy(108,19);cout << "   ** **   ";    gotoxy(121,19);cout << "      ****";
	gotoxy(35,20);cout << "*** ** ***";  gotoxy(47,20);cout << "****  ****";  gotoxy(59,20);cout << "     *****";  gotoxy(71,20);cout << "    **	";  gotoxy(83,20);cout << "**********";  gotoxy(95,20);cout << "**** ****  ";  gotoxy(108,20);cout << "    ***    ";    gotoxy(121,20);cout << "***   ****";
	gotoxy(35,21);cout << "*** ** ***";  gotoxy(47,21);cout << "****  ****";  gotoxy(59,21);cout << "**********";  gotoxy(71,21);cout << "    **    ";  gotoxy(83,21);cout << "**********";  gotoxy(95,21);cout << "**** ******";  gotoxy(108,21);cout << "    ***    ";    gotoxy(121,21);cout << "**********";
	
	gotoxy(50,22);cout<<"  ____________________________________________________________";
	gotoxy(51,23);cout<<"| Chapter 1 - Introduction to Programming                     |";
	gotoxy(52,24);cout<<"|                                                             |";
	gotoxy(53,25);cout<<"| Chapter 2 - Program Logic Design and Formulation            |";
	gotoxy(54,26);cout<<"|                                                             |";
	gotoxy(55,27);cout<<"| Chapter 3 - Introduction to C++ Programming                 |";
	gotoxy(56,28);cout<<"|                                                             |";
	gotoxy(57,29);cout<<"| Chapter 4 - Basic Input/Output System                       |";
	gotoxy(58,30);cout<<"|                                                             |";
	gotoxy(59,31);cout<<"| Chapter 5 - Program Control: Conditional Control Structures |";
	gotoxy(60,32);cout<<"|                                                             |";
	gotoxy(61,33);cout<<"| Chapter 6 - Program Control: Repetition Control Structures  |";
	gotoxy(62,34);cout<<"|_____________________________________________________________|";
}
