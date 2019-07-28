/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: B.Dat_
 *
 * Created on July 20, 2019, 3:38 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
//int main(int argc, char** argv) {
//    int h, i, j;
//    printf("nhap do dai canh: ");
//    scanf("%d", &h);
//    for (i = 1; i <= h; i++) {
//        for (j = 1; j <= h - i; j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= i; j++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return (EXIT_SUCCESS);
//}

//int main(int argc, char** argv) {
//    printf("Hello");
//    return 0;
//}

//
//    int a;
//    printf("nhap so a: ");
//    scanf("%d", &a);
//    if (a >= 0) {
//        printf(" a la so duong \n ");
//    } else {
//        printf("a la so am \n");
//    }
//    if (a % 2 == 0) {
//        printf("a la so chan ");
//    } else {
//        printf("a la so le ");
//    }
//    return 0;
//}

//int main(int argc, char** argv) {
//    float a, b, tong, hieu, tich, thuong;
//    printf("nhap so a: ");
//    scanf("%f", &a);
//    printf("nhap so b: ");
//    scanf("%f", &b);
//    tong = a + b;
//    printf("tong a va b la: %f+%f=%f \n", a, b, tong);
//    hieu = a - b;
//    printf("hieu a va b la: %f-%f=%f \n", a, b, hieu);
//    tich = a * b;
//    printf("tich a va b la: %f*%f=%f \n", a, b, tich);
//    thuong = a / b;
//    printf("thuong a va b la: %f/%f=%f \n", a, b, thuong);
//    return 0;
//}

//int main(int argc, char** argv) {
//    int a, b;
//    printf(" nhap so a: ");
//    scanf("%d", &a);
//    printf("nhap so b: ");
//    scanf("%d", &b);
//    if (a > b) {
//        printf("a lon hon b");
//    } else if (a == b) {
//        printf(" a bang b ");
//    } else {
//        printf("a nho hon b");
//    }
//    return 0;
//}

int main(int argc, char** argv) {
    float a, b, c, d;
    float MAX = a;
    printf("nhap a: ");
    scanf("%f", &a);
    printf("nhap b: ");
    scanf("%f", &b);
    printf("nhap c:");
    scanf("%f", &c);
    printf("nhap d:");
    scanf("%f", &d);
    if (a == b && a == c && a == d) {
        printf("khong co gia tri MAX");
    } else {
        if (MAX < b) {
            MAX = b;
        } else if (MAX < c) {
            MAX = c;
        } else if (MAX < d) {
            MAX = d;
        }
        printf("%f", MAX);
    }

    return 0;
}