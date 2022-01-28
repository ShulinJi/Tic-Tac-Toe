//
//  GameState.cpp
//  TicTacToe
//
//  Created by Tarek Abdelrahman on 2019-06-07.
//  Modified by Tarek Abdelrahman on 2020-09-17.
//  Copyright © 2019-2020 Tarek Abdelrahman. All rights reserved.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.
//

#include "globals.h"
#include "GameState.h"

    
GameState::GameState(){
    selectedRow = 0;    // Game board row coordinate selected (in the range 0..boardSize-1)
    selectedColumn = 0; // Game board column coordinate selected (in the range 0..boardSize-1)
    moveValid = true;     // Is the grid location selected by the above coordinates a valid move?
    gameOver = false;      // Is the game over as a result of the selected row and column?
    winCode = 0;        // If the game is over, this is the win code (see lab handout)
    turn = true; // Whose turn is it?
    for(int i = 0; i < boardSize; ++i){
        for(int j = 0; j < boardSize; ++j){
            gameBoard[i][j] = 0;
        }
    }
}
    

int GameState::get_selectedRow(){
    return selectedRow;
}

void GameState::set_selectedRow(int value){
    if(value >= 0 && value < boardSize){
        selectedRow = value;
    }
}


int GameState::get_selectedColumn(){
    return selectedColumn;
}
        
void GameState::set_selectedColumn(int value){
    if(value >= 0 && value < boardSize){
        selectedColumn = value;
    }
}

bool GameState::get_moveValid(){
    return moveValid;
}

void GameState::set_moveValid(bool value){
        moveValid = value;
}

bool GameState::get_gameOver(){
    return gameOver;
}
 
void GameState::set_gameOver(bool value){
    gameOver = value;
    
}

int GameState::get_winCode(){
    return winCode;
}

void GameState::set_winCode(int value){
    if(value >=0 &&  value < 9){
        winCode = value;
    }
}

bool GameState::get_turn(){
    return turn;
}

void GameState::set_turn(bool value){
    turn = value; 
}

int GameState::get_gameBoard(int row, int col){
    return gameBoard[row][col];
}

void GameState::set_gameBoard(int row, int col, int value){  
        gameBoard[row][col] = value; 
}