<<<<<<< HEAD
# Project 3: Pong Game
## Introduction
Pong game is a simple mps430 pong game which allows for 2 players to play at once which increases the difficulty anytime a paddle collides with the ball. Implements previously used buzzer files from project 2.

## Files
This directory contains all the necessary libs needed in order to load pong_game into an msp430:
*circleLib
*lcdLib
*lib
*p2swLib
*pong_game
*shapeLib
*timerLib

Before running the game be sure to run "make" via bash on the root directory to prepare all lib files

## How to play

1. "make load" via bash

2. To start playing either press any of the SW2-SW5 keys on your msp430

3. SW2 - SW3 controls the bottom paddle, while SW4 - SW5 controls the upper paddle

4. Whenever a player makes a goal in the opposite player's field the paddle will turn red indicating who has just      	  missed the ball. Both paddles will alternate colors as well as the ball in order to let the player know who has
   last hit the ball.

5. There is no score limit, so place your bets and have fun.

## List of functions inside pong_game.c

/** 
 *  Function by Eric Freudenthal
 *  
 *  Takes a given movLayer and a Layer which will be in charge of drawing and probing all moving layers
 * 
 *  \param movLayers 
 *  \param layers
 */

movLayerDraw(MovLayer *movLayers, Layer *layers)

Function by Eric Freudenthal

/** Modified function by Eric Freudenthal Advances a moving shape within a fence also
 * incorporates logic statements to check if ball layer has collided with any of the paddles
 * if it has it will increase the balls velocity. If it collides with the external fence
 * score will be updated for the corresponding player, player who missed the ball will be
 * highlighted in red
 *  
 * 
 *  \param ml The moving shape to be advanced 
 *  \param ml1 The moving paddle to be advanced
 *  \param ml2 The moving paddle to be advanced
 *  \param fence The region which will serve as a boundary for ml
 */

void mlAdvance(MovLayer *ml, MovLayer *ml1, MovLayer *ml2, Region *fence)

/** Watchdog timer interrupt handler. 15 interrupts/sec 
 *  Also has logic statements implemented for switch handlers on SW2-SW5 buttons
 *  SW2-SW3 will move the bottom paddle while SW4-SW5 will move the upper paddle
 */

void wdt_c_handler()

=======
# Project 3: LCD Game
## Introduction
Continuing your effort to help ACME Solutions provide Christmas toys, your task is now to develop a game for the LCD screen.  You should utilize the knowledge you have gained working with the buttons and buzzer.  In addition, a series of libraries have been found to assist you in creating your game.

## Requirements
Your game should meet the following minimum criteria:

- dynamically draw and translate shapes across the screen
- handle colissions properly with other shapes and area boundaries
- produce sound in relation to the state of the game
- communicate with the player using text
- implement a state transition in assembly

Don't forget to properly document your source code and how to play the game.

## Grading Criteria
Your lab will be graded based on the level of understanding shown and demonstrated in your game (i.e. the complexity of your game).  The grading will follow a traditional letter grade scale (A, B, C, F).

Consider the requirements of producing a simple game of pong.  You have the following elements:

- an arena to play in
- a ball
- two paddles to smack the ball around
- a score 

And the game usually behaves with the following functionality:

- the ball moves at a velocity and collides with the arena and paddles
- a sound plays when a collision occurs
- a player scores when the ball makes it to the opposite side of the screen
- the score is updated and the game begins again

Developing a pong game with the minimum features (discussed above) will earn you a grade of a C.  

To earn a better grade (for pong), consider the following ideas:

- shapes, colors, speeds and sizes of graphical elements change size in response to player skill
- rendering the game in such a way that moving objects pass through (but don't erase) the score
>>>>>>> 55c2de4f35b28a40060637346c087af332b0e698
