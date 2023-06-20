/* Detect graphic driver and mode */

#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
  char *driver[] = {"DETECT",
		    "CGA",
		    "MCGA",
		    "EGA",
		    "EGA64",
		    "EGAMONO",
		    "RESERVED",
		    "HERCMONO",
		    "ATT400",
		    "VGA",
		    "PC3270"};

  int graphics_mode, graphics_driver;

  detectgraph(&graphics_driver, &graphics_mode);

  if(graphics_driver<0)
    puts("Non-graphics system.");
  else {
    printf("System graphics driver : %s.\n", driver[graphics_driver]);
    printf("Graphics mode : %d.\n", graphics_mode);
  }
  getch();
  return 0;
}