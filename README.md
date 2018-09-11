# FILLER

## Goal
Filler is an algorithmic game between 2 players managed by a VM. <br/>
The player's goal is to fill the map with pieces of random shapes and sizes. The player that filled the most spaces on the map wins. <br/>
The goal is to design the most efficient player.

## Game explanation
Every turn, the player receives the map status and one piece from the VM. <br/>
The player 1 is identified by the shape "X".<br/>
The player 2 is identified by the shape "O".<br/>

![Alt text](./img/VM_map.png?raw=true "Title")

The player then positions the piece on the map by writing its position on std 1 ("x y\n"). The VM sends the update state of the map and the next to the second player for the next turn.<br/>
The game stops when one player made an error or no additionnal pieces can be put on the map. <br/>
The VM then computes the scores of each players by adding the number of positions it has occupied ("X" or "O").<br/>

Map at game start :
![Alt text](./img/map.png?raw=true "Title")

Pieces example : 
![Alt text](./img/piece.png?raw=true "Title")

## Data structure


## Program architecture
The program is structured around the following components :<br/>
INITIALIZATION : <br/>
1- parsing : getting input piece and map<br/>
2- get info : get some data about the map and piece<br/>
PLAYER STRATEGY :<br/>
3- chose strategy based the map shape (where are each players)<br/>
4- check that the piece can be positionned according to the strategy<br/>
-- if yes : position piece and return control exit program (returning control to VM)<br/>
-- if no : check next strategy<br/>
5- if the piece can't be positionned : return control to VM (end of game)<br/>

File sructure : <br/>

![Alt text](./img/file_structure.png?raw=true "Title")


## Strategy
The strategy used for the design of this player is to occupy the maximum space by reaching the borders of the map.<br/>
This allows sometime to block some regions of the map to the other user. <br/>
Despite its relative simplicity, this strategy works quite well.
