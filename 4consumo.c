    #include <stdio.h>

    int main(){
        double distancia, combustivel;
        scanf("%lf %lf", &distancia, &combustivel);
        printf("%.3lf km/l\n", distancia / combustivel);
        return 0;
    }            