/*
 * servicio.h
 *
 *  Created on: 28 nov 2023
 *      Author: David
 */

#ifndef SERVICIO_H_
#define SERVICIO_H_

#define MAXNOMBRESERV 30
#define MAXSERVIDOR 50
#define MAXIP 17
#define MAXSERVICIOS


typedef struct {
	char nombreServicio[MAXNOMBRESERV];
	int puerto;
	char nombreServidor[MAXSERVIDOR];
	char ipServidor[MAXIP];
	int numClientes;
} servicio;


void pedirDatosServicio(servicio *servicio);

void mostrarDatosServicio(servicio servicio);


void mostrarListaServicios(servicio listaServicios[MAXSERVICIOS], int tam);

int estaPuertoOcupado(servicio listaServicios[MAXSERVICIOS], int tam, int puerto);

int insertarServicio(servicio listaServicios[MAXSERVICIOS], int tam, servicio s);



#endif /* SERVICIO_H_ */
