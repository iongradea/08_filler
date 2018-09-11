# FILLER

## Goal
Filler is an algorithmic game between 2 players managed by a VM.
The player's goal is to fill the map with pieces of random shapes and sizes.
The player that filled the most spaces on the map wins.
The goal is to design the most efficient player.

## Game explanation
Every turn, the player receives the map status and one piece from the VM.

![Alt text](./img/VM_map.png?raw=true "Title")

The player then positions the piece on the map. The VM sends the update state of the map and the next to the second player for the next turn.

## Data structure


## Program architecture
The program is structured around the following components :
- parsing : getting input piece and map
- checks : some checks 

![Alt text](./img/VM_map.png?raw=true "Title")


## Strategy
The strategy used for the design of this player is to occupy the maximum space by reaching the borders of the map.
This allows sometime to block some regions of the map to the other user. Despite its relative simplicity, this strategy works quite well.
