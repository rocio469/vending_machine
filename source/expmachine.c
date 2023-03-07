#include <stdio.h>

#include "main.h"
#include "errno.h"

/**
 * @Compilar: desde la carpeta ejemplo -> make all, 
 *              se genera un binario llamado app.bin
 * 
 * @Ejecutar: desde la carpeta ejemplo -> ./app.bin
 * 
 * @Ejercicio: Ordenar los elementos del array dado y mostrar el resultado en consola
 * 
 * @TODO: - Hacer un algoritmo que imite el funcionamiento de una maquina expendedora
 *        - Desplegar los productos disponibles en la maquina y precios (definir qué productos 
 *          contiene y cuanto de cada uno).
 *        - Pedir al usuario que ingrese el ID del producto asi como una cantidad de dinero
 *        - La maquina debe ser capaz de desplegar el cambio a devolver, actualizar los productos
 *          disponibles cuando se venden, eliminar de la lista desplegada los productos agotados.
 * 
 */
#define MAXNAMELEN      20U
#define MAXPRODUCT      10U
#define BOLSA_CUENCAS   {.name = "bolsa cuencas",   .precio = 550,      .existencia=3}
#define TRAJE_BANO      {.name = "traje de bano",   .precio = 480,      .existencia=10}
#define CARTERA         {.name = "cartera",         .precio = 380.50,   .existencia=20}
#define PIJAMA          {.name = "pijama",          .precio = 550,      .existencia=15}
#define TANGA           {.name = "tangas",          .precio= 80,        .existencia=50}
#define LIPSTICK        {.name = "lipstick",        .precio= 60,        .existencia=50}
#define PULSERA         {.name = "pulsera",         .precio= 150,       .existencia=30}
#define ARETES          {.name = "aretes",          .precio= 110,       .existencia=40}
#define SCRUNCHIES      {.name = "scrunchies",      .precio= 35,        .existencia=50}
#define RUBOR           {.name = "rubor",           .precio= 35,        .existencia=30}

struct producto 
{
    char name[MAXNAMELEN];
    int id;
    float precio;
    int existencia;
};

int main(void) 
{
    struct producto product_array[] = {
        BOLSA_CUENCAS, 
        TRAJE_BANO,
        CARTERA,
        PIJAMA,
        TANGA,
        LIPSTICK,
        PULSERA,
        ARETES,
        SCRUNCHIES,
        RUBOR,

    };
    int prod_arraysize = sizeof(product_array)/sizeof(struct producto);
    int user_id;
    
    if (prod_arraysize>MAXPRODUCT)
    {
        printf("Los productos excedieron la cantidad maxima que soporta la maquina\n");
        return -EMAXPRDT;
    }
   
    return 0;
}
