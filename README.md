# FILLER

## Launch 
`make re`<br/>
`./ressources/filler_vm -f ressources/maps/map00 -p1 ./igradea.filler -p2 ressources/players/superjeannot.filler`


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

![Alt text](./img/pieces.png?raw=true "Title")

## Data structure
- player : idenfies the shape of 'our' player
- opponent : shape of other player
("X" or "O")
- map : the map sent by the VM
- piece : the piece sent by the VM
- lenmx & lenmy : dimensions of the map
- lenpx & lenpy : dimensions of the piece
- p_topx & p_topy : position (in the piece) of the top left "*" of the piece 
("*" is a fill & "." is an empty)
- p_botx & p_boty : position of the bottom right "*" of the piece
(p_top & p_bot are used to position the piece on the map taking into consideration its shape)
- first_p_x & first_p_y : first piece of the player (starting from top left)
- last_p_x & last_p_y : last piece of the player (starting from bottom right)
(first_p & last_p are used to chose the strategy)
- start_bot_pos : identify which of the position the player is at the start (top left or bottom right)
- out_x & out_y : result (position where to put the piece)

Data structure : <br/>

![Alt text](./img/data_structure.png?raw=true "Title")

To debug, there is a macro DEBUG in the include file in ./inc. Set DEBUG to 1 and look at the program workflow and logs in stderr.

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
(Functions are globally grouped with the logic below) 
- ft_save_player_map_piece.c : saves map, piece and player
- ft_get_info_map_piece.c : get some data about map and piece
- solve_dir.c : chose strategy
- test_dir.c & test_dir_2.c : check the available directions for the strategy
- player_go_to.c & ... : apply strategy in the chosen direction
- test_save_coord.c : test if the piece can be positionned on the tested coordinates & saves these

![Alt text](./img/file_structure.png?raw=true "Title")


## Strategy
The strategy used for the design of this player is to occupy the maximum space by reaching the borders of the map.<br/>
This allows sometime to block some regions of the map to the other user. <br/>
Despite its relative simplicity, this strategy works quite well.
