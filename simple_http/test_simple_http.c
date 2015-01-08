/*
DiabloHorn http://diablohorn.wordpress.com
*/
#include "simple_http.h"
#include <stdio.h>
/*
TODO:
support ssl
*/
int main(int argc, char *argv[]){
	unsigned char *http_response_content = NULL;
	//HANDLE tempfile = NULL;
	//DWORD tempfilesize = 0;
	//unsigned char *readbuffer;
	//DWORD readbytes = 0;
	DWORD http_response_code = -1;

	//tempfile = CreateFile("../a.dll", GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	//tempfilesize = GetFileSize(tempfile, NULL);
	//readbuffer = malloc(tempfilesize);
	//ReadFile(tempfile, readbuffer, tempfilesize, &readbytes, NULL);
	//CloseHandle(tempfile);
	//http_response_code = http_post_binary("http://10.50.0.122:8008/", readbuffer, tempfilesize, &http_response_content);
	//printf("%d\n", http_response_code);
	//printf("%s\n", http_response_content);
	http_response_code = http_get_content("http://www.google.nl/?gfe_rd=cr&ei=z8yuVPmBEsmE5Aae-IGgDQ", &http_response_content);
	printf("%d\n", http_response_code);
	printf("%s\n", http_response_content);

	http_response_code = https_get_content("https://www.fox-it.com:443/", &http_response_content);
	printf("%d\n", http_response_code);
	printf("%s\n", http_response_content);

}