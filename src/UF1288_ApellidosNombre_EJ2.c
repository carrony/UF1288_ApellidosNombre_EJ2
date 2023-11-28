/*
 ============================================================================
 Name        : UF1288_ApellidosNombre_EJ2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "servicio.h"


int main(void) {

	servicio lista[MAXSERVICIOS]={
			{"HTTP",80, "www.server.es","192.168.000.001",30},
			{"FTP",21, "ftp.descargas.es","192.168.001.022",15},
			{"SSH",2, "serverSSH","192.168.010.034",2},
			{"Emule",4662, "www.emuleserver.es","218.125.254.32",17},
			{"Call of duty",27014, "callofduty.server.es","217.155.35.251",8},
	};
	int tam=5;
	int tamOld;

	servicio s;

	puts("Programa de listas de servicios");
	puts("Los servicios dados de alta son: ");
	mostrarListaServicios(lista, tam);


	puts("Introduce un nuevo servicio: ");
	pedirDatosServicio(&s);

	tamOld=tam;
	tam=insertarServicio(lista,tam,s);

	if(tam==tamOld) {
		puts("No se ha insertado, el puerto ya se estaba utilizando. ");
	} else {
		puts("Datos insertados");
	}
	puts("Los servicios dados de alta son: ");
	mostrarListaServicios(lista, tam);

	return EXIT_SUCCESS;
}
