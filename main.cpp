#include "miniwin.h"
#include <string>

using namespace miniwin;
using namespace std;

// Bala jugador
    void balaprota(int xx, int yy){
        if(yy == 400 | yy==0){
            color_rgb(0,0,0);
        }else{
            color_rgb(255,242,0);
            rectangulo_lleno(23+xx,0+yy,27+xx,10+yy);
        }
    }

//Para detectar colisiones entre el jugador y los enemigos
bool colision(int jugadorX, int jugadorY, int enemigoX, int enemigoY) {
    // Definir las dimensiones de la nave del jugador
    int jugadorAncho = 10;  // Ancho de la nave del jugador
    int jugadorAlto = 50;   // Alto de la nave del jugador

    // Definir las dimensiones del enemigo
    int enemigoAncho = 8;    // Ancho del enemigo (ajusta según sea necesario)
    int enemigoAlto = 15;    // Alto del enemigo (ajusta según sea necesario)

    // Verificar si hay superposición
    return (jugadorX < enemigoX + enemigoAncho &&
            jugadorX + jugadorAncho > enemigoX &&
            jugadorY < enemigoY + enemigoAlto &&
            jugadorY + jugadorAlto > enemigoY);
}



void xwing(int x, int y) {

    // Fuselaje central
    color_rgb(255, 255, 255); // Blanco
    rectangulo_lleno(20+x, 10+y, 30+x, 50+y);

    // Cabina
    color_rgb(43, 43, 43); // Gris oscuro
    rectangulo_lleno(22+x, 20+y, 28+x, 30+y);

    // Alas superiores
    color_rgb(255, 255, 255); // Blanco
    rectangulo_lleno(10+x, 15+y, 18+x, 20+y); // Ala izquierda
    rectangulo_lleno(32+x, 15+y, 40+x, 20+y); // Ala derecha

    // Alas inferiores
    rectangulo_lleno(10+x, 35+y, 18+x, 40+y); // Ala izquierda inferior
    rectangulo_lleno(32+x, 35+y, 40+x, 40+y); // Ala derecha inferior

    // Motores de las alas
    color_rgb(150, 0, 2); // Rojo oscuro
    rectangulo_lleno(12+x, 13+y, 16+x, 15+y); // Motor izquierdo superior
    rectangulo_lleno(34+x, 13+y, 38+x, 15+y); // Motor derecho superior
    rectangulo_lleno(12+x, 40+y, 16+x, 42+y); // Motor izquierdo inferior
    rectangulo_lleno(34+x, 40+y, 38+x, 42+y); // Motor derecho inferior

    // Detalles del fuselaje
    color_rgb(150, 0, 2); // Rojo oscuro
    rectangulo_lleno(22+x, 12+y, 28+x, 14+y); // Detalle superior del fuselaje
    rectangulo_lleno(22+x, 46+y, 28+x, 48+y); // Detalle inferior del fuselaje

    // Punta de la nave
    color_rgb(150, 0, 2); // Rojo oscuro
    rectangulo_lleno(24+x, 5+y, 26+x, 10+y);

    // Cañones láser (parte superior)
    color_rgb(43, 43, 43); // Gris oscuro
    rectangulo_lleno(6+x, 13+y, 8+x, 43+y); // Cañón izquierdo
    rectangulo_lleno(42+x, 13+y, 44+x, 43+y); // Cañón derecho

    // Cañones láser (parte inferior)
    color_rgb(43, 43, 43); // Gris oscuro
    rectangulo_lleno(4+x, 17+y, 6+x, 21+y); // Extremo izquierdo superior
    rectangulo_lleno(44+x, 17+y, 46+x, 21+y); // Extremo derecho superior
    rectangulo_lleno(4+x, 37+y, 6+x, 41+y); // Extremo izquierdo inferior
    rectangulo_lleno(44+x, 37+y, 46+x, 41+y); // Extremo derecho inferior
}




    void enemigo1(int v, int z){
    // Cabina central
    color_rgb(128, 128, 128); // Gris claro
    rectangulo_lleno(20+v, 15+z, 28+v, 25+z);

    // Detalles de la cabina (círculo oscuro en el centro)
    color_rgb(43, 43, 43); // Gris oscuro
    rectangulo_lleno(22+v, 17+z, 26+v, 23+z);

    // Alas (lado izquierdo)
    color_rgb(0, 0, 0); // Negro
    rectangulo_lleno(5+v, 10+z, 10+v, 30+z); // Parte central del ala izquierda
    rectangulo_lleno(0+v, 12+z, 5+v, 14+z); // Extremo superior del ala izquierda
    rectangulo_lleno(0+v, 26+z, 5+v, 28+z); // Extremo inferior del ala izquierda

    // Alas (lado derecho)
    rectangulo_lleno(38+v, 10+z, 43+v, 30+z); // Parte central del ala derecha
    rectangulo_lleno(43+v, 12+z, 48+v, 14+z); // Extremo superior del ala derecha
    rectangulo_lleno(43+v, 26+z, 48+v, 28+z); // Extremo inferior del ala derecha

    // Conexión de las alas con la cabina (izquierda)
    color_rgb(128, 128, 128); // Gris claro
    rectangulo_lleno(10+v, 15+z, 15+v, 25+z);

    // Conexión de las alas con la cabina (derecha)
    rectangulo_lleno(33+v, 15+z, 38+v, 25+z);

    }

    void enemigo2(int v, int z){
        // Fuselaje central
    color_rgb(192, 192, 192); // Gris claro
    rectangulo_lleno(22+v, 15+z, 28+v, 35+z);

    // Alas laterales
    rectangulo_lleno(16+v, 20+z, 22+v, 30+z); // Ala izquierda
    rectangulo_lleno(28+v, 20+z, 34+v, 30+z); // Ala derecha

    // Motores (parte superior)
    color_rgb(255, 0, 0); // Rojo
    rectangulo_lleno(14+v, 10+z, 18+v, 12+z); // Motor izquierdo superior
    rectangulo_lleno(32+v, 10+z, 36+v, 12+z); // Motor derecho superior

    // Parte inferior de los motores
    color_rgb(255, 255, 255); // Blanco
    rectangulo_lleno(14+v, 12+z, 18+v, 20+z); // Motor izquierdo
    rectangulo_lleno(32+v, 12+z, 36+v, 20+z); // Motor derecho

    // Detalles naranjas en los motores
    color_rgb(255, 140, 0); // Naranja
    rectangulo_lleno(15+v, 16+z, 17+v, 18+z); // Detalle izquierdo
    rectangulo_lleno(33+v, 16+z, 35+v, 18+z); // Detalle derecho

    // Parte inferior de la nave
    color_rgb(192, 192, 192); // Gris claro
    rectangulo_lleno(20+v, 35+z, 30+v, 42+z);

    // Detalles en la parte inferior
    color_rgb(255, 140, 0); // Naranja
    rectangulo_lleno(22+v, 38+z, 24+v, 40+z); // Detalle inferior izquierdo
    rectangulo_lleno(26+v, 38+z, 28+v, 40+z); // Detalle inferior derecho
    rectangulo_lleno(24+v, 40+z, 26+v, 42+z); // Detalle central

    }

    void enemigo3(int v, int z){
        // Parte superior de la nave (negro)
    color_rgb(0, 0, 0); // Negro
    rectangulo_lleno(11+v, 3+z, 25+v, 7+z);  // Parte central negra ampliada
    rectangulo_lleno(7+v, 8+z, 10+v, 11+z);   // Detalle negro izquierdo
    rectangulo_lleno(26+v, 8+z, 29+v, 11+z);  // Detalle negro derecho

    // Fuselaje de la nave (gris)
    color_rgb(192, 192, 192); // Gris claro
    rectangulo_lleno(5+v, 12+z, 31+v, 17+z);  // Fuselaje central gris ampliado

    // Motores y detalles en rojo
    color_rgb(255, 0, 0); // Rojo
    rectangulo_lleno(5+v, 18+z, 10+v, 21+z);  // Motor izquierdo agrandado
    rectangulo_lleno(15+v, 18+z, 21+v, 21+z); // Parte central ampliada
    rectangulo_lleno(26+v, 18+z, 31+v, 21+z); // Motor derecho agrandado

    // Más detalles del fuselaje en gris
    color_rgb(192, 192, 192); // Gris claro
    rectangulo_lleno(10+v, 23+z, 26+v, 28+z);  // Parte inferior de la nave agrandada

    // Detalles adicionales en rojo
    color_rgb(255, 0, 0); // Rojo
    rectangulo_lleno(13+v, 30+z, 16+v, 33+z);  // Detalle inferior izquierdo agrandado
    rectangulo_lleno(20+v, 30+z, 23+v, 33+z);  // Detalle inferior derecho agrandado

    }


    int main() {
        vredimensiona(500, 500);


        // Variables de coordenadas de la nave
        int x = 200, y =400;

        // Variables de coordenadas de la bala de la nave
        int xx = 200, yy = 400;

        int v1 = 100, z1 = 10;  // Posición de la nave enemiga 1
        int v2 = 200, z2 = 70;  // Posición de la nave enemiga 2
        int v3 = 300, z3 = 130;  // Posición de la nave enemiga 3

        // Variables para el control del teclado
        int di1 = DERECHA, di2 = IZQUIERDA, di3 = DERECHA; // Dirección de las tres naves
        int p1, p2, p3; // Aleatoriedad de movimiento de las tres naves
        int velocidad1 = 5, velocidad2 = 3, velocidad3 = 1; // Diferentes velocidades para cada nave

        int t = tecla();

        int enemigosRestantes = 3; // Número inicial de enemigos


        // Movimiento de la nave
        while (t != ESCAPE) {


            // Movimiento horizontal de la nave
            if (t == IZQUIERDA) {
                // Verificar límites izquierda
                if (x > 0) { // No permitir que se salga por la izquierda
                    x = x - 15;
                }
            } else if (t == DERECHA) {
                // Verificar límites derecha
                if (x < 450) { // 500 - ancho de la nave (suponiendo que su ancho es 50)
                    x = x + 15;
                }
            }

            // Movimiento vertical de la nave
            if (t == ARRIBA) {
                // Verificar límites superior
                if (y > 0) { // No permitir que se salga por arriba
                    y = y - 15;
                }
            } else if (t == ABAJO) {
                // Verificar límites inferior
                if (y < 450) { // 500 - altura de la nave (suponiendo que su altura es 50)
                    y = y + 15;
                }
            }


            // Movimiento para las tres naves en la dirección seleccionada

            // Movimiento nave 1 - Movimiento aleatorio rápido
            p1 = rand() % 50;
            if (p1 == 0) {
                di1 = IZQUIERDA;
            }
            if (p1 == 1) {
                di1 = DERECHA;
            }

            // Movimiento basado en la dirección para nave 1
            if (di1 == DERECHA) {
                if (v1 < 450) {
                    v1 += velocidad1; // Mover hacia la derecha rápidamente
                } else {
                    v1 = 0; // Reiniciar la posición al inicio
                }
            } else if (di1 == IZQUIERDA) {
                if (v1 > 20) {
                    v1 -= velocidad1; // Mover hacia la izquierda rápidamente
                } else {
                    v1 = 450; // Reiniciar la posición al final
                }
            }

            // Movimiento nave 2 - Movimiento aleatorio moderado
            p2 = rand() % 50;
            if (p2 == 0) {
                di2 = IZQUIERDA;
            }
            if (p2 == 1) {
                di2 = DERECHA;
            }

            // Movimiento basado en la dirección para nave 2
            if (di2 == DERECHA) {
                if (v2 < 450) {
                    v2 += velocidad2; // Mover hacia la derecha moderadamente
                } else {
                    v2 = 0; // Reiniciar la posición al inicio
                }
            } else if (di2 == IZQUIERDA) {
                if (v2 > 20) {
                    v2 -= velocidad2; // Mover hacia la izquierda moderadamente
                } else {
                    v2 = 450; // Reiniciar la posición al final
                }
            }

            // Movimiento nave 3 - Movimiento aleatorio lento
            p3 = rand() % 50;
            if (p3 == 0) {
                di3 = IZQUIERDA;
            }
            if (p3 == 1) {
                di3 = DERECHA;
            }

            // Movimiento basado en la dirección para nave 3
            if (di3 == DERECHA) {
                if (v3 < 450) {
                    v3 += velocidad3; // Mover hacia la derecha lentamente
                } else {
                    v3 = 0; // Reiniciar la posición al inicio
                }
            } else if (di3 == IZQUIERDA) {
                if (v3 > 20) {
                    v3 -= velocidad3; // Mover hacia la izquierda lentamente
                } else {
                    v3 = 450; // Reiniciar la posición al final
                }
            }


            // Movimiento de la bala de la nave
            if (t == ESPACIO && yy <= 0) {
                xx = x;
                yy = y;
            }

            if (t == ESPACIO) {
                if (yy > 390 && yy <= 400) {
                    yy = yy - 10;
                }
            }
            if (yy <= 391 && yy >= 0) {
                yy = yy - 10;
            }

            // Colisión con nave enemiga 1
            if (xx >= v1 - 30 && xx <= v1) {
                if (yy >= 10 && yy <= 45) {
                    v1 = -30; z1 = -45;  // Destruir la nave 1
                }
            }

            // Colisión con nave enemiga 2
            if (xx >= v2 - 30 && xx <= v2) {
                if (yy >= 10 && yy <= 45) {
                    v2 = -30; z2 = -45;  // Destruir la nave 2
                }
            }

            // Colisión con nave enemiga 3
            if (xx >= v3 - 30 && xx <= v3) {
                if (yy >= 10 && yy <= 45) {
                    v3 = -30; z3 = -45;  // Destruir la nave 3
                }
            }

            // Verificar colisión con enemigos
            if (colision(x, y, v1, z1) || colision(x, y, v2, z2) || colision(x, y, v3, z3)) {
                // Aquí puedes mostrar un mensaje o terminar el juego
                cout << " COLISION DETECTADA! El juego ha terminado." << endl;
                break; // Salir del bucle
            }



            // Borra y refresca la pantalla
            borra();
            enemigo1(v1, z1);  // Dibuja la nave enemiga 1
            enemigo2(v2, z2);  // Dibuja la nave enemiga 2
            enemigo3(v3, z3);  // Dibuja la nave enemiga 3
            balaprota(xx, yy);
            xwing(x, y);
            refresca();
            espera(10);


            // Leer nueva tecla
            t = tecla();
        }

        return 0;
    }

