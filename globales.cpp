#include "globales.h"

//DEFINIR UNA PLANTILLA GLOBAL PARA VER LOS DISCOS MONTADOS EN EL SISTEMA
Discos_Montados *discos_montados[27];

//DEFINIR EL TAMANO DE LOS APUNTADORES DE LOS INODOS
int TAM_BLOQUES_INODOS = 15;

//CREAR UN LOGIN DE FORMA GLOBAL PARA VERIFICAR LA SESION INICIADA
Login_Sesion *login_activo = new Login_Sesion();