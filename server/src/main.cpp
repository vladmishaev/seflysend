#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>


int main()
{
    int listener;

    listener = socket(AF_INET,SOCK_STREAM,0);
    if(listener < 0)
    {
        
        std::cout << "Socket Error: Can't create soket." << std::endl;;
        return 1;
    }
    
    struct sockaddr_in addr;

    addr.sin_family = AF_INET;
    addr.sin_port = htons(3425);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

    int isBinding = bind(listener,reinterpret_cast<struct sockaddr*>(&addr),sizeof(addr));

    if(isBinding < 0)
    {
        std::cout << "Bind Error: Socket has already been establishing " << std::endl;
    }

    listen(listener, 200);

    return 0;
}
