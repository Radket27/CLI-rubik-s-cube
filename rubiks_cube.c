#include<stdio.h>
#include<stdlib.h>

int main(void){
    printf("Red = C, Blue = N, Yellow = Y,\nWhite = B, Green = Z, Orange = P\n");

    int a1 = 0;
    int a2 = 0;
    char tablica2[3];
    char tablica1[6][9];
    for(int i = 0;i < 9;i++){
        tablica1[0][i] = 'C';        
    }
    for(int i = 0;i < 9;i++){
        tablica1[1][i] = 'N';        
    }
    for(int i = 0;i < 9;i++){
        tablica1[2][i] = 'Y';        
    }
    for(int i = 0;i < 9;i++){
        tablica1[3][i] = 'B';        
    }
    for(int i = 0;i < 9;i++){
        tablica1[4][i] = 'Z';        
    }
    for(int i = 0;i < 9;i++){
        tablica1[5][i] = 'P';        
    }

    while(1){
        a1 = 0;
        printf("CUBE\n");
        for(int i =0;i<6;i++){
            if(i == 3)i++;
            if(i == 5)break;
            if(i == 0){
            i = 3;
            printf("|%c|%c|%c|",tablica1[i][0],tablica1[i][1],tablica1[i][2]);
            i = 0;
            printf("|%c|%c|%c|",tablica1[i][0],tablica1[i][1],tablica1[i][2]);
            i = 5;
            printf("|%c|%c|%c|\n",tablica1[i][0],tablica1[i][1],tablica1[i][2]);
            
            i = 3;
            printf("|%c|%c|%c|",tablica1[i][3],tablica1[i][4],tablica1[i][5]);
            i = 0;
            printf("|%c|%c|%c|",tablica1[i][3],tablica1[i][4],tablica1[i][5]);
            i = 5;
            printf("|%c|%c|%c|\n",tablica1[i][3],tablica1[i][4],tablica1[i][5]);

            i = 3;
            printf("|%c|%c|%c|",tablica1[i][6],tablica1[i][7],tablica1[i][8]);
            i = 0;
            printf("|%c|%c|%c|",tablica1[i][6],tablica1[i][7],tablica1[i][8]);
            i = 5;
            printf("|%c|%c|%c|\n",tablica1[i][6],tablica1[i][7],tablica1[i][8]);
            i = 1;
            }
            printf("       |%c|%c|%c|\n",tablica1[i][0],tablica1[i][1],tablica1[i][2]);
            printf("       |%c|%c|%c|\n",tablica1[i][3],tablica1[i][4],tablica1[i][5]);
            printf("       |%c|%c|%c|\n",tablica1[i][6],tablica1[i][7],tablica1[i][8]);
        }
        printf("Which part move?\n");
        scanf("%i",&a1);
        switch(a1){
            case 0:
            tablica2[0] = tablica1[0][0];
            tablica2[1] = tablica1[0][3];
            tablica2[2] = tablica1[0][6];
            tablica1[0][0] = tablica1[1][0];
            tablica1[0][3] = tablica1[1][3];
            tablica1[0][6] = tablica1[1][6];
            tablica1[1][0] = tablica1[2][0];
            tablica1[1][3] = tablica1[2][3];
            tablica1[1][6] = tablica1[2][6];
            tablica1[2][0] = tablica1[4][0];
            tablica1[2][3] = tablica1[4][3];
            tablica1[2][6] = tablica1[4][6];
            tablica1[4][0] = tablica2[0];
            tablica1[4][3] = tablica2[1];
            tablica1[4][6] = tablica2[2];
            break;
            case 1:
            tablica2[0] = tablica1[0][1];
            tablica2[1] = tablica1[0][4];
            tablica2[2] = tablica1[0][7];
            tablica1[0][1] = tablica1[1][1];
            tablica1[0][4] = tablica1[1][4];
            tablica1[0][7] = tablica1[1][7];
            tablica1[1][1] = tablica1[2][1];
            tablica1[1][4] = tablica1[2][4];
            tablica1[1][7] = tablica1[2][7];
            tablica1[2][1] = tablica1[4][1];
            tablica1[2][4] = tablica1[4][4];
            tablica1[2][7] = tablica1[4][7];
            tablica1[4][1] = tablica2[0];
            tablica1[4][4] = tablica2[1];
            tablica1[4][7] = tablica2[2];
            break;
            case 2:
            tablica2[0] = tablica1[0][2];
            tablica2[1] = tablica1[0][5];
            tablica2[2] = tablica1[0][8];
            tablica1[0][2] = tablica1[1][2];
            tablica1[0][5] = tablica1[1][5];
            tablica1[0][8] = tablica1[1][8];
            tablica1[1][2] = tablica1[2][2];
            tablica1[1][5] = tablica1[2][5];
            tablica1[1][8] = tablica1[2][8];
            tablica1[2][2] = tablica1[4][2];
            tablica1[2][5] = tablica1[4][5];
            tablica1[2][8] = tablica1[4][8];
            tablica1[4][2] = tablica2[0];
            tablica1[4][5] = tablica2[1];
            tablica1[4][8] = tablica2[2];
            break;
            case 3:
            tablica2[0] = tablica1[3][0];
            tablica2[1] = tablica1[3][3];
            tablica2[2] = tablica1[3][6];
            tablica1[3][0] = tablica1[4][0];
            tablica1[3][3] = tablica1[4][1];
            tablica1[3][6] = tablica1[4][2];
            tablica1[4][0] = tablica1[5][0];
            tablica1[4][1] = tablica1[5][3];
            tablica1[4][2] = tablica1[5][6];
            tablica1[5][0] = tablica1[0][0];
            tablica1[5][3] = tablica1[0][1];
            tablica1[5][6] = tablica1[0][2];
            tablica1[0][0] = tablica2[0];
            tablica1[0][1] = tablica2[1];
            tablica1[0][2] = tablica2[2];
            break;
            case 4:
            tablica2[0] = tablica1[3][1];
            tablica2[1] = tablica1[3][4];
            tablica2[2] = tablica1[3][7];
            tablica1[3][1] = tablica1[4][3];
            tablica1[3][4] = tablica1[4][4];
            tablica1[3][7] = tablica1[4][5];
            tablica1[4][3] = tablica1[5][1];
            tablica1[4][4] = tablica1[5][4];
            tablica1[4][5] = tablica1[5][7];
            tablica1[5][1] = tablica1[0][3];
            tablica1[5][4] = tablica1[0][4];
            tablica1[5][7] = tablica1[0][5];
            tablica1[0][3] = tablica2[0];
            tablica1[0][4] = tablica2[1];
            tablica1[0][5] = tablica2[2];
            break;
            case 5:
            tablica2[0] = tablica1[3][2];
            tablica2[1] = tablica1[3][5];
            tablica2[2] = tablica1[3][8];
            tablica1[3][2] = tablica1[4][6];
            tablica1[3][5] = tablica1[4][7];
            tablica1[3][8] = tablica1[4][8];
            tablica1[4][6] = tablica1[5][2];
            tablica1[4][7] = tablica1[5][5];
            tablica1[4][8] = tablica1[5][8];
            tablica1[5][2] = tablica1[0][6];
            tablica1[5][5] = tablica1[0][7];
            tablica1[5][8] = tablica1[0][8];
            tablica1[0][6] = tablica2[0];
            tablica1[0][7] = tablica2[1];
            tablica1[0][8] = tablica2[2];
            break;
        }
        printf("END??\n0=NO,1=YES\n");
        scanf("%i",&a2);
        if(a2 == 1){
            break;
        }




    }














    return 0;
}







