#ifndef CHAT_VIEW
#define CHAT_VIEW

#include <ncurses.h>
#include <string>

class Chat_view{
	public:
		Chat_view(int maxX, int maxY);
		void new_msg(std::string str, int line);
		void clear_win();
		void show();

	private:
		WINDOW *chat_view;
		WINDOW *str_win;
};

#endif
