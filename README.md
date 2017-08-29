# IRC Chat Room Server

NOTICE: This project was recently moved to its own repository. It was originally developed in the ‘Current’ repository (Now renamed to [UniCade](https://github.com/benlen10/UniCade)) which contains the previous commits and versions.  

# Project Description
- This is a simple IRC (Internet Relay Chat) Server program.

- This server takes a port number as an argument and will run indefinitely.

- The server stores the current users and passwords in a local database file.

- This sever supports multiple chat rooms.

# Basic Usage
- Launch IRCServer with a single argument specifying the desired port  (1024 < port < 65536)
- IRCServer <port> 
- To test the server with telnet, open a new terminal window and type type:telnet <host> <port>   
- <host> is the name of the machine where talk-server is running
- <port> is the port number you used when you run daytime-server         

# Supported Commands
ADD-USER <USER> <PASSWD>
GET-ALL-USERS <USER> <PASSWD>
CREATE-ROOM <USER> <PASSWD> <ROOM>
LIST-ROOMS <USER> <PASSWD>
ENTER-ROOM <USER> <PASSWD> <ROOM>
LEAVE-ROOM <USER> <PASSWD>
SEND-MESSAGE <USER> <PASSWD> <MESSAGE> <ROOM>
GET-USERS-IN-ROOM <USER> <PASSWD> <ROOM>
GET-MESSAGES <USER> <PASSWD> <LAST-MESSAGE-NUM>
