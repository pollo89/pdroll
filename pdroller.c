#include "pdroller.h"
#include <stdlib.h>		// for rand

void pdRollerRoll( pdRollerDiceType dices[] , unsigned short n , pdRollerDiceType max ){
	for( ; n-- ; dices[n] = rand() % max );
}
