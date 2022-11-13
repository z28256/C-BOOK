#define _CRT_SECURE_NO_WARNINGS 1
//#include "pe12-2a.h"
//static int last_mode;
//static double distance;
//static double fuel;
//
//void set_mode(int mode)
//{
//	if (mode != 0 && mode != 1)
//	{
//		printf("Invalid mode specified. Mode %s used.\n",
//			last_mode == 0 ? "0 (metric)" : "1 (US)");
//	}
//	else
//	{
//		last_mode = mode;
//	}
//}
//
//void get_info(void)
//{
//	printf("Enter distance traveled in %s: ",
//		last_mode == 0 ? "kilometers" : "miles");
//	scanf("%lf", &distance);
//	printf("Enter fuel consumed in %s: ",
//		last_mode == 0 ? "liters" : "gallons");
//	scanf("%lf", &fuel);
//}
//
//void show_info(void)
//{
//	printf("Fuel consumption is ");
//	if (last_mode == 0)
//	{
//		printf("%.2f liters per 100 km.\n", fuel / distance * 100);
//	}
//	else
//	{
//		printf("%.1f miles per gallon.\n", distance / fuel);
//	}
//}


//#include "pe12-2a.h"
//int set_mode(int mode)
//{
//	int last_mode = 0;
//	if (mode != 0 && mode != 1)
//	{
//		last_mode = 1;
//		printf("Invalid mode specified. Mode %s used.\n",
//			!last_mode ? "0 (metric)" : "1 (US)");
//	}
//	else
//	{
//		last_mode = mode;
//	}
//	return last_mode;
//}
//
//void get_info(int mode)
//{
//	double distance, fuel;
//	int mode1 = set_mode(mode);
//	printf("Enter distance traveled in %s: ",
//		!mode1 ? "kilometers" : "miles");
//	scanf("%lf", &distance);
//	printf("Enter fuel consumed in %s: ",
//		!mode1 ? "liters" : "gallons");
//	scanf("%lf", &fuel);
//	show_info(&distance, &fuel, &mode1);
//}
//
//void show_info(double* distance, double* fuel, int* mode1)
//{
//	printf("Fuel consumption is ");
//	if (!*mode1)
//	{
//		printf("%.2f liters per 100 km.\n", *fuel / *distance * 100);
//	}
//	else
//	{
//		printf("%.1f miles per gallon.\n", *distance / *fuel);
//	}
//}