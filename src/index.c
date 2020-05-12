#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

char cell_charecter[1] = "O";
char alive_x_coordinates[1000];
char alive_y_coordinates[1000];
int tick_speed = 10;
// Cell generation
void gen(int amount) {
    
    int i = 1;
    int x = 0;
    int y = 0;
    int max_x = 76;
    //Keep generating cells until it reaches the maximum amount of cells
    while (i < amount) {
        int prob = rand() % 3;
        if (prob == 0) {
            prob++;
        }
        if (prob == 2) {
            printf("%s", cell_charecter);
            alive_x_coordinates[i++] = x;
            alive_y_coordinates[i++] = y;
            i++;

        }  else if (prob == 1) {
            printf(" ");

        }
        if (x == max_x) {
            x = 0;
            
            printf("\n");
            y++;
        } 
        
        x++;
  
        
    }
}
void tick() {

}
int main() {
    srand(time(NULL));  
    gen(500);
    
    return 0;
}
