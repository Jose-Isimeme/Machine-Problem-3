#include<sys/socket.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<netinet/in.h>
#include<errno.h>
#include<arpa/inet.h>
#include <signal.h>
#include<stdint.h>
#include<sys/time.h>


//Set up timeout feature for server 

//Zombie process handling should be here


int main(int argc, char *argv[]) {

    //Parameter declaration & adresses initialization 
    
    int socket_1; //initial socket 
    int timer = 5; // for timeout feature above
    struct sockaddr_in ser_addr; // server socket 
    struct sockaddr_in cl_addr; //client socket address for connection
    memset(&ser_addr,0,sizeof(ser_addr)); 
	memset(&cl_addr, 0, sizeof cl_addr); 
    socklen_t cl_size = sizeof(); //size of socket address 

    char  rec_buffr[1024]; //storing datagrams received 
    memset(rec_buffr, 0, sizeof(rec_buffr));
    int rec_bytes;

    char sen_buffr[1024]; // buffer for datagrams to be sent
    memset(sen_buffr,0, sizeof(sen_buffr));
    int sen_bytes;

    int port = 0; // for storing port entered in CLI
    int socket_2; // child socket for client connection 
    
    //Get ip and port from CLI:
	if (argc != 3){ //make sure command line sets proper number of arguments
		printf("Please ENTER IP address and port number\n");
		return 0;
	}
	else{
		port = atoi(argv[2]);
	}
    
    //set up socket descriptor(MP1\)

    
    //BIND (get from mp1)

    //receiving info from clinets  (MP1 as well)


    //child processes (from zombie above)
    
    //setting up new socket for datagram exchange
    struct sockaddr_in servaddr;
    servaddr.sin_family = AF_INET; //host byte 
    servaddr.sin_addr.s_addr = inet_addr(argv[1]); //assign server's IP with user input from CLI
    servaddr.sin_port = htons(0); 

    //Error Handling for new socket created 
    			
    if ((new_sckt = socket(AF_INET, SOCK_DGRAM, 0)) == -1){ 
        printf("Server: Unable to create socket for child.\n"); // handling error
        exit(-1);
        }
			
	if (setsockopt(new_sckt, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int)) == -1){ 
        printf("Server: Error in setsockopt\n"); // handling error
        exit(-1);
        }

    //Repeat Bind for new socket


    //RRQ Setup

    //parameter initialiazation
    int timeout_count = 0; //timer for waiting for ACK from client
    FILE *fp; //file pointer
	unsigned short int sent_packnum; //number of packets sent
	sent_packnum = 1; 
	long int offset = 0; //keeps track of position of file pointer from beginning of file
	char nextchar; //store next character to be placed in the packet
	nextchar = -1;









}