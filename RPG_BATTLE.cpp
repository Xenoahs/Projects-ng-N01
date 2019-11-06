/* This is a group project between 	that is part of a bigger project (Text Based RPG)
		Charles
		Earl
		Genesis
		Justin
		Sean
   Name of Project: RPG Battle System
   Date Started: 06/11/2019 	Date Finished: ???
 */

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void gotoxy(int, int);
void maximizeWindow();
void info(); // Displays HP and MP
void menu(); // Displays Attack, Spell, Defend. Inventory
void spellMenu(); // Displays Spells
void inventoryMenu(); // Displays Items

int HP = 100, eHP = 100;
int mana = 100, eMana = 100;
int armor, eArmor;
bool running = true;

int main()
{
	
	maximizeWindow();
	
	// Genesis dito mo ilagay yung intro shit mo
	
	gotoxy(45, 40); cout << "-->";
	menu();
	
	
}

void gotoxy(int x, int y) 
{ 
	CursorPosition.X = x; 
	CursorPosition.Y = y; 
	SetConsoleCursorPosition(console,CursorPosition); 
}

void info()
{
	gotoxy(5, 3); cout << "Enemy HP: " << eHP;
	gotoxy(5, 4); cout << "Enemy Mana: " << eMana;
	
		if(HP >= 75 && HP <= 100)
		{
			SetConsoleTextAttribute(h, 2);
			gotoxy(125, 41);cout << "My HP: " << HP;
			SetConsoleTextAttribute(h, 15);
		}
		else if(HP >= 50 && HP <= 75)
		{
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_GREEN);
			gotoxy(125, 41);cout << "My HP: " << HP;
			SetConsoleTextAttribute(h, 15);
		}
		else if(HP >= 0 && HP <= 50)
		{
			SetConsoleTextAttribute(h, 4);
			gotoxy(125, 41);cout << "My HP: " << HP;
			SetConsoleTextAttribute(h, 15);
		}
	gotoxy(125, 42); cout << "My Mana: " << mana;
		if(mana >= 75 && mana <= 100)
		{
			SetConsoleTextAttribute(h, 1);
			gotoxy(125, 42); cout << "My Mana: " << mana;
			SetConsoleTextAttribute(h, 15);
		}
	
}

void maximizeWindow() //Maximize Window
{ 
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_SHOWMAXIMIZED);
}

void menu()
{
	
	int menu_item=0, run, x = 45, y = 40;
	
	while(running) // In charge of the menu
  {
	
	info();
    
	gotoxy(49, 40); cout << "Attack         ";
	gotoxy(49, 43); cout << "Spells         ";
	gotoxy(89, 40); cout << "Defend         ";
	gotoxy(89, 43); cout << "Inventory"      ;
	gotoxy(98, 43);
		system("pause>nul");
		
	if(GetAsyncKeyState(VK_DOWN) && y != 43) // Press Arrow Key Down
	{
		
		if(x != 45 && y != 43) // Checks if the chosen option is top right option
		{
			gotoxy(x, y); cout << "   ";
			y += 3;
			gotoxy(x, y); cout << "-->";
			menu_item = 4;
			continue;
		}
		
		gotoxy(45, y); cout << "   "; // Checks if the chosen option is top left option
		y += 3;
		gotoxy(45, y); cout << "-->";
		menu_item = 2;
		continue;
		
	}
	
	if(GetAsyncKeyState(VK_UP) && y != 40) // Press Arrow Key Up
	{
		
		if(x != 45 && y != 40) // Checks if the chosen option is bottom right option
		{
			gotoxy(x, y); cout << "   ";
			y -= 3;
			gotoxy(x, y); cout << "-->";
			menu_item = 3;
			continue;
		}
		
		gotoxy(45, y); cout << "   "; // Checks if the chosen option is bottom left option
		y -= 3;
		gotoxy(45, y); cout << "-->";
		menu_item = 1;
		continue;
		
	}
	
	if(GetAsyncKeyState(VK_RIGHT) && x != 85) // Press Arrow Key Right
	{
		
		if(x != 85 && y != 40) // Checks if the chosen option is bottom left option
		{
			gotoxy(x, y); cout << "   ";
			x += 40;
			gotoxy(x, y); cout << "-->";
			menu_item = 4;
			continue;
		}
		
		gotoxy(x, 40); cout << "   "; // Checks if the chosen option is top left option
		x += 40;
		gotoxy(x, 40); cout << "-->";
		menu_item = 3;
		continue;
	}
	
	if(GetAsyncKeyState(VK_LEFT) && x != 45) // Press Arrow Key Left
	{
		
		if(x != 45 && y != 40) // Checks if the chosen option is bottom right option
		{
			gotoxy(x, y); cout << "   ";
			x -= 40;
			gotoxy(x, y); cout << "-->";
			menu_item = 2;
			continue;
		}
		
		gotoxy(x, 40); cout << "   "; // Checks if the chosen option is top right option
		x -= 40;
		gotoxy(x, 40); cout << "-->";
		menu_item = 1;
		
	}
	
	if(GetAsyncKeyState(VK_RETURN)) // User used the ENTER key
	{
		switch (menu_item)
		{
		
		case 1: // Sean pakilagay yung Computations ng bawat shit here.
			{
				system("cls");
				gotoxy(30, 30);cout << "You have chosen attack";
				break;
			}
		
		case 2:
			{
				system("cls");
				spellMenu();
				break;
			}
			
		
		case 3:
			{
				system("cls");
				gotoxy(30, 30);cout << "You have chosen defend    ";
				break;
			}
		
		case 4:
			{
				system("cls");
				inventoryMenu();
				break;
			}
		}
	}
  }
}

