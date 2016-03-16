#pragma once


#pragma once
#ifndef TicTacToe_H
#define TicTacToe_H
class TicTacToe
{
private:
	char player1;
	char player2;
public:
	TicTacToe(char player1, char player2);
	~TicTacToe();

	void setPlayer1(char player1);
	void setPlayer2(char player2);
	char getPlayer1();
	char getPlayer2();

	void restart();
	void move();
	void print();
	void isWon();
};
#endif
