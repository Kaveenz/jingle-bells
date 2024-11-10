/*----------------------------------------------------------------------------
LAB EXERCISE 4 -PART 2 - TICKER AND PWM
 ----------------------------------------
Make an audio player to play a music

Output: PWM Speaker (play the music)

GOOD LUCK!

*----------------------------------------------------------------------------*/

#include "mbed.h"

#define SPEAKER D3

//Define the frequency of basic music notes
# define Do     0.5
# define Re     0.45
# define Mi     0.4
# define Fa     0.36
# define So     0.33
# define La     0.31
# define Si     0.3
# define No     0 

//Define the beat length (e.g. whole note, half note) 
# define b1     0.5
# define b2     0.25
# define b3     0.125
# define b4     0.075

//Define the musical piece
float note[] = {Mi,No,Mi,No,Mi,No, Mi,No,Mi,No,Mi,No, Mi,No,So,No,Do,No,Re,No,Mi,No, Fa,No,Fa,No,Fa,No,Fa,No, Fa,No,Mi,No,Mi,No,Mi,No,Mi,No, Mi,Re,No,Re,Mi, Re,No,So,No};
float beat[] = {b3,b3,b3,b3,b2,b2, b3,b3,b3,b3,b2,b2, b3,b3,b3,b3,b3,b3,b3,b3,b2,b1, b3,b3,b3,b3,b3,b3,b3,b3, b3,b3,b3,b3,b3,b3,b4,b4,b4,b4, b2,b3,b3,b2,b2, b2,b2,b2,b2};



//Define the PWM output for the speaker
	

//Define the time ticker
	

//Static variable to iterate through note and beat arrays
static int k;


/*----------------------------------------------------------------------------
 Interrupt Service Routine
 *----------------------------------------------------------------------------*/
//Define the ticker ISR
void timer_ISR(){ 
	/*
	The time ticker ISR will be periodically triggered after every single note.
        To do that: 
        -  Update the PWM frequency to that of kth music note
        -  increment k to consider the next music note 
        -  reconfigure the tick interrupt time based on the beat length of kth music note
	*/
	
		
} 

/*----------------------------------------------------------------------------
 MAIN function
 *----------------------------------------------------------------------------*/

int main(){


       k= 0;  // start by considering the first music note

       // Initialize ticker to call timer_ISR after 0.1 seconds


       // sleep and wait for recurring interrupts
	
	
}

// *******************************ARM University Program Copyright (c) ARM Ltd 2019*************************************