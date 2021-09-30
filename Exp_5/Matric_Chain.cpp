#include<stdio.h>
#include<limits.h>
#include<iostream>
int m[10][10]={0},s[10][10]={0},l,k,i,j,q,p[8],n,min,d;

void mat_ch(int);
void optimal(int ,int);

    void mat_ch(int n) {
    for(d=1;d<n;d++) {
        for(i=1;i<=n-d;i++){
            j=i+d;
            min=INT_MAX;
            for(k=i;k<=j-1;k++) {
                q=m[i][k]+m[k+1][j]+ p[i-1] * p[k] * p[j];
                if(q<min) {
                    min=q;
                    s[i][j]=k;
                }
                m[i][j]=min;
            }
        }
    }
}

void optimal(int i,int j) {
    if(i==j) {
        printf("A%d",i);
    }
    else {
        printf("(");
        optimal(i,s[i][j]);
        optimal((s[i][j]+1),j);
        printf(")");
    }
}

int main() {
    printf("enter the matrix size: ");
    scanf("%d",&n);
    printf("enter the matrix elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    for(i=1;i<n;i++)
        printf("A%d   %d * %d\n",i,p[i-1],p[i]);
    mat_ch(n);
    printf(" the M matrix\n");
    for(i=0;i<=n;i++) {
        for(j=0;j<=n;j++) {
            if(i>j)
                printf("-\t ");
            else
                printf("%d\t ",m[i][j]);
        }
        printf("\n");
    }
    printf(" the S matrix\n");
    for(i=0;i<=n;i++) {
        for(j=0;j<=n;j++) {
            if(i>j)
                printf("-\t ");
            else
                printf("%d\t ",s[i][j]);
        }
        printf("\n");
    }
    optimal(1,n);
    printf(" \n Minimum Product = %d",m[1][n]);
    //  getch();
    return 0;
}