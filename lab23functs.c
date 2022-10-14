/** lab23functs.c
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 23
* Purpose: Practice using structs
* ===========================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab23functs.h"


int readPokemonData(char filename[], Pokemon array[]){
    int numPokemon = 0;
    FILE* myFile  = NULL;
    myFile = fopen(filename, "r");
    while (!feof(myFile)) {
        //pokemon_name hp attack defense speed

    }
    fclose(myFile);
    return numPokemon;
}

void printPokemon(Pokemon pokemon) {

}

void calculateCombatPower(Pokemon array[], int size) {

}

Pokemon* getPokemon(char* name, Pokemon array[], int size) {
    Pokemon* ptr = NULL;

    return ptr;
}

int predictWinner(Pokemon pokemon1, Pokemon pokemon2) {
    int winner = 0;

    return winner;
}