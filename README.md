# FILLER

## Goal
Filler is an algorithmic game between 2 players managed by a VM.
The player's goal is to fill the map with pieces of random shapes and sizes.
The player that filled the most spaces on the map wins.
The goal is to design the most efficient player.

## Game explanation
Every turn, the player receives the map status and one piece from the VM.
![Alt text](../VM_map.jpg?raw=true "Title")

The player then positions the piece on the map and the VM sends the same information to the next player.

## Strategy
The strategy used for the design of this player is to occupy the maximum space by reaching the borders of the map.
This allows sometime to block some regions of the map to the other user. Despite its relative simplicity, this strategy works quite well.

## Data structure

## Program architecture
