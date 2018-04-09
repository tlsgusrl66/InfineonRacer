/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

#include "display_io.h"
#include "Tft/conio_tft.h"

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*--------------------------------Enumerations--------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*-----------------------------Data Structures--------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*------------------------------Global variables------------------------------*/
/******************************************************************************/


/******************************************************************************/
/*-------------------------Function Prototypes--------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*------------------------Private Variables/Constants-------------------------*/
/******************************************************************************/

/******************************************************************************/
/*-------------------------Function Implementations---------------------------*/
/******************************************************************************/

/** \brief Demo init API
 *
 * This function is called from main during initialization phase
 */
void display_io_init(void)
{
    /* setup our name string */
    conio_ascii_printfxy (DISPLAY_IO0, 10, 0, (uint8 *)"<<DISPLAY 0>>");

    conio_ascii_printfxy (DISPLAY_IO1, 10, 0, (uint8 *)"<<DISPLAY 1>>");



}


/** \brief Demo run API
 *
 * This function is called from main, background loop
 */
void display_io_run(void)
{

}