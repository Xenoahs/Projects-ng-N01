#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy (int x, int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
	
}
void lesson2()
{	gotoxy(4,3); cout << " OBJECTIVES: ";
	gotoxy(4,4); char str[1000] = {" Upon completion of this module, you will be able to:\n - Write algorithmic solutions to problems \n - Apply the different program logic design tools in solving computing problems\n - Design, read, understand and construct program flowchart \n - Express algorithms using pseudocode and flowcharts"};
	 	for(int x= 0; x < strlen(str); x++)
	{
		cout << str[x];
		Sleep(50);
	}

}
void warning()
	{	gotoxy(4,12); cout << " !WARNING!";
		gotoxy(4,13); char str[1000] = {" Before we begin, lesson 1 is a prerequisite before taking this program to prevent misleading knowledge."};
	 		for(int x= 0; x < strlen(str); x++)
		{
			cout << str[x];
			Sleep(50);
		}
		
	}
void question()
{
	string answer;
	gotoxy(4,15); cout << " Are you sure you want to continue? " << endl;
	gotoxy(4,16); cout << " [YES] " << endl;
	gotoxy(4,17); cout << " [NO] " << endl;
	gotoxy(4,18); cout << " Answer: ";
	gotoxy(12,18); cin >> answer;
}

int main()
{
	 gotoxy(66,2); char str[1000] = {" Lesson 2: Program Logice Desing and Formulation"};
	 	for(int x= 0; x < strlen(str); x++)
	{
		cout << str[x];
		Sleep(50);
	}
	
	lesson2();
	warning();
	question();
}


