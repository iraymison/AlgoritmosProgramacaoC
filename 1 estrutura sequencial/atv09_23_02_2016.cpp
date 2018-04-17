#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float d, x1, x2, y1, y2;
	printf("\n\ta distancia entre dois pontos no espaco");
	printf("\n\ninsira x1:");
	scanf("%f", &x1);
	printf("\ninsira x2:");
	scanf("%f", &x2);
	printf("\ninsira y1:");
	scanf("%f", &y1);
	printf("\ninsira y2:");
	scanf("%f", &y2);
    d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("\na distancia entre dois pontos no espaco e': %0.1f\n", d);
    system("pause");
}
