// battleship.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "CBattleShipApp.h"

int main()
{
	/*
	WINDOW *win1;
	initscr(); resize_term(25, 25); 
	start_color(); 
	init_pair(1, COLOR_WHITE, COLOR_RED);
	border('*', '*', '*', '*', '*', '*', '*', '*');
	mvprintw(1, 1, "A default window");
	refresh();
	getch();
	win1 = newwin(20, 20, 3, 3);
	wbkgd(win1, COLOR_PAIR(1));
	wattron(win1, COLOR_PAIR(1));
	mvwprintw(win1, 1, 1, "A new window");
	wborder(win1, '@', '@', '@', '@', '@', '@', '@', '@');
	wrefresh(win1);
	getch(); 
	delwin(win1);
	endwin();
	*/
	CBattleShipApp battleShipApp;
	battleShipApp.Play();
    return 0;
}

