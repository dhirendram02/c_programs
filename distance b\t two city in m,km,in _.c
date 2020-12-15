#include <stdio.h>

int main() {
	float km,m,feet,inch,cm;
	scanf("%f",&km);
	m=km*1000;
	feet=km*3280.8;
	inch=km*39370.07;
	cm=km*100000;
	printf("m=%f\nfeet=%f\ninch=%f\ncm=%f\n",m,feet,inch,cm);
	return 0;
}

