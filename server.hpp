#ifndef SERVER_H
#define SERVER_H

class GameServer
{
public:
	void InitServer();

	void sendGameDataToClient(char* game_data, unsigned short len);
}