void spellMenu()
{
	
	int menu_item=0, run, x = 45, y = 43;
	while(running) // In charge of the menu
  {
	
	info();
	
    gotoxy(49, 40); cout << "Spell 1";
	gotoxy(49, 43); cout << "Spell 2";
	gotoxy(89, 40); cout << "Spell 3";
	gotoxy(89, 43); cout << "Spell 4";
	gotoxy(95, 43);
		system("pause>nul");
	
	if(GetAsyncKeyState(VK_DOWN) && y != 43) // Press Arrow Key Down
	{
		
		if(x != 45 && y != 43) // Checks if the chosen option is top right option
		{
			gotoxy(x, y); cout << "   ";
			y += 3;
			gotoxy(x, y); cout << "-->";
			menu_item = 4;
			continue;
		}
		
		gotoxy(45, y); cout << "   "; // Checks if the chosen option is top left option
		y += 3;
		gotoxy(45, y); cout << "-->";
		menu_item = 2;
		continue;
		
	}
	
	if(GetAsyncKeyState(VK_UP) && y != 40) // Press Arrow Key Up
	{
		
		if(x != 45 && y != 40) // Checks if the chosen option is bottom right option
		{
			gotoxy(x, y); cout << "   ";
			y -= 3;
			gotoxy(x, y); cout << "-->";
			menu_item = 3;
			continue;
		}
		
		gotoxy(45, y); cout << "   "; // Checks if the chosen option is bottom left option
		y -= 3;
		gotoxy(45, y); cout << "-->";
		menu_item = 1;
		continue;
		
	}
	
	if(GetAsyncKeyState(VK_RIGHT) && x != 85) // Press Arrow Key Right
	{
		
		if(x != 85 && y != 40) // Checks if the chosen option is bottom left option
		{
			gotoxy(x, y); cout << "   ";
			x += 40;
			gotoxy(x, y); cout << "-->";
			menu_item = 4;
			continue;
		}
		
		gotoxy(x, 40); cout << "   "; // Checks if the chosen option is top left option
		x += 40;
		gotoxy(x, 40); cout << "-->";
		menu_item = 3;
		continue;
	}
	
	if(GetAsyncKeyState(VK_LEFT) && x != 45) // Press Arrow Key Left
	{
		
		if(x != 45 && y != 40) // Checks if the chosen option is bottom right option
		{
			gotoxy(x, y); cout << "   ";
			x -= 40;
			gotoxy(x, y); cout << "-->";
			menu_item = 2;
			continue;
		}
		
		gotoxy(x, 40); cout << "   "; // Checks if the chosen option is top right option
		x -= 40;
		gotoxy(x, 40); cout << "-->";
		menu_item = 1;
		
	}
	
	if(GetAsyncKeyState(VK_RETURN)) // User used the ENTER key
	{
		switch (menu_item)
		{
		
		case 1: // Sean pakilagay yung Computations ng bawat shit here.
			{
				system("cls");
				gotoxy(30, 30);cout << "You have chosen spell 1";
				menu();
				break;
			}
		
		case 2:
			{
				system("cls");
				gotoxy(30, 30);cout << "You have chosen spell 2";
				break;
			}
			
		
		case 3:
			{
				system("cls");
				gotoxy(30, 30);cout << "You have chosen spell 3";
				break;
			}
		
		case 4:
			{
				system("cls");
				gotoxy(30, 30);cout << "You have chosen spell 4";
				break;
			}
		}
	}
  }
}

