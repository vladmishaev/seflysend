#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <iostream>

int main()
{
    int sock, listener;
    struct sockaddr_in addr;
    char buf[1024];
    int bytes_read;

    listener = socket(AF_INET,SOCK_STREAM,0);
    if(listener < 0)
    {
        perror("Socket Error: Can't create soket.");
        exit(2);
    }
    
    addr.sin_family = AF_INET;
    addr.sin_port = htons(3425);
    addr.sin_addr.s_addr;
    return 0;
}
