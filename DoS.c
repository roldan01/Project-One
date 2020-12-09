#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main (void){

	int mysocket;
	int conecta;
	char destino [20];
	int i = 0;

		printf ("Target: ");
		scanf ("%s", destino);

	struct sockaddr_in target;

	mysocket = socket(AF_INET, SOCK_STREAM, 0);

	alvo.sin_family = AF_INET;
	alvo.sin_port = htons (80);
	alvo.sin_addr.s_addr = inet_addr(destino);

	while (i<1){

	conecta = connect(mysocket, (struct sockaddr *)&target, sizeof target);

		if (conecta == 0){
			printf ("Atacando --------> %s \n");

		} else {

			printf ("O ataque falhou.\n");

		}
		}
}