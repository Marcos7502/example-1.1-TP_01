/* @autores: Marcos Gomez Villafañe y Hernan Leandro Bailo 
 * @fecha: 22/8/2024 */
#include "mbed.h"
#include "arm_book_lib.h"

//=====[Funcion principal, punto de entrada despues de encendido o reset]========
int main()
{
    DigitalIn gasDetector(D2); /**< Objeto asociado al detector de gas (D2) */

    DigitalOut alarmLed(LED1); /**< Salida de la alarma en led LD1*/

    gasDetector.mode(PullDown); /**< Modo de detección del gas detector*/

    alarmLed = OFF;

    //=====[Loop de funcionamiento, programa que se ejecuta constantemente]========                                                                               
    while (true) {
        printf("%s\n","Hello World"); 

        if ( gasDetector == ON ) {
            alarmLed = ON;
        }
        
        if ( gasDetector == OFF ) {
            alarmLed = OFF;
        }
    }
}