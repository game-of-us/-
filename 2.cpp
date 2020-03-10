#include <conio.h>
 
void keytouch();
 
int main()
{
    keytouch();
    return 0;
}
 
void keytouch()
{
    char key = 0;
	if(kbhit())
	{
		key = getch();
 
		if(key == 'a')
			position_y --;
		if(key == 's')
			position_x ++;
		if(key == 'd')
			position_y ++;
		if(key == 'w')
			position_x --;
 
	}


