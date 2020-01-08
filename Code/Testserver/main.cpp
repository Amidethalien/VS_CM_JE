#include <iostream>
//#include <sys/socket.h>
#include <arpa/inet.h>

using namespace std;

int main()
{
  int my_socket, result = -1;
  char buf[10];
  my_socket = socket(AF_INET,SOCK_DGRAM,0);
  if (my_socket<0) {
  perror("failed to create UDP socket\n");
  return -1;
  }
  // Adresse des Servers
  struct sockaddr_in server_addr;
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(54321); // Port
  server_addr.sin_addr.s_addr = INADDR_ANY;
  result = bind(my_socket,(struct sockaddr*)&server_addr, sizeof(struct sockaddr_in));
  if (result<0) {
  return -1;
  }
  struct sockaddr_in client_addr;
  int addr_len = sizeof(struct sockaddr_in);
  result = recvfrom(my_socket,buf,20,0,(struct sockaddr*)&client_addr,(socklen_t*)&addr_len);
  if (result<0) {
  perror("Empfang fehlgeschlagen");
  return -1;
  }
  printf("Empfangen: '%s' (%d Bytes)\n",buf,result);
  result = sendto(my_socket,buf,1,0,(struct sockaddr*)&client_addr,sizeof(struct sockaddr_in));
  if (result<0) {
  perror("Senden fehlgeschlagen");
  return -1;
  }
  return 0;

}
