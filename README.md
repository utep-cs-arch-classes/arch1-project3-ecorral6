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

