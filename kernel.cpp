
void printf(char* str)
{
	unsigned short* VideoMemory = (unsigned short*)0xb8000;

	for(int i = 0; str[i] != '\0'; i++)
		VideoMemory[i] = (VideoMemory[i] & 0xF00) | str[i];
}

void kernelMain(void* multiboot_structure, unsigned int magicnumber)
{
	printf("Hello, World!");

	while(1);
}
