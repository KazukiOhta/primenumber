//
//  main.c
//  vol.0_09
//
//  Created by 太田　一毅 on 2015/05/07.
//  Copyright (c) 2015年 太田一毅. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int data[30];

int n;
int i;
int l;
int k;
int m;
int n;
int o;
int p;
int max_data;
int num_of_prime;
int prime_num[10000];

int main(int argc, const char * argv[]) {
    
    for (i = 0; i < 30 ; i ++){
        data[i] = -1;
    }
    
    i = 0;
    
    while (1) {
        scanf("%d",&data[i]);
        if (data[i] == -1){
            break;
        }
        i ++;
    }
    
    for (n = 0; n < i; n ++) {
        if (max_data < data[n]) {
            max_data = data[n];
        }
    }
    
    for (m = 0; m < i; m ++) {
        for (n = 2; n < max_data; n ++) {
            l = 0;
            for (k = 0; k < num_of_prime; k ++) {
                if (n % prime_num[k] == 0) {
                    l = 1;
                }
            }
            if (l == 0) {
                prime_num [num_of_prime] = n;
                num_of_prime ++;
            }
        }
//        printf("%d\n",num_of_prime);
    }
    
    for (o = 0; o < i; o ++) {
        while (prime_num[p] < data[o]) {
            p ++;
        }
        printf("%d\n",p);
    }
    
    return 0;
}
