#include <stdio.h>
#define BOARD_SIZE 8
void bishopMoves(int x, int y){
    printf("  0 1 2 3 4 5 6 7\n");
    printf("------------------\n");
    int x_0x = (y-0)-x , x_1x , x_2x, x_3x, x_4x, x_5x, x_6x, x_7x, x_0y , x_1y, x_2y, x_3y, x_4y, x_5y, x_6y, x_7y;
    int y_0x , y_1x, y_2x, y_3x, y_4x, y_5x, y_6x, y_7a, y_0y , y_1y, y_2y, y_3y, y_4y, y_5y, y_6y, y_7y;
    for(int i = 0; i < BOARD_SIZE ; i++){
        printf("%d|",i);
        for (int j = 0; j < BOARD_SIZE; j++){
            int left = x-(y-i);
            int right = x+(y-i);
            // printf("left is %d right is %d\n",left,right);
            if (j == x && i == y){
                printf("B|");
            }
            else if(j == left || j == right){
                printf("X|");
            }
            else{
                printf(" |");
            }
        }
        printf("\n------------------\n");
    }
    

}
int main(){
    printf("Enter Bishop's X Y position: ");
    int position_x , position_y;
    scanf("%d %d",&position_x, &position_y);
    bishopMoves(position_x,position_y);
}