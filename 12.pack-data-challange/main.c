#include <stdio.h>
#include <stdbool.h>

/* LINES*/
#define SOLID 0  
#define DOTTED 1
#define DASHED 2 

/*COLOR PALETTE*/

#define BLACK 0 
#define RED 1
#define GREEN 2 
#define YELLOW (RED|GREEN)
#define BLUE 4 
#define CYAN (BLUE|GREEN)
#define MAGENTA (BLUE|RED)
#define WHITE (BLUE|GREEN|RED)



struct box_props
{
  bool opaque:1; // background transparent opaque 
  unsigned int color:3;//100 blue 110 cyan 001 red 010 green 101 magenta
  unsigned int :4;
  unsigned int border:1;// show or hidden
  unsigned int border_color:3;// border color
  unsigned int border_style:2; // 0-1-3
  unsigned int :2;
};

char *color[8]= {"black","red","green","yellow","blue","cyan","magenta","white"};


void showSettings(const struct box_props *pb){
  
    printf("bg: %s\n", pb->opaque == true ? "opaque":"transparent");
    printf("color: %s\n", color[pb->color]);
    printf("border: %s\n", pb->border == true ? "show":"hide");
    printf("border_color: %s\n", color[pb->border_color]);
    printf("border_style: ");
    switch (pb->border_style)
    {
    case SOLID: printf("solid\n"); break;
    case DOTTED: printf("dotted\n"); break;
    case DASHED: printf("dashed\n"); break;
    default: printf("unknow type.\n");
      break;
    }
}

int main (){
  struct box_props defaultBox;  
  struct box_props box = {true, YELLOW, true, GREEN, DASHED};
     printf("Default settings:\n");
     showSettings(&box);

     box.border = false;
     box.border_color = GREEN;
     box.border_style = DOTTED;
     box.border_color=BLUE;
    printf("\nCustom settings:\n");
    showSettings(&box);
    return 0; 
};

