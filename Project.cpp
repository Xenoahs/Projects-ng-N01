#include <iostream>
#include <windows.h>

void gotoxy(short x, short y);
void canvas();
void canvasWithInfo();

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
