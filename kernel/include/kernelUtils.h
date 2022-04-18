#ifndef UTILS_H_
#define UTILS_H_

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>
#include <assert.h>

#define IP "127.0.0.0"
#define PUERTO "8000"

typedef enum
{
    MENSAJE,
    PAQUETE,
    NO_OP,
    IO,
    READ,
    WRITE,
    COPY,
    EXIT
} op_code;

t_log *logger;

void *recibir_buffer(int *, int);

int iniciar_servidor(void);
int esperar_cliente(int);
t_list *recibir_paquete(int);
void recibir_mensaje(int);
int recibir_operacion(int);

#endif
