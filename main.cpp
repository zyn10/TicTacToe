#include<iostream>
#include<ctime>
using namespace std;
char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
int mod(int game)
{
	cout << "Due you want to play with computer    (Press 1)\n";
	cout << "Due you want to play with 2nd player    (Press 2)\n";				//select game mode by pressing number 1 or 2
	cin >> game;
	return game;
}
void board()
{
	cout << "\tTICK TACK TO\t\n";												//Function for drawing board for game 
	cout << "\t   " << a << "|" << "   " << b << "|" << "   " << c << endl;
	cout << "\t____" << "|" << "____" << "|" << "____" << endl;
	cout << "\t   " << d << "|" << "   " << e << "|" << "   " << f << endl;
	cout << "\t____" << "|" << "____" << "|" << "____" << endl;
	cout << "\t   " << g << "|" << "   " << h << "|" << "   " << i << endl;
	cout << "\t    " << "|" << "    " << "|" << "    " << endl;

}
int toss(int tos)				//function for toss
{
	int a;
	srand(time(0));				//using srand for changing every time the value of rand
	a = rand() % 2 + 1;			//using random function
	a = tos % a;
	return a;
}
int computerint(int n)
{
	if (a == b && c == '3')
	{
		n = 3;
	}
	else if (b == c && a == '1')
	{
		n = 1;
	}
	else if (a == c && b == '2')
	{
		n = 2;
	}
	else if (b == h && e == '5')
	{
		n = 5;
	}

	else if (a == d && g == '7')
	{
		n = 7;
	}
	else if (a == g && d == '4')
	{
		n = 4;
	}
	else if (g == i && h == '8')
	{
		n = 8;
	}
	else if (i == c && f == '6')
	{
		n = 6;
	}
	else if (f == d && e == '5')
	{
		n = 5;
	}
	else if (g == d && a == '1')
	{
		n = 1;
	}
	else if (a == e && i == '9')
	{
		n = 9;
	}
	else if (i == e && a == '1')
	{
		n = 1;
	}
	else if (d == e && f == '6')
	{
		n = 6;
	}
	else if (f == e && d == '4')
	{
		n = 4;
	}
	else if (c == f && i == '9')
	{
		n = 9;
	}
	else if (i == f && c == '3')
	{
		n = 3;
	}
	else if (i == h && g == '7')
	{
		n = 7;
	}
	else if (g == h && i == '9')
	{
		n = 9;
	}
	else
	{

		srand(time(0));
		n = rand() % 9 + 1;
	}
	return n;
}

