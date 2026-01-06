#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    int *player = (int *)malloc(20); /*20 -> bit allocated for the var*/
    int *bot = (int *)malloc(20);
    int game = 1;
    char a1 = '_', a2 = '_', a3 = '_', b1 = '_', b2 = '_', b3 = '_', c1 = '_', c2 = '_', c3 = '_', name[1000];
    system("clear");
    printf("player name: ");
    scanf("%s", &name);
    printf("\n\n  %c  %c  %c\n  %c  %c  %c\n  %c  %c  %c\n\n", a1, a2, a3, b1, b2, b3, c1, c2, c3);
    
    while(game == 1){
        printf("%s: ", name);
        scanf("%s", *&player);
        if(*player == '1'){
            if(a1 == '_'){
                a1 = 'X';
                goto gobot;
            } else{
                printf("can not place here %s", name);
                goto playerend;
            }
        } 

        if(*player == '2'){
            if(a2 == '_'){
                a2 = 'X';
                goto gobot;
            } else{
                printf("can not place here %s", name);
                goto playerend;
            }
        } 
        
        if(*player == '3'){
            if(a3 == '_'){
                a3 = 'X';
                goto gobot;
            } else{
                printf("can not place here %s", name);
                goto playerend;
            }
        } 

        if(*player == '4'){
            if(b1 == '_'){
                b1 = 'X';
                goto gobot;
            } else{
                printf("can not place here %s", name);
                goto playerend;
            }
        } 

        if(*player == '5'){
            if(b2 == '_'){
                b2 = 'X';
                goto gobot;
            } else{
                printf("can not place here %s", name);
                goto playerend;
            }
        }

        if(*player == '6'){
            if(b3 == '_'){
                b3 = 'X';
                goto gobot;
            } else{
                printf("can not place here %s", name);
                goto playerend;
            }
        } 

        if(*player == '7'){
            if(c1 == '_'){
                c1 = 'X';
                goto gobot;
            } else{
                printf("can not place here %s", name);
                goto playerend;
            }
        }

        if(*player == '8'){
            if(c2 == '_'){
                c2 = 'X';
                goto gobot;
            } else{
                printf("can not place here %s", name);
                goto playerend;
            }
        }

        if(*player == '9'){
            if(c3 == '_'){
                c3 = 'X';
                goto gobot;
            } else{
                printf("can not place here %s", name);
                goto playerend;
            }
        }

        gobot:
        /*bot*/
        /*verification*/
        /*can i won ?*/
        if((a1 == 'O') && (a2 == 'O') && (a3 == '_')){
            a3 = 'O';
            goto botend;
        }
        if((a1 == 'O') && (a2 == '_') && (a3 == 'O')){
            a2 = 'O';
            goto botend;
        }
        if((a1 == '_') && (a2 == 'O') && (a3 == 'O')){
            a1 = 'O';
            goto botend;
        }

        if((b1 == 'O') && (b2 == 'O') && (b3 == '_')){
            b3 = 'O';
            goto botend;
        }
        if((b1 == 'O') && (b2 == '_') && (b3 == 'O')){
            b2 = 'O';
            goto botend;
        }
        if((b1 == '_') && (b2 == 'O') && (b3 == 'O')){
            b1 = 'O';
            goto botend;
        }

        if((c1 == 'O') && (c2 == 'O') && (c3 == '_')){
            c3 = 'O';
            goto botend;
        }
        if((c1 == 'O') && (c2 == '_') && (c3 == 'O')){
            c2 = 'O';
            goto botend;
        }
        if((c1 == '_') && (c2 == 'O') && (c3 == 'O')){
            c1 = 'O';
            goto botend;
        }

        if((a1 == 'O') && (b1 == 'O') && (c1 == '_')){
            c1 = 'O';
            goto botend;
        }
        if((a1 == 'O') && (b1 == '_') && (c1 == 'O')){
            b1 = 'O';
            goto botend;
        }
        if((a1 == '_') && (b1 == 'O') && (c1 == 'O')){
            a1 = 'O';
            goto botend;
        }

        if((a2 == 'O') && (b2 == 'O') && (c2 == '_')){
            c2 = 'O';
            goto botend;
        }
        if((a2 == 'O') && (b2 == '_') && (c2 == 'O')){
            b2 = 'O';
            goto botend;
        }
        if((a2 == '_') && (b2 == 'O') && (c2 == 'O')){
            a2 = 'O';
            goto botend;
        }

        if((a3 == 'O') && (b3 == 'O') && (c3 == '_')){
            c3 = 'O';
            goto botend;
        }
        if((a3 == 'O') && (b3 == '_') && (c3 == 'O')){
            b3 = 'O';
            goto botend;
        }
        if((a3 == '_') && (b3 == 'O') && (c3 == 'O')){
            a3 = 'O';
            goto botend;
        }

        if((a1 == 'O') && (b2 == 'O') && (c3 == '_')){
            c3 = 'O';
            goto botend;
        }
        if((a1 == 'O') && (b2 == '_') && (c3 == 'O')){
            b2 = 'O';
            goto botend;
        }
        if((a1 == '_') && (b2 == 'O') && (c3 == 'O')){
            a1 = 'O';
            goto botend;
        }

        if((a3 == 'O') && (b2 == 'O') && (c1 == '_')){
            c1 = 'O';
            goto botend;
        }
        if((a3 == 'O') && (b2 == '_') && (c1 == 'O')){
            b2 = 'O';
            goto botend;
        }
        if((a3 == '_') && (b2 == 'O') && (c1 == 'O')){
            a3 = 'O';
            goto botend;
        }

        /*if player will win*/
        if((a1 == 'X') && (a2 == 'X') && (a3 == '_')){
            a3 = 'O';
            goto botend;
        }
        if((a1 == 'X') && (a2 == '_') && (a3 == 'X')){
            a2 = 'O';
            goto botend;
        }
        if((a1 == '_') && (a2 == 'X') && (a3 == 'X')){
            a1 = 'O';
            goto botend;
        }
        if((b1 == 'X') && (b2 == 'X') && (b3 == '_')){
            b3 = 'O';
            goto botend;
        }
        if((b1 == 'X') && (b2 == '_') && (b3 == 'X')){
            b2 = 'O';
            goto botend;
        }
        if((b1 == '_') && (b2 == 'X') && (b3 == 'X')){
            b1 = 'O';
            goto botend;
        }
        if((c1 == 'X') && (c2 == 'X') && (c3 == '_')){
            c3 = 'O';
            goto botend;
        }
        if((c1 == 'X') && (c2 == '_') && (c3 == 'X')){
            c2 = 'O';
            goto botend;
        }
        if((c1 == '_') && (c2 == 'X') && (c3 == 'X')){
            c1 = 'O';
            goto botend;
        }
        
        if((a1 == 'X') && (b1 == 'X') && (c1 == '_')){
            c1 = 'O';
            goto botend;
        }
        if((a1 == 'X') && (b1 == '_') && (c1 == 'X')){
            b1 = 'O';
            goto botend;
        }
        if((a1 == '_') && (b1 == 'X') && (c1 == 'X')){
            a1 = 'O';
            goto botend;
        }
        if((a2 == 'X') && (b2 == 'X') && (c2 == '_')){
            c2 = 'O';
            goto botend;
        }
        if((a2 == 'X') && (b2 == '_') && (c2 == 'X')){
            b2 = 'O';
            goto botend;
        }
        if((a2 == '_') && (b2 == 'X') && (c2 == 'X')){
            a2 = 'O';
            goto botend;
        }
        if((a3 == 'X') && (b3 == 'X') && (c3 == '_')){
            c3 = 'O';
            goto botend;
        }
        if((a3 == 'X') && (b3 == '_') && (c3 == 'X')){
            b3 = 'O';
            goto botend;
        }
        if((a3 == '_') && (b3 == 'X') && (c3 == 'X')){
            a3 = 'O';
            goto botend;
        }

        /*random*/
        botrndstrt:
        srand(time(NULL));
        *bot = rand() %8;
        if(*bot == 0){
            if(a1 == '_'){
                a1 = 'O';
            } else{
                goto botrndstrt;
            }
        }

        if(*bot == 1){
            if(a2 == '_'){
                a2 = 'O';
            } else{
                goto botrndstrt;
            }
        }

        if(*bot == 2){
            if(a3 == '_'){
                a3 = 'O';
            } else{
                goto botrndstrt;
            }
        }

        if(*bot == 3){
            if(b1 == '_'){
                b1 = 'O';
            } else{
                goto botrndstrt;
            }
        }

        if(*bot == 4){
            if(b2 == '_'){
                b2 = 'O';
            } else{
                goto botrndstrt;
            }
        }

        if(*bot == 5){
            if(b3 == '_'){
                b3 = 'O';
            } else{
                goto botrndstrt;
            }
        }

        if(*bot == 6){
            if(c1 == '_'){
                c1 = 'O';
            } else{
                goto botrndstrt;
            }
        }

        if(*bot == 7){
            if(c2 == '_'){
                c2 = 'O';
            } else{
                goto botrndstrt;
            }
        }

        if(*bot == 8){
            if(c3 == '_'){
                c3 = 'O';
            } else{
                goto botrndstrt;
            }
        }



        botend:
        playerend:
        system("clear");
        printf("\n\n %c  %c  %c\n %c  %c  %c\n %c  %c  %c\n\n", a1, a2, a3, b1, b2, b3, c1, c2, c3);

        /*do you won ?*/
        if((a1 == 'X') && (a2 == 'X') && (a3 == 'X')){
            printf("YOU WON !!\n");
            break;
        } else if((a1 == 'O') && (a2 == 'O') && (a3 == 'O')){
            printf("you loose...\n");
            break;
        }

        if((b1 == 'X') && (b2 == 'X') && (b3 == 'X')){
            printf("YOU WON !!\n");
            break;
        } else if((b1 == 'O') && (b2 == 'O') && (b3 == 'O')){
            printf("you loose...\n");
            break;
        }

        if((c1 == 'X') && (c2 == 'X') && (c3 == 'X')){
            printf("YOU WON !!\n");
            break;
        } else if((c1 == 'O') && (c2 == 'O') && (c3 == 'O')){
            printf("you loose...\n");
            break;
        }

        if((a1 == 'X') && (b1 == 'X') && (c1 == 'X')){
            printf("YOU WON !!\n");
            break;
        } else if((a1 == 'O') && (b1 == 'O') && (c3 == 'O')){
            printf("you loose...\n");
            break;
        }

        if((a2 == 'X') && (b2 == 'X') && (c2 == 'X')){
            printf("YOU WON !!\n");
            break;
        } else if((a2 == 'O') && (b2 == 'O') && (c2 == 'O')){
            printf("you loose...\n");
            break;
        }

        if((a3 == 'X') && (b3 == 'X') && (c3 == 'X')){
            printf("YOU WON !!\n");
            break;
        } else if((a3 == 'O') && (b3 == 'O') && (c3 == 'O')){
            printf("you loose...\n");
            break;
        }

        if((a1 == 'X') && (b2 == 'X') && (c3 == 'X')){
            printf("YOU WON !!\n");
            break;
        } else if((a1 == 'O') && (b2 == 'O') && (c3 == 'O')){
            printf("you loose...\n");
            break;
        }

        if((a3 == 'X') && (b2 == 'X') && (c1 == 'X')){
            printf("YOU WON !!\n");
            break;
        } else if((a3 == 'O') && (b2 == 'O') && (c3 == 'O')){
            printf("you loose...\n");
            break;
        }
    }
}
