#include <stdio.h>

#define BOARD_SIZE    8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main() {
    int left,xPos,yPos;
    int piece;
    int board[BOARD_SIZE][BOARD_SIZE];
    //set all in board to space(' ')
    for (int i = 0; i < BOARD_SIZE; i++){
        for(int j = 0; j < BOARD_SIZE; j++){
            board[i][j] = 0;
        }
    }
    scanf("%d",&left);
    for(int i = 0; i < left; i++){
        scanf(" %lc(%d, %d)",&piece,&xPos,&yPos);
        board[xPos][yPos] = piece;
    }
    printf("------------------\n");
    printf("  0 1 2 3 4 5 6 7\n");
    //send x and y to function
    int send = 0;
    for (int y = 0; y < BOARD_SIZE; y++){
        printf("%d|",y);
        for (int x = 0; x < BOARD_SIZE; x++){
            if(board[x][y] == 0){
                printf(" |");
            }
            else{
                printf("%c|",board[x][y]);
            }
        }
        puts("");

    }
}
void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos ){
    printf("%c|",piece);
}



    // int *yPtr = storey, *xPtr = storex;
    // int *piecePtr = storepiece;
    // for(int i = 0; i < BOARD_SIZE ; i++){
    //     printf("%d|",i);
    //     for(int j = 0; j < BOARD_SIZE; j++){
    //         if (i == *yPtr && j == *xPtr){
    //             printf("%c|",*piecePtr);
    //             yPtr++;
    //             xPtr++;
    //             piecePtr++;
    //         }
    //         else{
    //             printf(" |");
    //         }
    //     }
    //     puts("");
    // }