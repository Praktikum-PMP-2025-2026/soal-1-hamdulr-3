/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 03 - Structures and Dynamic Arrays
 *   Hari dan Tanggal    : Senin, 27 April 2026
 *   Nama (NIM)          : Hamzah Abdul Rahim (13224066)
 *   Nama File           : soal1modul3.c
 *   Deskripsi           : Soal 1 - Sensor Badai Dinamis
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ARR[1000];

int main(){
    for(int i = 0;i<=999;i++){
        ARR[i] = -1;
    }
    int n = 0;
    int count = 0;
    while(n!=-1){
        scanf("%d", &n);
        if(n == -1){
            break;
        }
        else{
            ARR[count] = n;
            count +=1;
        }
    }

    for(int i = 0;i<count;i++){
        for(int j = 0; j<count-1;j++){
            if(ARR[j]>ARR[j+1]){
                int temp = ARR[j];
                ARR[j] = ARR[j+1];
                ARR[j+1] = temp;
            }
        }
    }

    printf("COUNT %d\n", count);
    printf("SORTED ");
    for(int i = 0; i<count;i++){
        printf("%d ", ARR[i]);
        if(i == count -1){
            printf("\n");
        }
    }

    int idxmed;
    float median;
    if(count%2 == 0){
        idxmed = count/2;
        median = (float)(ARR[idxmed-1] + ARR[idxmed])/2;
    }
    else{
        idxmed = count/2;
        median = (float)ARR[idxmed];
    }
    printf("MEDIAN %.02f\n", median);


}
