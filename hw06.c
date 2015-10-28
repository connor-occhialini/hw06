#include <stdio.h>

size_t strlen(const char *str);

void caesar(int key, char message[])
{
	int LENGTH = strlen(message);
	char output[LENGTH];
	int i;
	for(i=0; message[i] != '\0'; i++)
	{
		if(message[i] >= 'a' && message[i] <= 'z')
		{
			output[i] = (message[i] - 'a' + key)%26 + 'a';
		}
		else if(message[i] >= 'A' && message[i] <= 'Z')
		{
			output[i] = (message[i] - 'A' + key)%26 + 'A';
		}
		else output[i] = message[i];
	}
	puts(output);
}

int main(void)
{
	int i;
	for(i=0; i<27; i++)
	{
		caesar(i,"Sp S rkn kcuon zoyzvo grkd droi gkxdon, droi gyevn rkfo cksn pkcdob rybcoc.");
	}
}
