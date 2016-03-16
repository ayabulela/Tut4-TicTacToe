#include "TicTacToe.h"


TicTacToe::TicTacToe()#include "TicTacToe.h"
#include<iostream>
using namespace std;

TicTacToe::TicTacToe(char contestant1, char contestant2)
{
	player1 = contestant1;
	player2 = contestant2;
	TicTacToe::~TicTacToe();
	{
	}

	char TicTacToe::getPlayer1()
	{
		return player1;
	}
	void TicTacToe::setPlayer1(char player1)
	{
		this->player1 = player1;
	}
	char TicTacToe::getPlayer2()
	{
		return player2;
	}
	void TicTacToe::setPlayer2(char player2)
	{
		this->player2 = player2;
	}
	void TicTacToe::restart()
	{
		system("cls");
	}