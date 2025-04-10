#define F_CPU 8000000UL

#include "main.h"

int main(void)
{
	int i = 0;
	SM_ini();
    while(1)
    {
		for (i=0;i<=512;i++)
		{
			SM_forvard();
		}
		_delay_ms(300);
		for (i=0;i<=512;i++)
		{
			SM_back();
		}
		_delay_ms(300);
    }
}