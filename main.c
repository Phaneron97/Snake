#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int x,y;
int sizeX = 50, sizeY = 50, playField[50][50];
int usleep(useconds_t useconds);

int main()
{
    //Border lines
    //printf("%c\n", 201); //upper-left corner
    //printf("%c\n", 187); //upper-right corner
    //printf("%c\n", 205); //horizontal
    //printf("%c\n", 186); //vertical
    //printf("%c\n", 200); //lower-left corner
    //printf("%c\n", 188); //lower-right corner

    NewGame();
    DrawMap();
}

void NewGame()
{

}

void DrawMap(){
    printf("Welcome to Snake\n");
    usleep(250);
    //draw first line
    for (x = 0; x <= sizeX; x++) {
        if (x == 0){
            printf("%c", 201);
        }
        else if (x == sizeX) {
            printf("%c", 187);
        }
        else {
            printf("%c", 205);
        }
    }
    printf("\n");

    //draw vertical lines between first and last line
    for (y = 0; y <= sizeY; y++) {
        printf("%c", 186);
        for (x = 0; x < sizeX; x++)
        {
            if (x == sizeX-1){
                printf("%c\n", 186);
            }
            else{
                printf(" ");
            }
        }
    }

    //draw last line
    for (x = 0; x <= sizeX; x++) {
        if (x == 0){
            printf("%c", 200);
        }
        else if (x == sizeX) {
            printf("%c", 188);
        }
        else {
            printf("%c", 205);
        }
    }
    printf("\n");
    }