void inventoryMenu()
{
	
	int menu_item=0, run, x = 85, y = 43;
	
	while(running) // In charge of the menu
  {
	
	info();
	
    gotoxy(49, 40); cout << "Health Potion";
	gotoxy(49, 43); cout << "Mana Potion";
	gotoxy(89, 40); cout << "Increase Damage";
	gotoxy(89, 43); cout << "Increase Armor";
		system("pause>nul");
	
	if(GetAsyncKeyState(VK_DOWN) && y != 43) // Press Arrow Key Down
	{
		
		if(x != 45 && y != 43) // Checks if the chosen option is top right option
		{
			gotoxy(x, y); cout << "   ";
			y += 3;
			gotoxy(x, y); cout << "-->";
			menu_item = 4;
			continue;
		}
		
		gotoxy(45, y); cout << "   "; // Checks if the chosen option is top left option
		y += 3;
		gotoxy(45, y); cout << "-->";
		menu_item = 2;
		continue;
		
	}
	
	if(GetAsyncKeyState(VK_UP) && y != 40) // Press Arrow Key Up
	{
		
		if(x != 45 && y != 40) // Checks if the chosen option is bottom right option
		{
			gotoxy(x, y); cout << "   ";
			y -= 3;
			gotoxy(x, y); cout << "-->";
			menu_item = 3;
			continue;
		}
		
		gotoxy(45, y); cout << "   "; // Checks if the chosen option is bottom left option
		y -= 3;
		gotoxy(45, y); cout << "-->";
		menu_item = 1;
		continue;
		
	}
	
	if(GetAsyncKeyState(VK_RIGHT) && x != 85) // Press Arrow Key Right
	{
		
		if(x != 85 && y != 40) // Checks if the chosen option is bottom left option
		{
			gotoxy(x, y); cout << "   ";
			x += 40;
			gotoxy(x, y); cout << "-->";
			menu_item = 4;
			continue;
		}
		
		gotoxy(x, 40); cout << "   "; // Checks if the chosen option is top left option
		x += 40;
		gotoxy(x, 40); cout << "-->";
		menu_item = 3;
		continue;
	}
	
	if(GetAsyncKeyState(VK_LEFT) && x != 45) // Press Arrow Key Left
	{
		
		if(x != 45 && y != 40) // Checks if the chosen option is bottom right option
		{
			gotoxy(x, y); cout << "   ";
			x -= 40;
			gotoxy(x, y); cout << "-->";
			menu_item = 2;
			continue;
		}
		
		gotoxy(x, 40); cout << "   "; // Checks if the chosen option is top right option
		x -= 40;
		gotoxy(x, 40); cout << "-->";
		menu_item = 1;
		
	}
	
	if(GetAsyncKeyState(VK_RETURN)) // User used the ENTER key
	{
		switch (menu_item)
		{
		
		case 1: // Sean pakilagay yung Computations ng bawat shit here.
			{
				system("cls");
				gotoxy(30, 30);cout << "You have chosen Health Potion";
				menu();
				break;
			}
		
		case 2:
			{
				system("cls");
				gotoxy(30, 30);cout << "You have chosen Mana Potion   ";
				break;
			}
			
		
		case 3:
			{
				system("cls");
				gotoxy(30, 30);cout << "You have chosen Increase Damage   ";
				break;
			}
		
		case 4:
			{
				system("cls");
				gotoxy(30, 30);cout << "You have chosen Increase Armor   ";
				break;
			}
		}
	}
  }
}




