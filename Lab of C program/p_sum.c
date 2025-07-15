
#include <stdio.h>

struct poly {
    float coeff;
    int exp;
};

void read_poly(struct poly p[], int a) {
    for (int i=0; i<a; i++) {
        printf("Enter the coefficient and exponent of term-%d: ",i+1);
        scanf("%f %d",&p[i].coeff,&p[i].exp);
    }
}

void display_poly(struct poly p[], int a) {
    printf("Result:\n");
    for (int i=0; i<a; i++) {
        if (i != a-1) printf("%.2fx^%d + ",p[i].coeff,p[i].exp);
        else printf("%.2fx^%d\n",p[i].coeff,p[i].exp);
    }
}

int main() {
    int m,n;
    printf("Enter the number of terms of polynomial-1: ");
    scanf("%d",&m);
    printf("Enter the number of terms of polynomial-2: ");
    scanf("%d",&n);

    struct poly p1[m],p2[n],p3[m+n];
    printf("\nEnter the terms of polynomial-1:\n");
    read_poly(p1,m);
    printf("\nEnter the terms of polynomial-2:\n");
    read_poly(p2,n);
    int i=0,j=0,k=0;
    while (i<m && j<n) {
        if (p1[i].exp == p2[j].exp) {
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            p3[k].exp = p1[i].exp;
            i++,j++,k++;
        }
        else if (p1[i].exp > p2[j].exp) {
            p3[k].coeff = p1[i].coeff;
            p3[k].exp = p1[i].exp;
            i++,k++;
        }
        else if (p1[i].exp < p2[j].exp){
            p3[k].coeff = p2[j].coeff;
            p3[k].exp = p2[j].exp;
            j++,k++;
        }
    }
    while (i<m){
        p3[k].coeff = p1[i].coeff;
        p3[k].exp = p1[i].exp;
        k++,i++;
    }
    while (j<n){
        p3[k].coeff = p2[j].coeff;
        p3[k].exp = p2[j].exp;
        k++,j++;
    }

    display_poly(p3,k);
    return 0;
}
