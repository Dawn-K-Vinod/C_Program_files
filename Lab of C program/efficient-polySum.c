#include <stdio.h>

struct poly {
    float coeff;
    int exp;
};

// Read a polynomial
void read_poly(struct poly p[], int a) {
    for (int i = 0; i < a; i++) {
        printf("Enter the coefficient and exponent of term-%d: ", i + 1);
        scanf("%f %d", &p[i].coeff, &p[i].exp);
    }
}

// Display a polynomial
void display_poly(struct poly p[], int a) {
    printf("Result:\n");
    for (int i = 0; i < a; i++) {
        if (p[i].coeff == 0) continue; // skip zero coefficient terms

        if (i > 0 && p[i].coeff > 0) printf(" + ");
        else if (p[i].coeff < 0) printf(" - ");

        float abs_coeff = p[i].coeff >= 0 ? p[i].coeff : -p[i].coeff;
        printf("%.2fx^%d", abs_coeff, p[i].exp);
    }
    printf("\n");
}

int main() {
    int m, n;
    printf("Enter the number of terms of polynomial-1: ");
    scanf("%d", &m);
    printf("Enter the number of terms of polynomial-2: ");
    scanf("%d", &n);

    struct poly p1[m], p2[n], p3[m + n];

    printf("\nEnter the terms of polynomial-1:\n");
    read_poly(p1, m);
    printf("\nEnter the terms of polynomial-2:\n");
    read_poly(p2, n);

    int i, j, k = 0;

    for (i = 0; i < m; i++, k++) {
        p3[k].coeff = p1[i].coeff;
        p3[k].exp = p1[i].exp;
    }

    for (i = 0; i < n; i++) {
        int found = 0;
        for (j = 0; j < k; j++) {
            if (p2[i].exp == p3[j].exp) {
                p3[j].coeff += p2[i].coeff; // combine terms
                found = 1;
                break;
            }
        }
        if (!found) {
            p3[k].coeff = p2[i].coeff;
            p3[k].exp = p2[i].exp;
            k++;
        }
    }
    display_poly(p3, k);

    return 0;
}