int cheak(int& count)			//function for checking win & draw conditions
{
	int w = 0;
	static int win1 = 0, win2 = 0, draw = 0;
	if (a == 'X' && b == 'X' && c == 'X' || a == 'X' && d == 'X' && g == 'X' || a == 'X' && e == 'X' && i == 'X' || c == 'X' && f == 'X' && i == 'X' ||
		c == 'X' && e == 'X' && g == 'X' || g == 'X' && h == 'X' && i == 'X' || b == 'X' && e == 'X' && h == 'X' || d == 'X' && e == 'x' && f == 'X')
	{							//condition for player 1 win
		cout << "Player 1 Win";
		w = 1;
		win1++;
	}
	else if (a == 'O' && b == 'O' && c == 'O' || a == 'O' && d == 'O' && g == 'O' || a == 'O' && e == 'O' && i == 'O' || c == 'O' && f == 'O' && i == 'O' ||
		c == 'O' && f == 'O' && i == 'O' || g == 'O' && h == 'O' && i == 'O' || b == 'O' && e == 'O' && h == 'O' || d == 'O' && e == 'O' && f == 'O')
	{                          //condition for player 2 win
		cout << "Player 2 Win";
		w = 2;
		cout << ++win2;
	}

	else if (count == 9)		//condition for draw
	{
		w = 3;
		cout << "Game Draw";
		draw++;
	}
	count++;
	if (w == 1 || w == 2 || w == 3)
	{
		cout << "The Win of player 1   :" << win1 << endl;
		cout << "The Win of player 2   :" << win2 << endl;
		cout << "The Draw games        :" << draw << endl;
	}
	return w;
}
int turn(int choice, char player, bool z, int game)	//function for player turn
{
	int x = 0, y;

	if (z == true)			//input for player 1 
		cin >> choice;
	else if (z == false && game == 1)		//input for computer if player vs computer
	{
	choice=	computerint(choice);
		//use randum function for generate input value
	}
	else
		cin >> choice;
	system("cls");				//use for clare the screen
	switch (choice)				//cheak the number to input in which board
	{
	case 1:
	{

		{
			if (a == '1')
			{
				a = player;
				board();
			}
			else
			{
				cout << "Invalid number";
				x = 1;
			}
		}

		break;
	}
	case 2:
	{

		{
			if (b == '2')

			{
				b = player;;
				board();
			}


			else
			{
				cout << "Invalid number";
				x = 1;

			}
		}
		break;
	}
	case 3:
	{

		{
			if (c == '3')
			{
				c = player;;
				board();
			}

			else
			{
				cout << "Invalid number";
				x = 1;

			}

		}
		break;
	}
	case 4:
	{
		{
			if (d == '4')
			{
				d = player;;
				board();
			}


			else
			{
				cout << "Invalid number";
				x = 1;
			}
		}
		break;
	}
	case 5:
	{
		{
			if (e == '5')
			{
				e = player;
				board();
			}

			else
			{
				cout << "Invalid number";
				x = 1;
			}
		}
		break;
	}
	case 6:
	{
		{
			if (f == '6')
			{
				f = player;
				board();
			}


			else
			{
				cout << "Invalid number";
				x = 1;
			}
		}
		break;
	}
	case 7:
	{
		{
			if (g == '7')
			{
				g = player;
				board();
			}


			else
			{
				cout << "Invalid number";
				x = 1;
			}
		}
		break;
	}
	case 8:
	{

		{
			if (h == '8')
			{
				h = player;
				board();
			}


			else
			{
				cout << "Invalid number";
				x = 1;

			}
		}
		break;
	}
	case 9:
	{

		{
			if (i == '9')
			{
				i = player;
				board();
			}


			else
			{
				cout << "Invalid number";
				x = 1;
			}
		}
		break;
	}

	}
	return x;
}

void manu()							//main manu
{

	int  size = 9, choice = 0, a = 0, tos, toas, y = 0, w, game = 0, playagain = 1, count = 1;
	bool z;
	char player;
	while (playagain >= 1)			//outer loop for repeating game
	{
		count = 1;
		game = mod(game);				//call function game mod
		cout << "Select the number 1 or 2     :";
		cin >> tos;
		toas = toss(tos);				//function call for toss
		if (tos == 1)
		{
			z = true;
			player = 'X';
		}
		else
		{
			z = false;
			player = 'O';
		}
		cout << "\t	\t	" << a;
		board();					//call game board

		while (1)				//ineer loop for each game
		{
			if (z == true)
			{
				cout << "Player 1 turn (Enter place in number)   :";
				y = turn(choice, player, z, game);			//call function for turn 
				if (y == 1)
					continue;
				z = false;
				player = 'O';
			}
			else
			{
				cout << "Player 2 turn (Enter place in number)   :";
				y = turn(choice, player, z, game);			//call function for turn 
				if (y == 1)
					continue;
				z = true;
				player = 'X';
			}
			w = cheak(count);			//call function for cheak winner
			if (w == 1 || w == 2 || w == 3)
				break;
		}
		cout << "\nIf you want to play again (Press 1)";
		cout << "\nIf you didn't want to play  (Press any number except 1)";
		cin >> playagain;
		cout << "\n\n";
		a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
	}
}
int main()
{
	manu();
return 0;
};
