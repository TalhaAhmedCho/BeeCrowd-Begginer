    #include <stdio.h>
    
    int main() {
    
        double A, B, C;
        const double PI = 3.14159;

        scanf("%lf %lf %lf", &A, &B, &C);

        double triangle = (A * C) / 2.0;
        double circle = PI * C * C;
        double trapezium = ((A + B) * C) / 2.0;
        double square = B * B;
        double rectangle = A * B;

        printf("TRIANGULO: %.3lf\n", triangle);
        printf("CIRCULO: %.3lf\n", circle);
        printf("TRAPEZIO: %.3lf\n", trapezium);
        printf("QUADRADO: %.3lf\n", square);
        printf("RETANGULO: %.3lf\n", rectangle);

        return 0;
    }