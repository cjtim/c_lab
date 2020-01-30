#include <stdio.h>

#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    int left,xPos,yPos;
    char piece;
    int board[BOARD_SIZE][BOARD_SIZE];
    //set all in board to space(' ')
    for (int i = 0; i < BOARD_SIZE; i++){
        for(int j = 0; j < BOARD_SIZE; j++){
            board[i][j] = ' ';
        }
    }
    int storex[65];
    int storey[65];
    int storepiece[65];
    scanf("%d",&left);
    for(int i = 0; i < left; i++){
        scanf(" %c(%d, %d)",&piece,&xPos,&yPos);
        storex[i] = xPos;
        storey[i] = yPos;
        storepiece[i] = piece;
        // setPieceOnTable( board, piece , xPos, yPos);
    }
    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    //send x and y to function
    // for(int i = 0; i < left; i++){
       
    //     // setPieceOnTable( board, storepiece[i] , storex[i], storey[i]);
    // }
    int *yPtr = storey, *xPtr = storex;
    int *piecePtr = storepiece;
    for(int i = 0; i < BOARD_SIZE ; i++){
        printf("%d|",i);
        for(int j = 0; j < BOARD_SIZE; j++){
            if (i == *yPtr && j == *xPtr){
                printf("%c|",*piecePtr);
                yPtr++;
                xPtr++;
                piecePtr++;
            }
            else{
                printf(" |");
            }
        }
        puts("");
    }
}
// void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos ){
//     for(int i = 0; i < BOARD_SIZE ; i++){
//          printf("%d|",i);
//         for(int j = 0; j < BOARD_SIZE; j++){
//             if (i == yPos && j == xPos){
//                 printf("%c|",piece);
//             }
//             else{
//                 printf(" |");
//             }
//         }
//         puts("");
//     }
    
// }