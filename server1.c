#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
#include<stdio.h>
#include<arpa/inet.h>
#include<unistd.h>
int main(void){
    struct sockaddr_in server,client;
    int sock, csock, readSize, addressSize;
    char buf[256];
    bzero(&server,sizeof(server));
    server.sin_family=PF_INET;
    server.sin_addr.s_addr=inet_addr("127.0.0.1");
    server.sin_port=htons(5678);
    sock=socket(PF_INET,SOCK_DGRAM,0);
    bind(scok,(struct sockaddr*)&server,sizeod(server));
    while{
    listen(sock,5);
    addressSize=sizeof(client);
    csock=accept(sock,(struct sockaddr*)&client,&addressSize);
    readSize=recv(csock,buf,sizeof(buf),0);
    buf[readSize]='\0';
    printf("Read Message: %s \n",buf);}();
    close(sock);
}