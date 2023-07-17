#include <stdio.h>
#include <math.h>

int main() {

float delta, root1, root2;
int prim, seg, terc;

printf("Sendo a formula x²+12x-13=0, informe o valor de a:");
scanf("%i", &prim);
printf("Agora o valor de b:");
scanf("%i", &seg);
terc = -13;
delta = (seg*seg) - (4*prim*terc);

root1 = (-seg + sqrt(delta))/(2*prim);
root2 = (-seg - sqrt(delta))/(2*prim);

printf("O valor de x' eh: %f\n", root1);
printf("O valor de x'' eh: %f\n", root2);

}
