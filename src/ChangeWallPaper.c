/*
 ============================================================================
 Name        : ChangeWallPaper.c
 Author      : PSI
 Version     :
 Copyright   : (C)ψ（プサイ）の興味関心空間
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc,char* argv[]) {
    SystemParametersInfo (SPI_SETDESKWALLPAPER,
                          0,
                          "wallpaper.bmp", //壁紙のファイルパス（絶対パス）
                          SPIF_UPDATEINIFILE | SPIF_SENDWININICHANGE);
	return EXIT_SUCCESS;
}
