/** lab23functs.h
* ===========================================================
* Name: CS210
* Section:
* Project: Lab 23
* Purpose: Practice using structs
* ===========================================================
*/

#ifndef LAB23FUNCTS_H
#define LAB23FUNCTS_H

// YOUR CODE GOES HERE
typedef struct Pokemon_struct
{
    char name[];
    int hp;
    int attack;
    int defense;
    double cp;
}Pokemon;

int readPokemonData(char filename[], Pokemon array[]);

void printPokemon(Pokemon pokemon);

void calculateCombatPower(Pokemon array[], int size);

Pokemon* getPokemon(char* name, Pokemon array[], int size);

int predictWinner(Pokemon pokemon1, Pokemon pokemon2);

#endif