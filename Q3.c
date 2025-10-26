/*
Q3 (User Inputs, Operations & Output)
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
*/

int main()
{
	float length,breadth;
	printf("Name - Ujjawal Singh Solanki \nSAP ID - 590020072 \nCourse - BCA \nBatch-B5");
	printf("\n----------------------------------------------------------------\n");
	
	printf("Enter length of Reactangle : ");
	scanf("%f",&length);
	printf("Enter breadth of Reactangle : ");
	scanf("%f",&breadth);
	
	printf("Area of Rectangle=%.2f",length*breadth);
	printf("Perimeter of Rectangle=%.2f",2*(length+breadth));
	return 0;
	
}