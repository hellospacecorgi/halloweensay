#include <stdlib.h>
#include <stdio.h>

//ASCII art reference :https://www.asciiart.eu/

void pumpkin(){
	printf("	  ___\n");
	printf("       ___)__|_\n");
	printf("  .-*'          '*-,\n");
	printf(" /      /|   |\\     \\\n");
	printf(";      /_|   |_\\     ;\n");
	printf(";   |\\           /|  ;\n");
	printf(";   | ''--...--'' |  ;\n");
	printf(" \\  ''---.....--''  /\n");
	printf("  ''*-.,_______,.-*'    low\n");
	printf("\n");

}

void reaper(){
	printf("	     ___\n");
	printf("            /   \\\\\n");
    printf("       /\\\\ | . . \\\\\n");     
    printf("     ////\\\\|     ||\n");
    printf("   ////   \\\\ ___//\\\n");  
    printf("  ///      \\\\      \\\n");  
    printf(" ///       |\\\\      |\n");
    printf("//         | \\\\  \\   \\\n");
    printf("/          |  \\\\  \\   \\\n");   
    printf("           |   \\\\ /   /\n");
    printf("           |    \\/   /\n");  
    printf("           |     \\/|\n");
    printf("           |      \\|\n");
    printf("           |       \\\n");
   	printf("           |        |\n");
   	printf("           |_________\\ \n");
    printf("     from Dustin Slater\n");

}

int main(int argc, char** argv){
	char* string = "Halloween wooOOOOOooooo!";
	if(argc > 1){
		string = argv[1];
	}

	printf("<  %s  >\n", string);
	printf("\t|\n");
	printf("\t |\n");
	pumpkin();
	//reaper();

	return 0;
}