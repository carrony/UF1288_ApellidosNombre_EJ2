/*
 * servicio.c
 *
 *  Created on: 28 nov 2023
 *      Author: David
 */

#include <stdio.h>
#include <string.h>
#include "servicio.h"

void pedirDatosServicio(servicio *servicio) {
	puts("Nombre Servicio: ");
	fflush(stdin);
	fflush(stdout);
	fgets(servicio->nombreServicio, MAXNOMBRESERV, stdin);
	servicio->nombreServicio[strlen(servicio->nombreServicio)-1]='\0';

	puts("Puerto: ");
	fflush(stdout);
	scanf("%d", &(servicio->puerto));

	puts("Nombre Servidor: ");
	fflush(stdin);
	fflush(stdout);
	fgets(servicio->nombreServidor, MAXNOMBRESERV, stdin);
	servicio->nombreServidor[strlen(servicio->nombreServidor)-1]='\0';

	puts("IP Servidor: ");
	fflush(stdin);
	fflush(stdout);
	fgets(servicio->ipServidor, MAXIP, stdin);
	servicio->ipServidor[strlen(servicio->ipServidor)-1]='\0';

	puts("Num Clientes: ");
	fflush(stdout);
	scanf("%d", &(servicio->numClientes));

}


void mostrarDatosServicio(servicio servicio) {
	printf("\nNombre Servicio: %s",servicio.nombreServicio);
	printf("\nServidor: %s", servicio.nombreServidor);
	printf("\nIP:puerto: %s:%d",servicio.ipServidor,servicio.puerto);
	printf("\nNúm. Clientes: %d\n", servicio.numClientes);
}

