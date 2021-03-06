
#ifndef IRC_SERVER
#define IRC_SERVER

#define PASSWORD_FILE "password.txt"
using namespace std;

class IRCServer {

private:
	int open_server_socket(int port);

public:
	
	FILE * passFile;
	char users[100][100];
	void initialize();
	bool checkPassword(int fd, const char * user, const char * password);
	void processRequest( int socket );
	void addUser(int fd, const char * user, const char * password, const char * args);
	void createRoom(int fd, const char * user, const char * password, const char * args);
	void listRooms(int fd, const char * user, const char * password);
	void enterRoom(int fd, const char * user, const char * password, const char * args);
	void leaveRoom(int fd, const char * user, const char * password);
	void sendMessage(int fd, const char * user, const char * password, const char * args,const char * args2);
	void getMessages(int fd, const char * user, const char * password, const char * args, const char * args2);
	void getUsersInRoom(int fd, const char * user, const char * password, const char * args);
	void getAllUsers(int fd, const char * user, const char * password, const char * args);
	void runServer(int port);
};

#endif
