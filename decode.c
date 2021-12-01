#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num(char letter);

int main(int argc, char *argv[]) 
{
	char keys[91][5] = {"SUSHI", "PRASA", "IMTIA", "MUHAM", "ARAFA", "RAJEN", "BOPPA", "TOMTO", "BYLAN", "ANTHO", "CHRON", "KEVIN", "DESAI", "ANAND", "DUTTA", "AMAND", "FERNA", "MATTH", "GIBSO", "MAURI", "GOMEZ", "KEITH", "HARRI", "MURTU", "JADLI", "SUMIT", "JHAJH", "TURGA", "KORKM", "BERNA", "KUKUK", "DHIRE", "KUDIT", "PALDE", "LAMAL", "BYRON", "LONGL", "QIQIQ", "LULUL", "HUGHH", "MAYNA", "JIANW", "NIUNI", "STEVE", "OHARA", "JOHNJ", "ORTIZ", "JOHNJ", "QUARL", "PAULP", "RADRA", "HRHRH", "RAORA", "HEENA", "RATHO", "KAYKA", "ROBBI", "STEVE", "ROBBI", "DAWNL", "ROBER", "MARKM", "ROBIN", "JIANH", "RUANR", "LINDA", "RUTHE", "RAVIR", "SANDH", "JESSI", "SHERE", "SAMSA", "SILVE", "ROCKY", "SLAVI", "JUANJ", "VALAD", "WEIWA", "WANGW", "XIAOY", "WANGW", "GREGO", "WHITE", "MIMIM", "XIEXI", "TIMOT", "YUENY", "WEINI", "ZHANG", "DAKAI", "ZHUZH"};
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *cipher = "SLRWY";
	int i, j, index;
	char char1;
	char *ptr = malloc(2*sizeof(char));
	char *str = (char*)malloc(sizeof(char)*6);
	for(i = 0; i < 91; i++)
	{
		for(j = 0; j < 5; j++)
		{
			index = num(cipher[j]) - num(keys[i][j]);
			if(index >= 0)
			{
				char1 = alphabet[index];
				ptr[0] = char1;
				ptr[1] = '\0';
				strncat(str, ptr, 1);
			}
			else if(index < 0)
			{
				char1 = alphabet[26-abs(index)];
				ptr[0] = char1;
				ptr[1] = '\0';
				strncat(str, ptr, 1);
			}
		}
		str[5] = '\0';
		printf("For %d: %s\n", i, str);
		memset(str,0,strlen(str));
	}		
		
	free(ptr);
	free(str);
	return 0;
}
int num(char letter)
{
	int num;
	switch(letter) {
		case 'A' :
			num = 0;
			break;
		case 'B' :
			num = 1;
			break;
		case 'C' :
			num = 2;
			break;
		case 'D' :
			num = 3;
			break;
		case 'E' :
			num = 4;
			break;
		case 'F' :
			num = 5;
			break;
		case 'G' :
			num = 6;
			break;
		case 'H' :
			num = 7;
			break;
		case 'I' :
			num = 8;
			break;
		case 'J' :
			num = 9;
			break;
		case 'K' :
			num = 10;
			break;
		case 'L' :
			num = 11;
			break;
		case 'M' :
			num = 12;
			break;
		case 'N' :
			num = 13;
			break;
		case 'O' :
			num = 14;
			break;
		case 'P' :
			num = 15;
			break;
		case 'Q' :
			num = 16;
			break;
		case 'R' :
			num = 17;
			break;
		case 'S' :
			num = 18;
			break;
		case 'T' :
			num = 19;
			break;
		case 'U' :
			num = 20;
			break;
		case 'V' :
			num = 21;
			break;
		case 'W' :
			num = 22;
			break;
		case 'X' :
			num = 23;
			break;
		case 'Y' :
			num = 24;
			break;
		case 'Z' :
			num = 25;
			break;
		default :
			num = -1;
		}
	return num;
}


