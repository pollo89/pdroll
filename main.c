#include <stdio.h>		// printf
#include <string.h>		// for memset

#include <time.h>		// for init srand
#include <stdlib.h>		// for init srand
#include "pdroller.h"	// pdroller header file

#define DICE_MAX	20

int main( int argc , char *argv[] ){
	// parameters
	int n , max , offset , k;
	// variables
	int i;
	pdRollerDiceType dices[DICE_MAX];
	
	srand( (unsigned int)time(NULL) );
	// pdRollerInit( );
	
	// set default parameters
	n = 1;
	max = 5;
	offset = 1;
	k = 1;
	
	if( argc == 3 ){
		n = atoi(argv[1]);
		max = atoi( argv[2] );
	}
	
	// clear buffer
	memset( dices , 0 , DICE_MAX * sizeof( pdRollerDiceType ) );
	printf( "%dD%d with k=%d\n\t" , n , max+offset , k );
	pdRollerRoll( dices , n , max );
	for( i=0 ; i < n ; i++ )
		printf( "%d " , k*(offset+dices[i]) );
	printf( "\n" );
	return 0;
}
